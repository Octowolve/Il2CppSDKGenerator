#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSentryGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSentryGun"));
	}

	template <typename T = float> T& m_SentryGunNpcHalfLength() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = float> T& m_SentryGunNpcHalfWidth() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = float> T& m_SentryGunNpcHalfHigh() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = uintptr_t> T& m_CSVData() {
		return *(T*)((uintptr_t)this + 0x5F8);
	}
	template <typename T = float> T& m_PawnRadius() {
		return *(T*)((uintptr_t)this + 0x5FC);
	}
	template <typename T = Il2CppVector3> T& m_BoxHalfExtents() {
		return *(T*)((uintptr_t)this + 0x600);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BoxCastColliderStorage() {
		return *(T*)((uintptr_t)this + 0x60C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllMaterial() {
		return *(T*)((uintptr_t)this + 0x610);
	}
	template <typename T = float> T& m_LastSyncCanFireStateTime() {
		return *(T*)((uintptr_t)this + 0x614);
	}
	template <typename T = bool> T& m_CanFire() {
		return *(T*)((uintptr_t)this + 0x618);
	}
	template <typename T = float> T& m_CheckTimeAdd() {
		return *(T*)((uintptr_t)this + 0x61C);
	}
	template <typename T = float> T& m_CheckTimeActive() {
		return *(T*)((uintptr_t)this + 0x620);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSentryGunCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNPCInfoCSVData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterialColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMaterialColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotityEndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonViewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T SetCanFire(bool setCanFire) {
		return ((T (*)(WeaponSentryGun*, bool))(Il2CppBase() + 0x3A7CC64))(this, setCanFire);
	}
	template <typename T = void> T SyncSentryGunCanFire(bool canFire) {
		return ((T (*)(WeaponSentryGun*, bool))(Il2CppBase() + 0x3A7D168))(this, canFire);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7D218))(this);
	}
	template <typename T = bool> T CanPlace() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7D2C0))(this);
	}
	template <typename T = bool> T IsFireButtonEnabled() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7D3EC))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7D48C))(this);
	}
	template <typename T = uintptr_t> T GetNPCInfoCSVData(int32_t npcID) {
		return ((T (*)(WeaponSentryGun*, int32_t))(Il2CppBase() + 0x3A7D950))(this, npcID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSentryGun*, float))(Il2CppBase() + 0x3A7DA54))(this, deltaTime);
	}
	template <typename T = void> static T ChangeMaterialColor(Il2CppList<uintptr_t>* allMaterial, bool canFire) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3A7CE2C))(0, allMaterial, canFire);
	}
	template <typename T = void> static T InitMaterialColor(Il2CppList<uintptr_t>* allMaterial) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A7EE60))(0, allMaterial);
	}
	template <typename T = void> T NotityEndSwitchRole() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7F0F4))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7F2A0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7F5C4))(this);
	}
	template <typename T = Il2CppString*> T GetFireButtonViewIcon(uintptr_t isGray) {
		return ((T (*)(WeaponSentryGun*, uintptr_t))(Il2CppBase() + 0x3A7F7E8))(this, isGray);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7F8AC))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponSentryGun*, uintptr_t))(Il2CppBase() + 0x3A7F94C))(this, param);
	}
	template <typename T = void> T xLuaBaseProxy_SyncSentryGunCanFire(bool P0) {
		return ((T (*)(WeaponSentryGun*, bool))(Il2CppBase() + 0x3A7FA40))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanFire() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA48))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsFireButtonEnabled() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSentryGun*, float))(Il2CppBase() + 0x3A7FA60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NotityEndSwitchRole() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA78))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetFireButtonViewIcon(uintptr_t P0) {
		return ((T (*)(WeaponSentryGun*, uintptr_t))(Il2CppBase() + 0x3A7FA80))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponSentryGun*))(Il2CppBase() + 0x3A7FA88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponSentryGun*, uintptr_t))(Il2CppBase() + 0x3A7FA90))(this, P0);
	}

};

}
