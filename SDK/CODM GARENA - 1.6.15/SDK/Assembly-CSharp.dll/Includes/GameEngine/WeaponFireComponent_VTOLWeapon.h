#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentVTOLWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_VTOLWeapon"));
	}

	template <typename T = int32_t> T& m_testA() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& m_IsLeftMuzzle() {
		return *(T*)((uintptr_t)this + 0x2B4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentVTOLWeapon*, uintptr_t, bool))(Il2CppBase() + 0x2401E48))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2401F68))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2402024))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x240227C))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2402834))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x24028D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentVTOLWeapon*, uintptr_t, bool))(Il2CppBase() + 0x2402974))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetStartPos() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2402978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2402988))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_HasAmmo() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x240298C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_AmmoCanFire() {
		return ((T (*)(WeaponFireComponentVTOLWeapon*))(Il2CppBase() + 0x2402994))(this);
	}

};

}
