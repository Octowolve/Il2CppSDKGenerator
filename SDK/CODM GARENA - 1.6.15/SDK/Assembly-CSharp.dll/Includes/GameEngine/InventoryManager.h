#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InventoryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InventoryManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_InventoryList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LoadingWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_FirstWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SecondWeapon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CurrentSubWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MaxPrimarySecondaryWeaponCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LastUsedNormalWeapon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_LastUsedWeapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BulletInfoSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_DelayCheckUseDefaultWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnCurrentWeaponChange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DelayToCreateList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponActorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponActorType_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToKnifeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstSecondWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCanUseWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PutDownWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponToSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponBySlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstQuickKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnotherMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByItemSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDelayCreateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDelayCreateWeaponByItemSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetAWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowWeaponCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubCategoryInventoryCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUltWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindUltWeaponActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadingWeaponSameWithWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SelectWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsyncLoadAssetCanceled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponChangeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActualChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActualChangeSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOwnerBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOwnerDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInventoryByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOtherSlotInventry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnyEmptyNormalSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillBeDroppedOnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPickupWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimarySecondaryWeaponCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeaponCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HasWeaponCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSubInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToCreateInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToCreateInventoryBySelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponCreateDelayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InDelayedCreateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectWeaponByPullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutDefaultWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutKillStreakWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutULTWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutLastUsedNormalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustCameraAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullSyncWeaponBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncWeaponBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_InventoryList() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465DF8))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E00))(this);
	}
	template <typename T = void> T set_LoadingWeapon(uintptr_t value) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2465E08))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E10))(this);
	}
	template <typename T = void> T set_CurrentWeapon(uintptr_t value) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2465E18))(this, value);
	}
	template <typename T = uintptr_t> T get_FirstWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E20))(this);
	}
	template <typename T = uintptr_t> T get_SecondWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E28))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSubWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E30))(this);
	}
	template <typename T = uintptr_t> T get_LastUsedNormalWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E38))(this);
	}
	template <typename T = uintptr_t> T get_LastUsedWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2465E40))(this);
	}
	template <typename T = int32_t> T GetWeaponActorType(int32_t weaponID, Il2CppString* configOverride) {
		return ((T (*)(InventoryManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x2465E48))(this, weaponID, configOverride);
	}
	template <typename T = int32_t> static T GetWeaponActorType_3P(int32_t weaponID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2465FC0))(0, weaponID);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2466128))(this);
	}
	template <typename T = void> T SwitchToKnifeWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2466F0C))(this);
	}
	template <typename T = bool> T AutoSwitchWeapon(bool checkAmmo) {
		return ((T (*)(InventoryManager*, bool))(Il2CppBase() + 0x2467294))(this, checkAmmo);
	}
	template <typename T = uintptr_t> T GetNextWeapon(uintptr_t refWeapon) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2466260))(this, refWeapon);
	}
	template <typename T = void> T UpdateFirstSecondWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467460))(this);
	}
	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24679A4))(this);
	}
	template <typename T = void> T SwitchToMainWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467AAC))(this);
	}
	template <typename T = uintptr_t> T GetCanUseWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467BD0))(this);
	}
	template <typename T = void> T PutDownWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467CF0))(this);
	}
	template <typename T = uintptr_t> T GetWeaponToSwitch(uintptr_t switchType) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2467E0C))(this, switchType);
	}
	template <typename T = uintptr_t> T GetWeaponByActorID(int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t))(Il2CppBase() + 0x2468398))(this, actorID);
	}
	template <typename T = uintptr_t> T GetWeaponBySlot(unsigned char slot) {
		return ((T (*)(InventoryManager*, unsigned char))(Il2CppBase() + 0x2467018))(this, slot);
	}
	template <typename T = uintptr_t> T GetFirstQuickKnife() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24681D4))(this);
	}
	template <typename T = uintptr_t> T GetAnotherMainWeapon(uintptr_t currentMain) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x24684DC))(this, currentMain);
	}
	template <typename T = uintptr_t> T GetWeapon(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x2468634))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetWeaponByItemSlot(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x246870C))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetDelayCreateWeapon(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x2468ABC))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetDelayCreateWeaponByItemSlot(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x2468B94))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetAWeapon(uintptr_t cat) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2468DA8))(this, cat);
	}
	template <typename T = uintptr_t> T GetAWeapon_1(uintptr_t weaponName) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2468F4C))(this, weaponName);
	}
	template <typename T = uintptr_t> T GetAWeapon_2(uintptr_t subCategory) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x24690F0))(this, subCategory);
	}
	template <typename T = int32_t> T GetThrowWeaponCount() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24692EC))(this);
	}
	template <typename T = int32_t> T GetWeaponCount(int32_t itemID) {
		return ((T (*)(InventoryManager*, int32_t))(Il2CppBase() + 0x2469504))(this, itemID);
	}
	template <typename T = int32_t> T GetSubCategoryInventoryCount(uintptr_t subCategory) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2469728))(this, subCategory);
	}
	template <typename T = uintptr_t> T GetThrowWeapon(uintptr_t subCategory) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2467F34))(this, subCategory);
	}
	template <typename T = uintptr_t> T GetUltWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24699A0))(this);
	}
	template <typename T = void> T BindUltWeaponActorID(int32_t weaponID, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, int32_t))(Il2CppBase() + 0x2469B04))(this, weaponID, actorID);
	}
	template <typename T = bool> T SelectWeapon(uintptr_t weapon) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246715C))(this, weapon);
	}
	template <typename T = bool> T IsLoadingWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2469D48))(this);
	}
	template <typename T = bool> T IsLoadingWeaponSameWithWeapon(uintptr_t weapon) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x2469E34))(this, weapon);
	}
	template <typename T = bool> T SelectWeapon_1(int32_t itemID, unsigned char slot, int32_t actorID, int32_t itemLevel) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t, int32_t))(Il2CppBase() + 0x2466388))(this, itemID, slot, actorID, itemLevel);
	}
	template <typename T = bool> T SelectSubWeapon(int32_t itemID, unsigned char slot, int32_t actorID, unsigned char rightOrLeft, uint32_t skinID) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t, unsigned char, uint32_t))(Il2CppBase() + 0x246A560))(this, itemID, slot, actorID, rightOrLeft, skinID);
	}
	template <typename T = void> T OnLoadAsyncLoadAssetCanceled(uintptr_t inventory) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246B244))(this, inventory);
	}
	template <typename T = void> T SetWeaponChangeCallback(uintptr_t callback) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246B344))(this, callback);
	}
	template <typename T = void> T ActualChangeWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246B3EC))(this);
	}
	template <typename T = void> T ActualChangeSubWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246ACF4))(this);
	}
	template <typename T = void> T NotifyOwnerBeginDestroy() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246BED8))(this);
	}
	template <typename T = void> T NotifyOwnerDied() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246C648))(this);
	}
	template <typename T = void> T AddInventory(uintptr_t inv) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246C808))(this, inv);
	}
	template <typename T = bool> T HadInventory(uintptr_t _inv, uintptr_t inv) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x246D070))(this, _inv, inv);
	}
	template <typename T = bool> T RemovePrimaryWeapon(bool bAutoSwitch) {
		return ((T (*)(InventoryManager*, bool))(Il2CppBase() + 0x246D194))(this, bAutoSwitch);
	}
	template <typename T = bool> T RemoveInventory(uintptr_t inv, bool bAutoSwitch) {
		return ((T (*)(InventoryManager*, uintptr_t, bool))(Il2CppBase() + 0x246D2B4))(this, inv, bAutoSwitch);
	}
	template <typename T = bool> T RemoveInventoryByID(int32_t inItemID, unsigned char inSlot, int32_t inActorID, bool bAutoSwitch) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x246D408))(this, inItemID, inSlot, inActorID, bAutoSwitch);
	}
	template <typename T = void> T RemoveOtherSlotInventry(unsigned char slot, int32_t wantItemID) {
		return ((T (*)(InventoryManager*, unsigned char, int32_t))(Il2CppBase() + 0x246DD5C))(this, slot, wantItemID);
	}
	template <typename T = bool> T AnyEmptyNormalSlot() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246E134))(this);
	}
	template <typename T = bool> T WillBeDroppedOnDead(int32_t weaponID) {
		return ((T (*)(InventoryManager*, int32_t))(Il2CppBase() + 0x246E340))(this, weaponID);
	}
	template <typename T = bool> T CanPickupWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246E460))(this);
	}
	template <typename T = void> T ClearCurrentWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246DCB8))(this);
	}
	template <typename T = int32_t> T GetWeaponIndex(uintptr_t weapon) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246E744))(this, weapon);
	}
	template <typename T = int32_t> T GetPrimarySecondaryWeaponCount() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467668))(this);
	}
	template <typename T = uintptr_t> T GetPrimaryWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2467854))(this);
	}
	template <typename T = bool> T HasWeaponCategory(uintptr_t category, uintptr_t itemID) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x246E928))(this, category, itemID);
	}
	template <typename T = bool> T HasWeaponCategory_1(uintptr_t category) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246EAD0))(this, category);
	}
	template <typename T = bool> T HasWeapon(uintptr_t weaponName) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x246EC20))(this, weaponName);
	}
	template <typename T = uintptr_t> T CreateInventory(int32_t itemID, unsigned char slot, Il2CppString* configOverride, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, bool isUltWeapon, bool isUltWeaponFireCostEnergy, int32_t actorID, int32_t itemLevel, int32_t PapLevel, int32_t crossHairId) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, Il2CppString*, Il2CppList<uintptr_t>*, uint32_t, bool, bool, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x246ED70))(this, itemID, slot, configOverride, partInfoList, skinID, isUltWeapon, isUltWeaponFireCostEnergy, actorID, itemLevel, PapLevel, crossHairId);
	}
	template <typename T = uintptr_t> T CreateSubInventory(int32_t itemID, unsigned char slot, Il2CppString* configOverride, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, bool isUltWeapon, bool isUltWeaponFireCostEnergy, int32_t actorID, int32_t itemLevel) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, Il2CppString*, Il2CppList<uintptr_t>*, uint32_t, bool, bool, int32_t, int32_t))(Il2CppBase() + 0x246F418))(this, itemID, slot, configOverride, partInfoList, skinID, isUltWeapon, isUltWeaponFireCostEnergy, actorID, itemLevel);
	}
	template <typename T = void> T AddAllInventory(Il2CppList<uintptr_t>* invList) {
		return ((T (*)(InventoryManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x246F8B8))(this, invList);
	}
	template <typename T = void> T DelayToCreateInventory() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246FD44))(this);
	}
	template <typename T = void> T DelayToCreateInventoryBySelect(int32_t itemID, unsigned char slot, int32_t actorID, int32_t itemLevel) {
		return ((T (*)(InventoryManager*, int32_t, unsigned char, int32_t, int32_t))(Il2CppBase() + 0x246A20C))(this, itemID, slot, actorID, itemLevel);
	}
	template <typename T = bool> T IsWeaponCreateDelayed(int32_t itemID) {
		return ((T (*)(InventoryManager*, int32_t))(Il2CppBase() + 0x246A09C))(this, itemID);
	}
	template <typename T = bool> T InDelayedCreateWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2470018))(this);
	}
	template <typename T = bool> T PullOutWeapon() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24700FC))(this);
	}
	template <typename T = bool> T SelectWeaponByPullOutWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24709B0))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = bool> T PullOutDefaultWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t skinID) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24704BC))(this, destWeaponItemID, destWeaponSlot, skinID);
	}
	template <typename T = bool> T PullOutUsedWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2470604))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = bool> T PullOutLastUsedWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2470E48))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = bool> T PullOutKillStreakWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2471124))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = bool> T PullOutULTWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24713A8))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = bool> T PullOutLastUsedNormalWeapon(uintptr_t destWeaponItemID, uintptr_t destWeaponSlot, uintptr_t destWeaponSkinID, uintptr_t destWeaponActorID, uintptr_t destWeaponItemLevel, uintptr_t destWeaponCrossHairID, uintptr_t WeaponPartInfoList, uintptr_t isUltWeapon, uintptr_t isUltWeaponFireCostEnergy) {
		return ((T (*)(InventoryManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2471588))(this, destWeaponItemID, destWeaponSlot, destWeaponSkinID, destWeaponActorID, destWeaponItemLevel, destWeaponCrossHairID, WeaponPartInfoList, isUltWeapon, isUltWeaponFireCostEnergy);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(InventoryManager*, float))(Il2CppBase() + 0x2471804))(this, deltaTime);
	}
	template <typename T = void> T RemoveAllInventory() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x246C114))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24718B0))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24719CC))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2471AE8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2471C04))(this);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2471D24))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2471E40))(this);
	}
	template <typename T = bool> T CanSwitchFireMode() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2471F5C))(this);
	}
	template <typename T = void> T SwitchFireMode() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x24720D8))(this);
	}
	template <typename T = Il2CppQuaternion> T AdjustCameraAimRotation(Il2CppQuaternion initialAimRot) {
		return ((T (*)(InventoryManager*, Il2CppQuaternion))(Il2CppBase() + 0x247224C))(this, initialAimRot);
	}
	template <typename T = Il2CppQuaternion> T AdjustWeaponAimRotation(Il2CppQuaternion initialAimRot) {
		return ((T (*)(InventoryManager*, Il2CppQuaternion))(Il2CppBase() + 0x24723D4))(this, initialAimRot);
	}
	template <typename T = void> T FullAmmo() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x247255C))(this);
	}
	template <typename T = void> T FullAmmo_1(int32_t itemID, int32_t actorID) {
		return ((T (*)(InventoryManager*, int32_t, int32_t))(Il2CppBase() + 0x247274C))(this, itemID, actorID);
	}
	template <typename T = void> T FullSyncWeaponBulletInfo(uintptr_t weap) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x247295C))(this, weap);
	}
	template <typename T = void> T UpdateBulletInfo(int32_t actorID, int32_t weaponID, int32_t slotID, int32_t cout) {
		return ((T (*)(InventoryManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2472BDC))(this, actorID, weaponID, slotID, cout);
	}
	template <typename T = void> T SyncWeaponBulletInfo(Il2CppArray<uintptr_t>* infoSet, int32_t count) {
		return ((T (*)(InventoryManager*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2472D8C))(this, infoSet, count);
	}
	template <typename T = void> T ClearBulletInfo() {
		return ((T (*)(InventoryManager*))(Il2CppBase() + 0x2473100))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t target) {
		return ((T (*)(InventoryManager*, uintptr_t))(Il2CppBase() + 0x24731D4))(this, target);
	}

};

}
