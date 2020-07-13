#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class Fsm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "Fsm"));
	}

	template <typename T = int32_t> static T& CurrentDataVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DefaultMaxLoops() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& StartStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& updateHelperSetDirty() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& EventData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& debugLookAtColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& debugRaycastColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> T& dataVersion() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& usedInTemplate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& startState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& states() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& events() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& globalTransitions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& description() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& docUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& showStateLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& maxLoopCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& watermark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& locked() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& manualUpdate() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& keepDelayedEventsOnStateExit() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = bool> T& preprocessed() {
		return *(T*)((uintptr_t)this + 0x4B);
	}
	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& rootFsm() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& subFsmList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& setDirty() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& activeStateEntered() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ExposedEvents() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& myLog() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& RestartOnEnable() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& EnableDebugFlow() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& EnableBreakpoints() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& StepFrame() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& delayedEvents() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& updateEvents() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& removeEvents() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& editorFlags() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& activeStateName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& activeState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& switchToState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& previousActiveState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& StateColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& editState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& mouseEvents() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& handleLevelLoaded() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& handleTriggerEnter2D() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& handleTriggerExit2D() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = bool> T& handleTriggerStay2D() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& handleCollisionEnter2D() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = bool> T& handleCollisionExit2D() {
		return *(T*)((uintptr_t)this + 0x96);
	}
	template <typename T = bool> T& handleCollisionStay2D() {
		return *(T*)((uintptr_t)this + 0x97);
	}
	template <typename T = bool> T& handleTriggerEnter() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& handleTriggerExit() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& handleTriggerStay() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = bool> T& handleCollisionEnter() {
		return *(T*)((uintptr_t)this + 0x9B);
	}
	template <typename T = bool> T& handleCollisionExit() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& handleCollisionStay() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = bool> T& handleParticleCollision() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = bool> T& handleControllerColliderHit() {
		return *(T*)((uintptr_t)this + 0x9F);
	}
	template <typename T = bool> T& handleJointBreak() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& handleJointBreak2D() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& handleOnGUI() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = bool> T& handleFixedUpdate() {
		return *(T*)((uintptr_t)this + 0xA3);
	}
	template <typename T = bool> T& handleApplicationEvents() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& lastRaycastHit2DInfoLUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> T& handleAnimatorMove() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = bool> T& handleAnimatorIK() {
		return *(T*)((uintptr_t)this + 0xA6);
	}
	template <typename T = uintptr_t> static T& targetSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> T& Started() {
		return *(T*)((uintptr_t)this + 0xA7);
	}
	template <typename T = uintptr_t> T& EventTarget() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& Finished() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LastTransition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& IsModifiedPrefabInstance() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& LastClickedObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = bool> static T& BreakpointsEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = bool> static T& HitBreakpoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35);
	}
	template <typename T = uintptr_t> static T& BreakAtFsm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& BreakAtState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = bool> static T& IsBreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& IsErrorBreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41);
	}
	template <typename T = Il2CppString*> static T& LastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = bool> static T& StepToStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& StepFsm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = bool> T& SwitchedState() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = uintptr_t> T& CollisionInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TriggerCollider() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Collision2DInfo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TriggerCollider2D() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& JointBreakForce() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BrokenJoint2D() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ParticleCollisionGO() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& TriggerName() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& CollisionName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& Trigger2dName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& Collision2dName() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ControllerCollider() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& RaycastHitInfo() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_FsmList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EECC58))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_SortedFsmList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EECF08))(0);
	}
	template <typename T = uintptr_t> T get_UpdateHelperSetDirty() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EECFE0))(this);
	}
	template <typename T = bool> T get_ManualUpdate() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED0F8))(this);
	}
	template <typename T = void> T set_ManualUpdate(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED100))(this, value);
	}
	template <typename T = bool> T get_KeepDelayedEventsOnStateExit() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED108))(this);
	}
	template <typename T = void> T set_KeepDelayedEventsOnStateExit(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED110))(this, value);
	}
	template <typename T = bool> T get_Preprocessed() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED118))(this);
	}
	template <typename T = void> T set_Preprocessed(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED120))(this, value);
	}
	template <typename T = uintptr_t> T get_Host() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED128))(this);
	}
	template <typename T = void> T set_Host(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EED130))(this, value);
	}
	template <typename T = Il2CppString*> T get_Password() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED138))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED140))(this);
	}
	template <typename T = void> T Lock(Il2CppString* pass) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EED148))(this, pass);
	}
	template <typename T = void> T Unlock(Il2CppString* pass) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EED160))(this, pass);
	}
	template <typename T = uintptr_t> T get_Template() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED274))(this);
	}
	template <typename T = bool> T get_IsSubFsm() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED394))(this);
	}
	template <typename T = uintptr_t> T get_RootFsm() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED3A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SubFsmList() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED400))(this);
	}
	template <typename T = bool> T get_Started() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED4B0))(this);
	}
	template <typename T = void> T set_Started(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED4B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DelayedEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED4C0))(this);
	}
	template <typename T = void> T KillDelayedEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED4C8))(this);
	}
	template <typename T = int32_t> T get_DataVersion() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2ED3B04))(this);
	}
	template <typename T = void> T set_DataVersion(int32_t value) {
		return ((T (*)(Fsm*, int32_t))(Il2CppBase() + 0x2EED560))(this, value);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2ED984C))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EED568))(this, value);
	}
	template <typename T = bool> T get_NameIsExpanded() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED570))(this);
	}
	template <typename T = void> T set_NameIsExpanded(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED57C))(this, value);
	}
	template <typename T = bool> T get_ControlsIsExpanded() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED598))(this);
	}
	template <typename T = void> T set_ControlsIsExpanded(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED5A8))(this, value);
	}
	template <typename T = bool> T get_DebugIsExpanded() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED5C4))(this);
	}
	template <typename T = void> T set_DebugIsExpanded(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED5D4))(this, value);
	}
	template <typename T = bool> T get_ExperimentalIsExpanded() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED5F0))(this);
	}
	template <typename T = void> T set_ExperimentalIsExpanded(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED600))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED61C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EED624))(this, value);
	}
	template <typename T = uintptr_t> T get_UsedInTemplate() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED62C))(this);
	}
	template <typename T = void> T set_UsedInTemplate(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EC7CEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED634))(this);
	}
	template <typename T = void> T set_StartState(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EED63C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_States() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED644))(this);
	}
	template <typename T = void> T set_States(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Fsm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2EED64C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Events() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED654))(this);
	}
	template <typename T = void> T set_Events(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Fsm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2EED65C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GlobalTransitions() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EE9260))(this);
	}
	template <typename T = void> T set_GlobalTransitions(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Fsm*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2EED664))(this, value);
	}
	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EDAB08))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EED66C))(this, value);
	}
	template <typename T = uintptr_t> T get_EventTarget() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED674))(this);
	}
	template <typename T = void> T set_EventTarget(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EED67C))(this, value);
	}
	template <typename T = bool> T get_Initialized() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED684))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED68C))(this);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED82C))(this);
	}
	template <typename T = void> T set_Finished(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EED928))(this, value);
	}
	template <typename T = bool> T get_IsSwitchingState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED930))(this);
	}
	template <typename T = uintptr_t> T get_ActiveState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED834))(this);
	}
	template <typename T = void> T set_ActiveState(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEDA60))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveStateName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDB04))(this);
	}
	template <typename T = uintptr_t> T get_PreviousActiveState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDB0C))(this);
	}
	template <typename T = void> T set_PreviousActiveState(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEDB14))(this, value);
	}
	template <typename T = uintptr_t> T get_LastTransition() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDB1C))(this);
	}
	template <typename T = void> T set_LastTransition(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEDB24))(this, value);
	}
	template <typename T = int32_t> T get_MaxLoopCount() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDB2C))(this);
	}
	template <typename T = int32_t> T get_MaxLoopCountOverride() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDB3C))(this);
	}
	template <typename T = void> T set_MaxLoopCountOverride(int32_t value) {
		return ((T (*)(Fsm*, int32_t))(Il2CppBase() + 0x2EEDB44))(this, value);
	}
	template <typename T = Il2CppString*> T get_OwnerName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDBF8))(this);
	}
	template <typename T = Il2CppString*> T get_OwnerDebugName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDCF0))(this);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDE5C))(this);
	}
	template <typename T = Il2CppString*> T get_GameObjectName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEDF3C))(this);
	}
	template <typename T = uintptr_t> T get_OwnerObject() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE044))(this);
	}
	template <typename T = uintptr_t> T get_FsmComponent() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE104))(this);
	}
	template <typename T = uintptr_t> T get_MyLog() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EE9D20))(this);
	}
	template <typename T = bool> T get_IsModifiedPrefabInstance() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE46C))(this);
	}
	template <typename T = void> T set_IsModifiedPrefabInstance(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEE474))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE47C))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEE484))(this, value);
	}
	template <typename T = Il2CppString*> T get_Watermark() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE48C))(this);
	}
	template <typename T = void> T set_Watermark(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEE494))(this, value);
	}
	template <typename T = bool> T get_ShowStateLabel() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE49C))(this);
	}
	template <typename T = void> T set_ShowStateLabel(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEE4A4))(this, value);
	}
	template <typename T = uintptr_t> static T get_DebugLookAtColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEE4AC))(0);
	}
	template <typename T = void> static T set_DebugLookAtColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEE568))(0, value);
	}
	template <typename T = uintptr_t> static T get_DebugRaycastColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEE634))(0);
	}
	template <typename T = void> static T set_DebugRaycastColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEE6F0))(0, value);
	}
	template <typename T = Il2CppString*> T get_GuiLabel() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE7BC))(this);
	}
	template <typename T = Il2CppString*> T get_DocUrl() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE8A0))(this);
	}
	template <typename T = void> T set_DocUrl(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEE8A8))(this, value);
	}
	template <typename T = uintptr_t> T get_EditState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEE8B0))(this);
	}
	template <typename T = void> T set_EditState(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEE8B8))(this, value);
	}
	template <typename T = uintptr_t> static T get_LastClickedObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEE8C0))(0);
	}
	template <typename T = void> static T set_LastClickedObject(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEE970))(0, value);
	}
	template <typename T = bool> static T get_BreakpointsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEEA24))(0);
	}
	template <typename T = void> static T set_BreakpointsEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEEAD4))(0, value);
	}
	template <typename T = bool> static T get_HitBreakpoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEEB88))(0);
	}
	template <typename T = void> static T set_HitBreakpoint(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEEC38))(0, value);
	}
	template <typename T = uintptr_t> static T get_BreakAtFsm() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEECEC))(0);
	}
	template <typename T = void> static T set_BreakAtFsm(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEED9C))(0, value);
	}
	template <typename T = uintptr_t> static T get_BreakAtState() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEEE50))(0);
	}
	template <typename T = void> static T set_BreakAtState(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEEF00))(0, value);
	}
	template <typename T = bool> static T get_IsBreak() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEEFB4))(0);
	}
	template <typename T = void> static T set_IsBreak(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEF064))(0, value);
	}
	template <typename T = bool> static T get_IsErrorBreak() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEF118))(0);
	}
	template <typename T = void> static T set_IsErrorBreak(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEF1C8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LastError() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEF27C))(0);
	}
	template <typename T = void> static T set_LastError(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2EEF32C))(0, value);
	}
	template <typename T = bool> static T get_StepToStateChange() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEF3E0))(0);
	}
	template <typename T = void> static T set_StepToStateChange(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEF490))(0, value);
	}
	template <typename T = uintptr_t> static T get_StepFsm() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEF544))(0);
	}
	template <typename T = void> static T set_StepFsm(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEF5F4))(0, value);
	}
	template <typename T = bool> T get_SwitchedState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF6A8))(this);
	}
	template <typename T = void> T set_SwitchedState(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF6B0))(this, value);
	}
	template <typename T = bool> T get_MouseEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF6B8))(this);
	}
	template <typename T = void> T set_MouseEvents(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF6C0))(this, value);
	}
	template <typename T = bool> T get_HandleLevelLoaded() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF6FC))(this);
	}
	template <typename T = void> T set_HandleLevelLoaded(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF704))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerEnter2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF734))(this);
	}
	template <typename T = void> T set_HandleTriggerEnter2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF73C))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerExit2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF778))(this);
	}
	template <typename T = void> T set_HandleTriggerExit2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF780))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerStay2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF7BC))(this);
	}
	template <typename T = void> T set_HandleTriggerStay2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF7C4))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionEnter2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF800))(this);
	}
	template <typename T = void> T set_HandleCollisionEnter2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF808))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionExit2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF844))(this);
	}
	template <typename T = void> T set_HandleCollisionExit2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF84C))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionStay2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF888))(this);
	}
	template <typename T = void> T set_HandleCollisionStay2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF890))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerEnter() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF8CC))(this);
	}
	template <typename T = void> T set_HandleTriggerEnter(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF8D4))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerExit() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF910))(this);
	}
	template <typename T = void> T set_HandleTriggerExit(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF918))(this, value);
	}
	template <typename T = bool> T get_HandleTriggerStay() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF954))(this);
	}
	template <typename T = void> T set_HandleTriggerStay(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF95C))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionEnter() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF998))(this);
	}
	template <typename T = void> T set_HandleCollisionEnter(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF9A0))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionExit() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEF9DC))(this);
	}
	template <typename T = void> T set_HandleCollisionExit(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEF9E4))(this, value);
	}
	template <typename T = bool> T get_HandleCollisionStay() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFA20))(this);
	}
	template <typename T = void> T set_HandleCollisionStay(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFA28))(this, value);
	}
	template <typename T = bool> T get_HandleParticleCollision() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFA64))(this);
	}
	template <typename T = void> T set_HandleParticleCollision(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFA6C))(this, value);
	}
	template <typename T = bool> T get_HandleControllerColliderHit() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFAA8))(this);
	}
	template <typename T = void> T set_HandleControllerColliderHit(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFAB0))(this, value);
	}
	template <typename T = bool> T get_HandleJointBreak() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFAE0))(this);
	}
	template <typename T = void> T set_HandleJointBreak(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFAE8))(this, value);
	}
	template <typename T = bool> T get_HandleJointBreak2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFB24))(this);
	}
	template <typename T = void> T set_HandleJointBreak2D(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFB2C))(this, value);
	}
	template <typename T = bool> T get_HandleOnGUI() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFB68))(this);
	}
	template <typename T = void> T set_HandleOnGUI(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFB70))(this, value);
	}
	template <typename T = bool> T get_HandleFixedUpdate() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFBAC))(this);
	}
	template <typename T = void> T set_HandleFixedUpdate(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFBB4))(this, value);
	}
	template <typename T = bool> T get_HandleApplicationEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFBF0))(this);
	}
	template <typename T = void> T set_HandleApplicationEvents(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EEFBF8))(this, value);
	}
	template <typename T = void> T ResetEventHandlerFlags() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFC34))(this);
	}
	template <typename T = uintptr_t> T get_CollisionInfo() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFCF8))(this);
	}
	template <typename T = void> T set_CollisionInfo(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD00))(this, value);
	}
	template <typename T = uintptr_t> T get_TriggerCollider() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD08))(this);
	}
	template <typename T = void> T set_TriggerCollider(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD10))(this, value);
	}
	template <typename T = uintptr_t> T get_Collision2DInfo() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD18))(this);
	}
	template <typename T = void> T set_Collision2DInfo(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD20))(this, value);
	}
	template <typename T = uintptr_t> T get_TriggerCollider2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD28))(this);
	}
	template <typename T = void> T set_TriggerCollider2D(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD30))(this, value);
	}
	template <typename T = float> T get_JointBreakForce() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD38))(this);
	}
	template <typename T = void> T set_JointBreakForce(float value) {
		return ((T (*)(Fsm*, float))(Il2CppBase() + 0x2EEFD40))(this, value);
	}
	template <typename T = uintptr_t> T get_BrokenJoint2D() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD48))(this);
	}
	template <typename T = void> T set_BrokenJoint2D(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD50))(this, value);
	}
	template <typename T = uintptr_t> T get_ParticleCollisionGO() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD58))(this);
	}
	template <typename T = void> T set_ParticleCollisionGO(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFD60))(this, value);
	}
	template <typename T = uintptr_t> T get_CollisionGO() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD68))(this);
	}
	template <typename T = uintptr_t> T get_Collision2dGO() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD80))(this);
	}
	template <typename T = uintptr_t> T get_TriggerGO() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFD98))(this);
	}
	template <typename T = uintptr_t> T get_Trigger2dGO() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFE78))(this);
	}
	template <typename T = Il2CppString*> T get_TriggerName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFF58))(this);
	}
	template <typename T = void> T set_TriggerName(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEFF60))(this, value);
	}
	template <typename T = Il2CppString*> T get_CollisionName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFF68))(this);
	}
	template <typename T = void> T set_CollisionName(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEFF70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Trigger2dName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFF78))(this);
	}
	template <typename T = void> T set_Trigger2dName(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEFF80))(this, value);
	}
	template <typename T = Il2CppString*> T get_Collision2dName() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFF88))(this);
	}
	template <typename T = void> T set_Collision2dName(Il2CppString* value) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EEFF90))(this, value);
	}
	template <typename T = uintptr_t> T get_ControllerCollider() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFF98))(this);
	}
	template <typename T = void> T set_ControllerCollider(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFFA0))(this, value);
	}
	template <typename T = uintptr_t> T get_RaycastHitInfo() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EEFFA8))(this);
	}
	template <typename T = void> T set_RaycastHitInfo(uintptr_t value) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEFFEC))(this, value);
	}
	template <typename T = void> static T RecordLastRaycastHit2DInfo(uintptr_t fsm, uintptr_t info) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EF0030))(0, fsm, info);
	}
	template <typename T = uintptr_t> static T GetLastRaycastHit2DInfo(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF0234))(0, fsm);
	}
	template <typename T = bool> T get_HandleAnimatorMove() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF03F8))(this);
	}
	template <typename T = void> T set_HandleAnimatorMove(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EF0400))(this, value);
	}
	template <typename T = bool> T get_HandleAnimatorIK() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF043C))(this);
	}
	template <typename T = void> T set_HandleAnimatorIK(bool value) {
		return ((T (*)(Fsm*, bool))(Il2CppBase() + 0x2EF0444))(this, value);
	}
	template <typename T = uintptr_t> static T NewTempFsm() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF0480))(0);
	}
	template <typename T = uintptr_t> T CreateSubFsm(uintptr_t templateControl) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF4470))(this, templateControl);
	}
	template <typename T = uintptr_t> T GetRootFsm() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EED3CC))(this);
	}
	template <typename T = void> T CheckIfDirty() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF4674))(this);
	}
	template <typename T = void> T Reset(uintptr_t component) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF4B4C))(this, component);
	}
	template <typename T = void> T UpdateDataVersion() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF4EF8))(this);
	}
	template <typename T = void> T SaveActions() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF4F04))(this);
	}
	template <typename T = void> T Clear(uintptr_t component) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF4F9C))(this, component);
	}
	template <typename T = void> T FixDataVersion() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF51DC))(this);
	}
	template <typename T = int32_t> T DeduceDataVersion() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF520C))(this);
	}
	template <typename T = void> T Preprocess(uintptr_t component) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF52F8))(this, component);
	}
	template <typename T = void> T Preprocess_1() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF5740))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF63E0))(this);
	}
	template <typename T = void> T Init(uintptr_t component) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF4638))(this, component);
	}
	template <typename T = void> T Reinitialize() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF64D0))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF5324))(this);
	}
	template <typename T = void> T CheckFsmEventsForEventHandlers() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF5974))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF798C))(this);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t loadSceneMode) {
		return ((T (*)(Fsm*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EF7CF4))(this, scene, loadSceneMode);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF79F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8170))(this);
	}
	template <typename T = void> T UpdateDelayedEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF85E8))(this);
	}
	template <typename T = void> T ClearDelayedEvents() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8888))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8920))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8A64))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8BA8))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8BAC))(this);
	}
	template <typename T = void> T StopAndReset() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8CA4))(this);
	}
	template <typename T = bool> T HasEvent(Il2CppString* eventName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EF8F30))(this, eventName);
	}
	template <typename T = void> T ProcessEvent(uintptr_t fsmEvent, uintptr_t eventData) {
		return ((T (*)(Fsm*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EF90A0))(this, fsmEvent, eventData);
	}
	template <typename T = void> static T SetEventDataSentByInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF9A24))(0);
	}
	template <typename T = void> static T SetEventDataSentByInfo_1(uintptr_t eventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF9504))(0, eventData);
	}
	template <typename T = uintptr_t> static T GetEventDataSentByInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF9B7C))(0);
	}
	template <typename T = void> T Event(uintptr_t eventTarget, Il2CppString* fsmEventName) {
		return ((T (*)(Fsm*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2EF9C68))(this, eventTarget, fsmEventName);
	}
	template <typename T = void> T Event_1(uintptr_t eventTarget, uintptr_t fsmEvent) {
		return ((T (*)(Fsm*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EEC5CC))(this, eventTarget, fsmEvent);
	}
	template <typename T = void> T Event_2(Il2CppString* fsmEventName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EFAD90))(this, fsmEventName);
	}
	template <typename T = void> T Event_3(uintptr_t fsmEvent) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EEC5B8))(this, fsmEvent);
	}
	template <typename T = uintptr_t> T DelayedEvent(uintptr_t fsmEvent, float delay) {
		return ((T (*)(Fsm*, uintptr_t, float))(Il2CppBase() + 0x2EFAEA0))(this, fsmEvent, delay);
	}
	template <typename T = uintptr_t> T DelayedEvent_1(uintptr_t eventTarget, uintptr_t fsmEvent, float delay) {
		return ((T (*)(Fsm*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x2EFAF84))(this, eventTarget, fsmEvent, delay);
	}
	template <typename T = void> T BroadcastEvent(Il2CppString* fsmEventName, bool excludeSelf) {
		return ((T (*)(Fsm*, Il2CppString*, bool))(Il2CppBase() + 0x2EFB070))(this, fsmEventName, excludeSelf);
	}
	template <typename T = void> T BroadcastEvent_1(uintptr_t fsmEvent, bool excludeSelf) {
		return ((T (*)(Fsm*, uintptr_t, bool))(Il2CppBase() + 0x2EFAA84))(this, fsmEvent, excludeSelf);
	}
	template <typename T = void> T BroadcastEventToGameObject(uintptr_t go, Il2CppString* fsmEventName, bool sendToChildren, bool excludeSelf) {
		return ((T (*)(Fsm*, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x2EFB178))(this, go, fsmEventName, sendToChildren, excludeSelf);
	}
	template <typename T = void> T BroadcastEventToGameObject_1(uintptr_t go, uintptr_t fsmEvent, uintptr_t eventData, bool sendToChildren, bool excludeSelf) {
		return ((T (*)(Fsm*, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x2EF9EB8))(this, go, fsmEvent, eventData, sendToChildren, excludeSelf);
	}
	template <typename T = void> T SendEventToFsmOnGameObject(uintptr_t gameObject, Il2CppString* fsmName, Il2CppString* fsmEventName) {
		return ((T (*)(Fsm*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2EFB2DC))(this, gameObject, fsmName, fsmEventName);
	}
	template <typename T = void> T SendEventToFsmOnGameObject_1(uintptr_t gameObject, Il2CppString* fsmName, uintptr_t fsmEvent) {
		return ((T (*)(Fsm*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2EFA420))(this, gameObject, fsmName, fsmEvent);
	}
	template <typename T = void> T SetState(Il2CppString* stateName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EFB3EC))(this, stateName);
	}
	template <typename T = void> T UpdateStateChanges() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EECAEC))(this);
	}
	template <typename T = bool> T DoTransition(uintptr_t transition, bool isGlobal) {
		return ((T (*)(Fsm*, uintptr_t, bool))(Il2CppBase() + 0x2EF98C0))(this, transition, isGlobal);
	}
	template <typename T = void> T SwitchState(uintptr_t toState) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFB40C))(this, toState);
	}
	template <typename T = void> T GotoPreviousState() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EFB844))(this);
	}
	template <typename T = void> T EnterState(uintptr_t state) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFB63C))(this, state);
	}
	template <typename T = void> T FixedUpdateState(uintptr_t state) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF8A20))(this, state);
	}
	template <typename T = void> T UpdateState(uintptr_t state) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF8844))(this, state);
	}
	template <typename T = void> T LateUpdateState(uintptr_t state) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF8B64))(this, state);
	}
	template <typename T = void> T ExitState(uintptr_t state) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF8E24))(this, state);
	}
	template <typename T = uintptr_t> T GetSubFsm(Il2CppString* subFsmName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EFC12C))(this, subFsmName);
	}
	template <typename T = Il2CppString*> static T GetFullFsmLabel(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EFC290))(0, fsm);
	}
	template <typename T = uintptr_t> T GetOwnerDefaultTarget(uintptr_t ownerDefault) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EF9E64))(this, ownerDefault);
	}
	template <typename T = uintptr_t> T GetState(Il2CppString* stateName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EED940))(this, stateName);
	}
	template <typename T = uintptr_t> T GetEvent(Il2CppString* eventName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EF68FC))(this, eventName);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFC5FC))(this, obj);
	}
	template <typename T = uintptr_t> T GetFsmObject(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC27C))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmMaterial(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC254))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmTexture(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC2CC))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmFloat(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2ED9BCC))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmInt(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2ED9D88))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmBool(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2ED9F40))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmString(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC2A4))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmVector2(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDA0F8))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmVector3(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDA2B8))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmRect(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDA688))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmQuaternion(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDA854))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmColor(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDA4BC))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmGameObject(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDAA20))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmArray(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC16C))(this, varName);
	}
	template <typename T = uintptr_t> T GetFsmEnum(Il2CppString* varName) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2EDC198))(this, varName);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EFE5E8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EFE7E4))(this);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFE884))(this, collisionInfo);
	}
	template <typename T = void> T OnCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFEB7C))(this, collisionInfo);
	}
	template <typename T = void> T OnCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFEE74))(this, collisionInfo);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFF16C))(this, other);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFF464))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFF75C))(this, other);
	}
	template <typename T = void> T OnParticleCollision(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFFA54))(this, other);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2EFFD24))(this, collisionInfo);
	}
	template <typename T = void> T OnCollisionStay2D(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F0001C))(this, collisionInfo);
	}
	template <typename T = void> T OnCollisionExit2D(uintptr_t collisionInfo) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F00314))(this, collisionInfo);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F0060C))(this, other);
	}
	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F008F4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F00BDC))(this, other);
	}
	template <typename T = void> T OnControllerColliderHit(uintptr_t collider) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F00EC4))(this, collider);
	}
	template <typename T = void> T OnJointBreak(float breakForce) {
		return ((T (*)(Fsm*, float))(Il2CppBase() + 0x2F01194))(this, breakForce);
	}
	template <typename T = void> T OnJointBreak2D(uintptr_t brokenJoint) {
		return ((T (*)(Fsm*, uintptr_t))(Il2CppBase() + 0x2F01470))(this, brokenJoint);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2F01740))(this);
	}
	template <typename T = void> T OnAnimatorIK(int32_t layerIndex) {
		return ((T (*)(Fsm*, int32_t))(Il2CppBase() + 0x2F019A0))(this, layerIndex);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2F01C10))(this);
	}
	template <typename T = void> T DoBreakpoint() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF8080))(this);
	}
	template <typename T = void> T DoBreakError(Il2CppString* error) {
		return ((T (*)(Fsm*, Il2CppString*))(Il2CppBase() + 0x2F01F14))(this, error);
	}
	template <typename T = void> T DoBreak() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2F01D7C))(this);
	}
	template <typename T = void> T Continue() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2EF851C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Fsm*))(Il2CppBase() + 0x2F0215C))(this);
	}

};

}
