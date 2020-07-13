#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentSentryGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentSentryGun"));
	}

	template <typename T = bool> T& m_CanFire() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllMaterial() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& m_oldController() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& m_newController() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSentryGunCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponAttachmentModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDespawnOldMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetNewController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_ControllerAssetID() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C536B8))(this);
	}
	template <typename T = void> T SyncSentryGunCanFire(bool canFire) {
		return ((T (*)(WeaponAttachmentSentryGun*, bool))(Il2CppBase() + 0x1C536C4))(this, canFire);
	}
	template <typename T = void> T ActivateWeapon(int32_t assetID) {
		return ((T (*)(WeaponAttachmentSentryGun*, int32_t))(Il2CppBase() + 0x1C53794))(this, assetID);
	}
	template <typename T = void> T LoadWeaponAttachmentModel() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C53C20))(this);
	}
	template <typename T = void> T PreDespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachmentSentryGun*, int32_t))(Il2CppBase() + 0x1C53D90))(this, newAssetID);
	}
	template <typename T = void> T OnReady(int32_t assetID, uintptr_t assetObject) {
		return ((T (*)(WeaponAttachmentSentryGun*, int32_t, uintptr_t))(Il2CppBase() + 0x1C53ED8))(this, assetID, assetObject);
	}
	template <typename T = void> T ResetNewController() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C53A84))(this);
	}
	template <typename T = void> T PlayFireSound() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C54038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncSentryGunCanFire(bool P0) {
		return ((T (*)(WeaponAttachmentSentryGun*, bool))(Il2CppBase() + 0x1C54134))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ActivateWeapon(int32_t P0) {
		return ((T (*)(WeaponAttachmentSentryGun*, int32_t))(Il2CppBase() + 0x1C5413C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadWeaponAttachmentModel() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C54144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreDespawnOldMesh(int32_t P0) {
		return ((T (*)(WeaponAttachmentSentryGun*, int32_t))(Il2CppBase() + 0x1C5414C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireSound() {
		return ((T (*)(WeaponAttachmentSentryGun*))(Il2CppBase() + 0x1C54154))(this);
	}

};

}
