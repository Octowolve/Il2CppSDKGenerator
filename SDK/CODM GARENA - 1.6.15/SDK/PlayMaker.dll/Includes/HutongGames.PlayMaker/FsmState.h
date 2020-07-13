#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmState"));
	}

	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& activeAction() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& activeActionIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& description() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& colorIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppRect> T& position() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isBreakpoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isSequence() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& hideUnused() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& transitions() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& actions() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& actionData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& activeActions() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _finishedActions() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& StateTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& RealStartTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& loopCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& maxLoopCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = float> T get_StateTime() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F14E38))(this);
	}
	template <typename T = void> T set_StateTime(float value) {
		return ((T (*)(FsmState*, float))(Il2CppBase() + 0x2F14E40))(this, value);
	}
	template <typename T = float> T get_RealStartTime() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F0EE7C))(this);
	}
	template <typename T = void> T set_RealStartTime(float value) {
		return ((T (*)(FsmState*, float))(Il2CppBase() + 0x2F14E48))(this, value);
	}
	template <typename T = int32_t> T get_loopCount() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFB9C0))(this);
	}
	template <typename T = void> T set_loopCount(int32_t value) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F14E50))(this, value);
	}
	template <typename T = int32_t> T get_maxLoopCount() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F14E58))(this);
	}
	template <typename T = void> T set_maxLoopCount(int32_t value) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F14E60))(this, value);
	}
	template <typename T = Il2CppString*> static T GetFullStateLabel(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F14E68))(0, state);
	}
	template <typename T = void> T CopyActionData(uintptr_t state) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F14FBC))(this, state);
	}
	template <typename T = void> T LoadActions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EF68C8))(this);
	}
	template <typename T = void> T SaveActions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EF4F64))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ActiveActions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F14FF0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_finishedActions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F150A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFB9D4))(this);
	}
	template <typename T = bool> T ActivateActions(int32_t startIndex) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F15150))(this, startIndex);
	}
	template <typename T = bool> T OnEvent(uintptr_t fsmEvent) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EF962C))(this, fsmEvent);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFBAE4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFBC14))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFBD78))(this);
	}
	template <typename T = bool> T OnAnimatorMove() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F01854))(this);
	}
	template <typename T = bool> T OnAnimatorIK(int32_t layerIndex) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F01ABC))(this, layerIndex);
	}
	template <typename T = bool> T OnCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFEA28))(this, collisionInfo);
	}
	template <typename T = bool> T OnCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFED20))(this, collisionInfo);
	}
	template <typename T = bool> T OnCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFF018))(this, collisionInfo);
	}
	template <typename T = bool> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFF310))(this, other);
	}
	template <typename T = bool> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFF608))(this, other);
	}
	template <typename T = bool> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFF900))(this, other);
	}
	template <typename T = bool> T OnParticleCollision(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFFBD0))(this, other);
	}
	template <typename T = bool> T OnCollisionEnter2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EFFEC8))(this, collisionInfo);
	}
	template <typename T = bool> T OnCollisionStay2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F001C0))(this, collisionInfo);
	}
	template <typename T = bool> T OnCollisionExit2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F004B8))(this, collisionInfo);
	}
	template <typename T = bool> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F007A0))(this, other);
	}
	template <typename T = bool> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F00A88))(this, other);
	}
	template <typename T = bool> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F00D70))(this, other);
	}
	template <typename T = bool> T OnControllerColliderHit(uintptr_t collider) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F01040))(this, collider);
	}
	template <typename T = bool> T OnJointBreak(float force) {
		return ((T (*)(FsmState*, float))(Il2CppBase() + 0x2F0131C))(this, force);
	}
	template <typename T = bool> T OnJointBreak2D(uintptr_t joint) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F015EC))(this, joint);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F01C4C))(this);
	}
	template <typename T = void> T FinishAction(uintptr_t action) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F15604))(this, action);
	}
	template <typename T = void> T RemoveFinishedActions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F154A4))(this);
	}
	template <typename T = void> T CheckAllActionsFinished() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F152F0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFC084))(this);
	}
	template <typename T = void> T ResetLoopCount() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EFB5DC))(this);
	}
	template <typename T = uintptr_t> T GetTransition(int32_t transitionIndex) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F156B0))(this, transitionIndex);
	}
	template <typename T = int32_t> T GetTransitionIndex(uintptr_t transition) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2F15710))(this, transition);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F15790))(this);
	}
	template <typename T = uintptr_t> T get_ActiveAction() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F0C2E8))(this);
	}
	template <typename T = bool> T get_IsInitialized() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F15798))(this);
	}
	template <typename T = uintptr_t> T get_Fsm() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2ECF5A0))(this);
	}
	template <typename T = void> T set_Fsm(uintptr_t value) {
		return ((T (*)(FsmState*, uintptr_t))(Il2CppBase() + 0x2EF1034))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2ED3958))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(FsmState*, Il2CppString*))(Il2CppBase() + 0x2EF4E70))(this, value);
	}
	template <typename T = bool> T get_IsSequence() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F157A8))(this);
	}
	template <typename T = void> T set_IsSequence(bool value) {
		return ((T (*)(FsmState*, bool))(Il2CppBase() + 0x2F157B0))(this, value);
	}
	template <typename T = int32_t> T get_ActiveActionIndex() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F157B8))(this);
	}
	template <typename T = Il2CppRect> T get_Position() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F157C0))(this);
	}
	template <typename T = void> T set_Position(Il2CppRect value) {
		return ((T (*)(FsmState*, Il2CppRect))(Il2CppBase() + 0x2EF4E78))(this, value);
	}
	template <typename T = bool> T get_IsBreakpoint() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EF8078))(this);
	}
	template <typename T = void> T set_IsBreakpoint(bool value) {
		return ((T (*)(FsmState*, bool))(Il2CppBase() + 0x2F157D0))(this, value);
	}
	template <typename T = bool> T get_HideUnused() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F157D8))(this);
	}
	template <typename T = void> T set_HideUnused(bool value) {
		return ((T (*)(FsmState*, bool))(Il2CppBase() + 0x2F157E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Actions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EF5830))(this);
	}
	template <typename T = void> T set_Actions(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmState*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F157E8))(this, value);
	}
	template <typename T = bool> T get_ActionsLoaded() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F157F0))(this);
	}
	template <typename T = uintptr_t> T get_ActionData() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EF52F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Transitions() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2EE9388))(this);
	}
	template <typename T = void> T set_Transitions(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FsmState*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F15800))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F15808))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(FsmState*, Il2CppString*))(Il2CppBase() + 0x2F15894))(this, value);
	}
	template <typename T = int32_t> T get_ColorIndex() {
		return ((T (*)(FsmState*))(Il2CppBase() + 0x2F1589C))(this);
	}
	template <typename T = void> T set_ColorIndex(int32_t value) {
		return ((T (*)(FsmState*, int32_t))(Il2CppBase() + 0x2F158A4))(this, value);
	}
	template <typename T = int32_t> static T GetStateIndex(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F158AC))(0, state);
	}

};

}
