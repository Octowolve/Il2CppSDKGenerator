#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TriggerEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TriggerEvent"));
	}

	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& collideTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeCollider() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TriggerEvent*))(Il2CppBase() + 0x4F1A044))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(TriggerEvent*))(Il2CppBase() + 0x4F1A0E0))(this);
	}
	template <typename T = void> T StoreCollisionInfo(uintptr_t collisionInfo) {
		return ((T (*)(TriggerEvent*, uintptr_t))(Il2CppBase() + 0x4F1A170))(this, collisionInfo);
	}
	template <typename T = void> T DoTriggerEnter(uintptr_t other) {
		return ((T (*)(TriggerEvent*, uintptr_t))(Il2CppBase() + 0x4F1A1B8))(this, other);
	}
	template <typename T = void> T DoTriggerStay(uintptr_t other) {
		return ((T (*)(TriggerEvent*, uintptr_t))(Il2CppBase() + 0x4F1A2F8))(this, other);
	}
	template <typename T = void> T DoTriggerExit(uintptr_t other) {
		return ((T (*)(TriggerEvent*, uintptr_t))(Il2CppBase() + 0x4F1A438))(this, other);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(TriggerEvent*))(Il2CppBase() + 0x4F1A578))(this);
	}

};

}
