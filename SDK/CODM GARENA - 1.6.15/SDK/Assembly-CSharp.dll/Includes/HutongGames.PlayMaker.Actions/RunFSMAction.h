#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RunFSMAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RunFSMAction"));
	}

	template <typename T = uintptr_t> T& runFsm() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC05C))(this);
	}
	template <typename T = bool> T Event(uintptr_t fsmEvent) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC068))(this, fsmEvent);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC0E0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC164))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC1AC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC1F4))(this);
	}
	template <typename T = void> T DoTriggerEnter(uintptr_t other) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC23C))(this, other);
	}
	template <typename T = void> T DoTriggerStay(uintptr_t other) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC290))(this, other);
	}
	template <typename T = void> T DoTriggerExit(uintptr_t other) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC2E4))(this, other);
	}
	template <typename T = void> T DoCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC338))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC38C))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC3E0))(this, collisionInfo);
	}
	template <typename T = void> T DoParticleCollision(uintptr_t other) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC434))(this, other);
	}
	template <typename T = void> T DoControllerColliderHit(uintptr_t collisionInfo) {
		return ((T (*)(RunFSMAction*, uintptr_t))(Il2CppBase() + 0x4FAC488))(this, collisionInfo);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC4B4))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC504))(this);
	}
	template <typename T = void> T CheckIfFinished() {
		return ((T (*)(RunFSMAction*))(Il2CppBase() + 0x4FAC518))(this);
	}

};

}
