#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class IFsmStateAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "IFsmStateAction"));
	}


	template <typename T = bool> T get_Enabled() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(IFsmStateAction*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Init(uintptr_t state) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, state);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Event(uintptr_t fsmEvent) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, fsmEvent);
	}
	template <typename T = void> T DoControllerColliderHit(uintptr_t collider) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, collider);
	}
	template <typename T = void> T DoCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, collisionInfo);
	}
	template <typename T = void> T DoTriggerEnter(uintptr_t other) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = void> T DoTriggerStay(uintptr_t other) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = void> T DoTriggerExit(uintptr_t other) {
		return ((T (*)(IFsmStateAction*, uintptr_t))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = void> T Log(Il2CppString* text) {
		return ((T (*)(IFsmStateAction*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T LogWarning(Il2CppString* text) {
		return ((T (*)(IFsmStateAction*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T LogError(Il2CppString* text) {
		return ((T (*)(IFsmStateAction*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(IFsmStateAction*))(Il2CppBase() + 0x0))(this);
	}

};

}
