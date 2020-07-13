#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AttackableTargetsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AttackableTargetsManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& AttackableTargetDict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTargetDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterAttackableTarget(uintptr_t target) {
		return ((T (*)(AttackableTargetsManager*, uintptr_t))(Il2CppBase() + 0x35D0864))(this, target);
	}
	template <typename T = void> T UnregisterAttackableTarget(uintptr_t target) {
		return ((T (*)(AttackableTargetsManager*, uintptr_t))(Il2CppBase() + 0x35D0B50))(this, target);
	}
	template <typename T = void> T RefreshTargetDict(uintptr_t target) {
		return ((T (*)(AttackableTargetsManager*, uintptr_t))(Il2CppBase() + 0x35CD998))(this, target);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AttackableTargetsManager*))(Il2CppBase() + 0x35D1CC4))(this);
	}

};

}
