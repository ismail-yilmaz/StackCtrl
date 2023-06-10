topic "";
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
[s2;%% This class provides a stack of ctrls where only one ctrl is 
visible at a time.&]
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
[s5;:Upp`:`:StackCtrl`:`:Wheel`(bool`): StackCtrl[@(0.0.255) `&] [* Wheel]([@(0.0.255) bool
] [*@3 b] [@(0.0.255) `=] [@(0.0.255) true])&]
[s2;%% Enables or disables circular navigation between stacked ctrls.&]
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
[s5;:Upp`:`:StackCtrl`:`:Find`(Upp`:`:Ctrl`&`)const: [@(0.0.255) int] 
[* Find](Ctrl[@(0.0.255) `&] [*@3 ctrl]) [@(0.0.255) const]&]
[s2;%% Returns the index of [%-*@3 ctrl] in the stack, or `-1 if the 
ctrl is not in the stack.&]
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