#include "StackCtrl.h"

#define LLOG(x)  // RLOG("StackCtrl [#" << this << "]: " x)
#define LDUMP(x) // RDUMP(x)

namespace Upp {

StackCtrl::StackCtrl()
: activectrl(nullptr)
, duration(0)
, vertical(false)
, wheel(false)
, animating(false)
{
}

StackCtrl& StackCtrl::Add(Ctrl& ctrl)
{
	LLOG("Add(" << &ctrl << ")");
	return Insert(GetCount(), ctrl);
}

StackCtrl& StackCtrl::Insert(int i, Ctrl& ctrl)
{
	LLOG("Insert(" << i << ", " << &ctrl << ")");
	if(ctrl.InFrame())
		Ctrl::Add(ctrl);
	else {
		ctrl.Hide();
		Ctrl::Add(ctrl.SizePos());
		list.Insert(i, &ctrl);
		Activate(&ctrl);
	}
	return *this;
}

void StackCtrl::Remove(Ctrl& ctrl)
{
	LLOG("Remove(" << &ctrl << ")");

	int i = list.Find(&ctrl);
	if(i < 0)
		return;
	if(i > 0)
		Goto(i - 1);
	else
		Goto(i + 1);
	list.RemoveKey(&ctrl);
	ctrl.Remove();
}

void StackCtrl::Prev()
{
	LLOG("Prev(" << activectrl <<")");

	int i = list.Find(activectrl);
	if(i < 0)
		return;
	if(i > 0)
		Goto(i - 1);
	else
	if(wheel)
		GoEnd();
}

void StackCtrl::Next()
{
	LLOG("Next()");
	
	int i = list.Find(activectrl);
	if(i < 0)
		return;
	if(i < GetCount() - 1)
		Goto(i + 1);
	else
	if(wheel)
		GoBegin();
}

void StackCtrl::Activate(Ctrl *ctrl)
{
	LLOG("Activate(" << ctrl << ")");
	
	if(!ctrl)
		return;
	
	if(!activectrl)
		activectrl = ctrl;

	GuiLock __;

	if(activectrl != ctrl) {
		if(duration >= 100)
			Animate(ctrl, IsNext(ctrl));
		activectrl->Hide();
		activectrl = ctrl;
	}

	activectrl->Show();
	activectrl->SetFocus();
	WhenAction();
}

bool StackCtrl::IsNext(Ctrl *nextctrl) const
{
	// Handle cyclic navigation
	int curr  = list.Find(activectrl);
	int next  = list.Find(nextctrl);
	int total = list.GetCount();
	return (curr < next) || (total > 2 && curr == total - 1 && next == 0);
}

void StackCtrl::Animate(Ctrl *nextctrl, bool forward)
{
	if(animating)
		return;

	LLOG("Animate(" << nextctrl << ")");

	animating = true;
	
	Rect view = GetView();
	Size size = view.GetSize();
	
	// Prepare source and destination rectangles
	Rect rsrc1 = view;
	Rect rdst1 = view;
	Rect rsrc2 = view;
	Rect rdst2 = view;

	// Offset rectangles based on animation direction
	if(vertical) {
		rdst1.OffsetVert(forward ? -size.cy :  size.cy);
		rsrc2.OffsetVert(forward ?  size.cy : -size.cy);
	}
	else {
		rdst1.OffsetHorz(forward ? -size.cx :  size.cx);
		rsrc2.OffsetHorz(forward ?  size.cx : -size.cx);
	}

	// Prepare new control
	nextctrl->SetRect(rsrc2);
	nextctrl->Show();

	// Animation loop
	for(int start = msecs();;) {
		int elapsed = msecs(start);
		if(elapsed > duration)
			break;
		Rect r1 = rsrc1, r2 = rsrc2;
		r1 += (rdst1 - rsrc1) * elapsed / duration; // Lerp
		r2 += (rdst2 - rsrc2) * elapsed / duration; // Lerp
		activectrl->SetRect(r1);
		nextctrl->SetRect(r2);
#ifdef PLATFORM_POSIX
		activectrl->Sync();
		nextctrl->Sync();
#else
		activectrl->Refresh();
		nextctrl->Refresh();
#endif
		if(IsMainThread()) {
			Ctrl::ProcessEvents();
			GuiSleep(0);
		}
	}
	
	activectrl->SizePos();
	nextctrl->SizePos();
	
	animating = false;
}

void StackCtrl::Serialize(Stream& s)
{
	LLOG("Serialize()");
	
	s % wheel % vertical % duration;
}

}
