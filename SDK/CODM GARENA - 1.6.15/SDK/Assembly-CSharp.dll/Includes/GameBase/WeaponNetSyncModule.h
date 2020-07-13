#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_CahcedPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ProcessFireCmdHandle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& IsSetWeaponDirectlyInZipLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleAllFireCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartFireImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopFireImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerWeaponReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchWeaponInZiplineDirectyly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncWeaponAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_MyPawn() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5CFE8))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5D0F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5D45C))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5D680))(this);
	}
	template <typename T = void> T RecycleAllFireCmd() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5D76C))(this);
	}
	template <typename T = void> T OnStartFireImpl(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5D84C))(this, Msg);
	}
	template <typename T = void> T OnStopFireImpl(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5D9E8))(this, Msg);
	}
	template <typename T = void> T OnResStartFire(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5DBC8))(this, Msg);
	}
	template <typename T = void> T OnPlayerWeaponReAmmo(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5E010))(this, Msg);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5E0E0))(this, Msg);
	}
	template <typename T = void> T OnSyncSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5E634))(this, Msg);
	}
	template <typename T = void> T OnResSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5F190))(this, Msg);
	}
	template <typename T = bool> T CanSwitchWeaponInZiplineDirectyly() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A5F9D8))(this);
	}
	template <typename T = void> T OnServerSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A5FB94))(this, Msg);
	}
	template <typename T = void> T OnSyncWeaponAmmo(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A609D4))(this, Msg);
	}
	template <typename T = void> T OnProjectileStartFire(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A60BB0))(this, Msg);
	}
	template <typename T = void> T OnProjectileStick(uintptr_t Msg) {
		return ((T (*)(WeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x3A611DC))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A61514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A6151C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(WeaponNetSyncModule*))(Il2CppBase() + 0x3A61524))(this);
	}

};

}
