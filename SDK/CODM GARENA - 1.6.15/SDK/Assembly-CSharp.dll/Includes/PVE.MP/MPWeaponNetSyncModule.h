#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPWeaponNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPWeaponNetSyncModule"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableOldWeaponSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWeaponSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(MPWeaponNetSyncModule*))(Il2CppBase() + 0x462921C))(this);
	}
	template <typename T = void> T OnSyncSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x46292C4))(this, Msg);
	}
	template <typename T = void> T OnServerSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x462A138))(this, Msg);
	}
	template <typename T = void> T OnResSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x462A294))(this, Msg);
	}
	template <typename T = void> T DisableOldWeaponSkillComponent() {
		return ((T (*)(MPWeaponNetSyncModule*))(Il2CppBase() + 0x4629470))(this);
	}
	template <typename T = void> T AddWeaponSkillComponent(Il2CppArray<uintptr_t>* skillDatas, int32_t weaponActorID, int32_t weaponItemID, unsigned char slot, Il2CppArray<uintptr_t>* strengthen, bool silentSync) {
		return ((T (*)(MPWeaponNetSyncModule*, Il2CppArray<uintptr_t>*, int32_t, int32_t, unsigned char, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4629BA8))(this, skillDatas, weaponActorID, weaponItemID, slot, strengthen, silentSync);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(MPWeaponNetSyncModule*))(Il2CppBase() + 0x462A3F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncSwitchWeapon(uintptr_t P0) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x462A3F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSwitchWeapon(uintptr_t P0) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x462A400))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnResSwitchWeapon(uintptr_t P0) {
		return ((T (*)(MPWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x462A408))(this, P0);
	}

};

}
