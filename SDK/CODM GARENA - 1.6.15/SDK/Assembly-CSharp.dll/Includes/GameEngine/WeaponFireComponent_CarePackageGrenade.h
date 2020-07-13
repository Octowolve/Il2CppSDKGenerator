#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentCarePackageGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_CarePackageGrenade"));
	}

	template <typename T = float> T& m_FlyingSpeed() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& m_FlyingHeight() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_FlyingRadius() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_BoxLength() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_BoxWidth() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& m_BoxHeight() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = float> T& m_StartFallingHeight() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& m_StartFallingSpeed() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& m_SelfOpenDuration() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& m_TeammateOpenDuration() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = float> T& m_EnemyOpenDuration() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*, uintptr_t, bool))(Il2CppBase() + 0x2EC57A8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC5920))(this);
	}
	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC59DC))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC5C3C))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC5D40))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammoCount) {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*, int32_t))(Il2CppBase() + 0x2EC5E44))(this, ammoCount);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*, uintptr_t, bool))(Il2CppBase() + 0x2EC5FD4))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_AmmoCanFire() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC5FDC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_HasAmmo() {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*))(Il2CppBase() + 0x2EC5FE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAmmo(int32_t P0) {
		return ((T (*)(WeaponFireComponentCarePackageGrenade*, int32_t))(Il2CppBase() + 0x2EC5FE4))(this, P0);
	}

};

}
