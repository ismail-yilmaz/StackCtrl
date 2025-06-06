topic "StackCtrl";
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,2#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[2 $$0,0#00000000000000000000000000000000:Default]
[{_} 
[ {{10000@(113.42.0) [s0;%% [*@7;4 StackCtrl]]}}&]
[s4; &]
[s1;:Upp`:`:StackCtrl: [*3 StackCtrl][3  ][@(0.0.255)3 :][3  ][@(0.0.255)3 public][3  
ParentCtrl]&]
[s2;%% This class provides a widget stacking container, where only 
one ctrl is visible at a time.&]
[s3; &]
[ {{10000F(128)G(128)@1 [s0;%% [* Constructor detail]]}}&]
[s3; &]
[s5;:Upp`:`:StackCtrl`:`:StackCtrl`(`): [* StackCtrl]()&]
[s2;%%  Default constructor.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:`~`(`): [@(0.0.255) virtual] [* `~StackCtrl]()&]
[s2;%% Default destructor.&]
[s3; &]
[ {{10000F(128)G(128)@1 [s0;%% [* Public Method List]]}}&]
[s3; &]
[s5;:Upp`:`:StackCtrl`:`:WhenInsert: Event<[@(0.0.255) int], Ctrl[@(0.0.255) `&]> 
[* WhenInsert]&]
[s2;%% Dispatched when a ctrl is added or inserted to the stack. 
Passes the index and reference of the stacked ctrl.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:WhenRemove: Event<[@(0.0.255) int], Ctrl[@(0.0.255) `&]> 
[* WhenRemove]&]
[s2;%% Dispatched just before a ctrl is removed from the stack. Passes 
the index and reference of the removed ctrl. Note that the index 
is still valid at this point.&]
[s3; &]
[s3; &]
[s5;:Upp`:`:StackCtrl`:`:Wheel`(bool`): StackCtrl[@(0.0.255) `&] [* Wheel]([@(0.0.255) bool
] [*@3 b] [@(0.0.255) `=] [@(0.0.255) true])&]
[s2;%% Enables or disables circular navigation between stacked ctrls.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Animation`(int`): StackCtrl[@(0.0.255) `&] 
[* Animation]([@(0.0.255) int] [*@3 ms] [@(0.0.255) `=] [@3 150])&]
[s2;%% Enables or disables the ctrl transition animation. The animation 
duration in miliseconds can be set using the [%-*@3 ms] parameter. 
The value should be in between 100 ms and 1000 ms (1 secs). Setting 
the duration anything below 100 ms effectively disables the animation. 
Returns `*this for method chaining.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GetDuration`(`)const: [@(0.0.255) int] [* GetDuration]() 
[@(0.0.255) const]&]
[s2;%% Returns the animation duration in miliseconds. Note that any 
value below 100 ms means that the animation is disabled.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Horz`(`): StackCtrl[@(0.0.255) `&] [* Horz]()&]
[s2;%% Sets the orientation of ctrl transition animation to horizontal. 
Returns `*this for method chaining.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Vert`(`): StackCtrl[@(0.0.255) `&] [* Vert]()&]
[s2;%% Sets the orientation of ctrl transition animation to vertical. 
Returns `*this for method chaining. &]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Add`(Upp`:`:Ctrl`&`): StackCtrl[@(0.0.255) `&] 
[* Add](Ctrl[@(0.0.255) `&] [*@3 ctrl])&]
[s2;%% Adds a new [%-*@3 ctrl] to the stack and activates it. Returns 
`*this for method chaining.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Insert`(int`,Upp`:`:Ctrl`&`): StackCtrl[@(0.0.255) `&] 
[* Insert]([@(0.0.255) int] [*@3 i], Ctrl[@(0.0.255) `&] [*@3 ctrl])&]
[s2;%% Inserts a new [%-*@3 ctrl ]to the stack at index [%-*@3 i] and 
activates it. Returns `*this for method chaining.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Remove`(Upp`:`:Ctrl`&`): [@(0.0.255) void] 
[* Remove](Ctrl[@(0.0.255) `&] [*@3 ctrl])&]
[s2;%% Removes the [%-*@3 ctrl] from the stack.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Remove`(int`): [@(0.0.255) void] [* Remove]([@(0.0.255) int] 
[*@3 i])&]
[s2;%% Remove the ctrl at index [%-*@3 i] from the stack.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GetCount`(`)const: [@(0.0.255) int] [* GetCount]() 
[@(0.0.255) const]&]
[s2;%% Returns the number of stacked ctrls.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GetCursor`(`)const: [@(0.0.255) int] [* GetCursor]() 
[@(0.0.255) const]&]
[s2;%% Returns the index of the active (visible) stacked ctrl, if 
any. Returns `-1 if there is no ctrl in the stack.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Get`(int`): Ctrl[@(0.0.255) `&] [* Get]([@(0.0.255) int] 
[*@3 i])&]
[s5;:Upp`:`:StackCtrl`:`:operator`[`]`(int`): Ctrl[@(0.0.255) `&] operator[@(0.0.255) `[`]
]([@(0.0.255) int] i)&]
[s2;%% Returns a reference to the stacked ctrl at index [%-*@3 i]. 
Note that out of bound indices will cause this method and operator 
to ASSERT in DEBUG mode and result in undefined behavior in RELEASE 
mode. This can be avoided by clamping the indices between 0 and 
GetCount() `- 1.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GetActiveCtrl`(`)const: Ctrl[@(0.0.255) `* 
][* GetActiveCtrl]() [@(0.0.255) const]&]
[s2;%% Returns a pointer to active (shown) ctrl. Returns nullptr 
on failure. .&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Find`(Upp`:`:Ctrl`&`)const: [@(0.0.255) int] 
[* Find](Ctrl[@(0.0.255) `&] [*@3 ctrl]) [@(0.0.255) const]&]
[s2;%% Returns the index of [%-*@3 ctrl] in the stack, or `-1 if the 
ctrl is not in the stack.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Swap`(int`,int`): [@(0.0.255) void] [* Swap]([@(0.0.255) int] 
[*@3 a], [@(0.0.255) int] [*@3 b])&]
[s2;%% Swaps the positions of two stacked ctrls.  [%-*@3 a] designates 
the index of the first ctrl, and [%-*@3 b ]designates the index 
of the second ctrl. Does nothing when the given indices are out 
of range.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Swap`(Ctrl`&`,Ctrl`&`): [@(0.0.255) void] 
[* Swap](Ctrl[@(0.0.255) `&] [*@3 a], Ctrl[@(0.0.255) `&] [*@3 b])&]
[s2;%% Swaps the position of the stacked ctrl [%-*@3 a] with ctrl [%-*@3 b].&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:SwapNext`(`): [@(0.0.255) void] [* SwapNext]()&]
[s2;%% Swaps the position of active ctrl with the next one`'s. Does 
nothing if the active ctrl is at the end of the list.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:SwapPrev`(`): [@(0.0.255) void] [* SwapPrev]()&]
[s2;%% Swaps the position of active ctrl with the previous one`'s. 
Does nothing if the active ctrl is at the end of the list.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Goto`(int`): [@(0.0.255) void] [* Goto]([@(0.0.255) int] 
[*@3 i])&]
[s2;%% Shows and activates the stacked ctrl at index [%-*@3 i], if 
any.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Goto`(Upp`:`:Ctrl`&`): [@(0.0.255) void] [* Goto](Ctrl[@(0.0.255) `&
] [*@3 ctrl])&]
[s2;%% Shows and activates the stacked [%-*@3 ctrl], if any.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Prev`(`): [@(0.0.255) void] [* Prev]()&]
[s2;%% Shows and activates the previous stacked ctrl.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:Next`(`): [@(0.0.255) void] [* Next]()&]
[s2;%% Shows and activates the next stacked ctrl.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GoBegin`(`): [@(0.0.255) void] [* GoBegin]()&]
[s2;%% Shows and activates the first stacked ctrl.&]
[s3; &]
[s4; &]
[s5;:Upp`:`:StackCtrl`:`:GoEnd`(`): [@(0.0.255) void] [* GoEnd]()&]
[s2;%% Shows and activates the last stacked ctrl.&]
[s3; &]
[s0;%% ]]