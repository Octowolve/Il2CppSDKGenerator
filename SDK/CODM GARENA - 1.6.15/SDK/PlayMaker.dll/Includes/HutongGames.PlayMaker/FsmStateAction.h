#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmStateAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmStateAction"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& enabled() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isOpen() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& autoName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& fsmState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fsmComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Entered() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Init(uintptr_t state) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15A0C))(this, state);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15A64))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15A68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15A6C))(this);
	}
	template <typename T = bool> T Event(uintptr_t fsmEvent) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15A70))(this, fsmEvent);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15A78))(this);
	}
	template <typename T = uintptr_t> T StartCoroutine(uintptr_t routine) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15AB4))(this, routine);
	}
	template <typename T = void> T StopCoroutine(uintptr_t routine) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15B58))(this, routine);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B84))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B88))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B8C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B90))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B94))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B98))(this);
	}
	template <typename T = void> T OnDrawActionGizmos() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15B9C))(this);
	}
	template <typename T = void> T OnDrawActionGizmosSelected() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15BA0))(this);
	}
	template <typename T = Il2CppString*> T AutoName() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15BA4))(this);
	}
	template <typename T = void> T OnActionTargetInvoked(uintptr_t targetObject) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BAC))(this, targetObject);
	}
	template <typename T = void> T DoCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BB0))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BB4))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BB8))(this, collisionInfo);
	}
	template <typename T = void> T DoTriggerEnter(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BBC))(this, other);
	}
	template <typename T = void> T DoTriggerStay(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BC0))(this, other);
	}
	template <typename T = void> T DoTriggerExit(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BC4))(this, other);
	}
	template <typename T = void> T DoParticleCollision(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BC8))(this, other);
	}
	template <typename T = void> T DoCollisionEnter2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BCC))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionStay2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BD0))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionExit2D(uintptr_t collisionInfo) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BD4))(this, collisionInfo);
	}
	template <typename T = void> T DoTriggerEnter2D(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BD8))(this, other);
	}
	template <typename T = void> T DoTriggerStay2D(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BDC))(this, other);
	}
	template <typename T = void> T DoTriggerExit2D(uintptr_t other) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BE0))(this, other);
	}
	template <typename T = void> T DoControllerColliderHit(uintptr_t collider) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BE4))(this, collider);
	}
	template <typename T = void> T DoJointBreak(float force) {
		return ((T (*)(FsmStateAction*, float))(Il2CppBase() + 0x2F15BE8))(this, force);
	}
	template <typename T = void> T DoJointBreak2D(uintptr_t joint) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15BEC))(this, joint);
	}
	template <typename T = void> T DoAnimatorMove() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15BF0))(this);
	}
	template <typename T = void> T DoAnimatorIK(int32_t layerIndex) {
		return ((T (*)(FsmStateAction*, int32_t))(Il2CppBase() + 0x2F15BF4))(this, layerIndex);
	}
	template <typename T = void> T Log(Il2CppString* text) {
		return ((T (*)(FsmStateAction*, Il2CppString*))(Il2CppBase() + 0x2F15BF8))(this, text);
	}
	template <typename T = void> T LogWarning(Il2CppString* text) {
		return ((T (*)(FsmStateAction*, Il2CppString*))(Il2CppBase() + 0x2F15CDC))(this, text);
	}
	template <typename T = void> T LogError(Il2CppString* text) {
		return ((T (*)(FsmStateAction*, Il2CppString*))(Il2CppBase() + 0x2EE7FF8))(this, text);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15DC0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2ED3968))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(FsmStateAction*, Il2CppString*))(Il2CppBase() + 0x2ED3960))(this, value);
	}
	template <typename T = uintptr_t> T get_Fsm() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15E70))(this);
	}
	template <typename T = void> T set_Fsm(uintptr_t value) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15E78))(this, value);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15E80))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15E88))(this, value);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15AAC))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(FsmStateAction*, uintptr_t))(Il2CppBase() + 0x2F15E90))(this, value);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2EE1A80))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2ED3978))(this, value);
	}
	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2EE1A88))(this);
	}
	template <typename T = void> T set_IsOpen(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2ED3980))(this, value);
	}
	template <typename T = bool> T get_IsAutoNamed() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2EE1A78))(this);
	}
	template <typename T = void> T set_IsAutoNamed(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2ED3970))(this, value);
	}
	template <typename T = bool> T get_Entered() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F156A8))(this);
	}
	template <typename T = void> T set_Entered(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2F15494))(this, value);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F1549C))(this);
	}
	template <typename T = void> T set_Finished(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2F15478))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(FsmStateAction*))(Il2CppBase() + 0x2F15E98))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(FsmStateAction*, bool))(Il2CppBase() + 0x2F1548C))(this, value);
	}

};

}
