#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectWeaponFireEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_WeaponFireEffect"));
	}

	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_delayTime() {
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
		return ((T (*)(AssetEffectWeaponFireEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B90078))(this, value, isStart, target);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectWeaponFireEffect*, float))(Il2CppBase() + 0x3B902B4))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectWeaponFireEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B90404))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectWeaponFireEffect*, float))(Il2CppBase() + 0x3B9041C))(this, P0);
	}

};

}
