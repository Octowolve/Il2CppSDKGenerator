#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetControllerCollisionFlags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetControllerCollisionFlags"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isGrounded() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& none() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sides() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& above() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& below() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& previousGo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetControllerCollisionFlags*))(Il2CppBase() + 0x5087B78))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetControllerCollisionFlags*))(Il2CppBase() + 0x5087B94))(this);
	}

};

}
