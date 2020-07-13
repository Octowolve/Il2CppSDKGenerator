#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentRocketWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_RocketWeapon"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentRocketWeapon*, uintptr_t, bool))(Il2CppBase() + 0x23D2C30))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F682C))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23D5648))(this);
	}
	template <typename T = Il2CppVector3> T CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F68E8))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23D58B0))(this);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F69A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentRocketWeapon*, uintptr_t, bool))(Il2CppBase() + 0x23F6A44))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F6A48))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F6A58))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentRocketWeapon*))(Il2CppBase() + 0x23F6A68))(this);
	}

};

}
