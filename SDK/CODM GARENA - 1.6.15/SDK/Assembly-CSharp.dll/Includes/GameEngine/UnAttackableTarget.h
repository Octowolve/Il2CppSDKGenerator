#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UnAttackableTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UnAttackableTarget"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUnAttackableColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterUnAttackableColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnregister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x2E7755C))(this);
	}
	template <typename T = void> T RegisterUnAttackableColliders() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x2E77644))(this);
	}
	template <typename T = void> T UnregisterUnAttackableColliders() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x2E77938))(this);
	}
	template <typename T = void> T OnRegister() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x2E77C20))(this);
	}
	template <typename T = void> T OnUnregister() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x2E77CE0))(this);
	}
	template <typename T = bool> T CanRegist() {
		return ((T (*)(UnAttackableTarget*))(Il2CppBase() + 0x0))(this);
	}

};

}
