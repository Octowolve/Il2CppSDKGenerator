#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectWeaponEffectGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_WeaponEffectGroup"));
	}

	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_assetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_delayTime() {
		return *(T*)((uintptr_t)this + 0x18);
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
		return ((T (*)(AssetEffectWeaponEffectGroup*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8F4A4))(this, value, isStart, target);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectWeaponEffectGroup*, float))(Il2CppBase() + 0x3B8F8D4))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectWeaponEffectGroup*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8FAB8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectWeaponEffectGroup*, float))(Il2CppBase() + 0x3B8FAD0))(this, P0);
	}

};

}
