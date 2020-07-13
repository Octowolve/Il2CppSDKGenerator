#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectLockSwitchWeaponOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_LockSwitchWeaponOperation"));
	}

	template <typename T = float> T& m_LockSwitchTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectLockSwitchWeaponOperation*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B84610))(this, value, isStart, target);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectLockSwitchWeaponOperation*, float))(Il2CppBase() + 0x3B84888))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectLockSwitchWeaponOperation*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B849D4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectLockSwitchWeaponOperation*, float))(Il2CppBase() + 0x3B849EC))(this, P0);
	}

};

}
