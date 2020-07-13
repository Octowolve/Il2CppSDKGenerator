#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRInventoryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRInventoryManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDelayCreateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInventoryByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangeWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstSecondWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActualChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullSyncWeaponBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowWeaponModifyAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseDefaultKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCheckUseKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDelayUseKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAddKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasDefaultKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUseKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetWeapon(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1946088))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetDelayCreateWeapon(int32_t itemID, unsigned char slot, int32_t actorID) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1946220))(this, itemID, slot, actorID);
	}
	template <typename T = uintptr_t> T GetWeaponByActorID(int32_t actorID) {
		return ((T (*)(BRInventoryManager*, int32_t))(Il2CppBase() + 0x19463B8))(this, actorID);
	}
	template <typename T = bool> T RemoveInventoryByID(int32_t inItemID, unsigned char inSlot, int32_t inActorID, bool bAutoSwitch) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x1946544))(this, inItemID, inSlot, inActorID, bAutoSwitch);
	}
	template <typename T = void> T ExchangeWeaponPos(int32_t actorId_0, int32_t posId_0, int32_t actorId_1, int32_t posId_1) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18ECE84))(this, actorId_0, posId_0, actorId_1, posId_1);
	}
	template <typename T = void> T UpdateFirstSecondWeapon() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1946C38))(this);
	}
	template <typename T = void> T ActualChangeWeapon() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1946CD0))(this);
	}
	template <typename T = void> T FullAmmo(int32_t itemID, int32_t actorID) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t))(Il2CppBase() + 0x1946F94))(this, itemID, actorID);
	}
	template <typename T = void> T FullSyncWeaponBulletInfo(uintptr_t weap) {
		return ((T (*)(BRInventoryManager*, uintptr_t))(Il2CppBase() + 0x19471C4))(this, weap);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRInventoryManager*, float))(Il2CppBase() + 0x19474A0))(this, deltaTime);
	}
	template <typename T = bool> T SelectSubWeapon(int32_t itemID, unsigned char slot, int32_t actorID, unsigned char rightOrLeft, uint32_t skinID) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t, unsigned char, uint32_t))(Il2CppBase() + 0x194769C))(this, itemID, slot, actorID, rightOrLeft, skinID);
	}
	template <typename T = void> T AddSubWeapon(int32_t actorId, int32_t itemId, int32_t ammoCount, bool autoSwitch, int32_t itemLevel, unsigned char rightOrLeft, uint32_t skinID) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t, int32_t, bool, int32_t, unsigned char, uint32_t))(Il2CppBase() + 0x19477A8))(this, actorId, itemId, ammoCount, autoSwitch, itemLevel, rightOrLeft, skinID);
	}
	template <typename T = void> T AddThrowWeapon(int32_t actorId, int32_t itemId, int32_t ammoCount, bool autoSwitch, uint32_t skinID, unsigned char slot) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t, int32_t, bool, uint32_t, unsigned char))(Il2CppBase() + 0x18F0CF4))(this, actorId, itemId, ammoCount, autoSwitch, skinID, slot);
	}
	template <typename T = void> T ThrowWeaponModifyAmmo(int32_t actorId, int32_t ammoCount) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t))(Il2CppBase() + 0x18F0B50))(this, actorId, ammoCount);
	}
	template <typename T = bool> T HadInventory(uintptr_t _inv, uintptr_t inv) {
		return ((T (*)(BRInventoryManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1947A94))(this, _inv, inv);
	}
	template <typename T = void> T RemoveThrowWeapon(int32_t actorId) {
		return ((T (*)(BRInventoryManager*, int32_t))(Il2CppBase() + 0x18F0FCC))(this, actorId);
	}
	template <typename T = void> T UseDefaultKnife() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1947B98))(this);
	}
	template <typename T = void> T DelayCheckUseKnife() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x194755C))(this);
	}
	template <typename T = void> T ResetDelayUseKnife() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1948338))(this);
	}
	template <typename T = void> T TryAddKnife(bool isDirectly) {
		return ((T (*)(BRInventoryManager*, bool))(Il2CppBase() + 0x1947F7C))(this, isDirectly);
	}
	template <typename T = bool> T HasDefaultKnife() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1947E34))(this);
	}
	template <typename T = void> T DelayUseKnife() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x1947C3C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetWeapon(int32_t P0, unsigned char P1, int32_t P2) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1948440))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetDelayCreateWeapon(int32_t P0, unsigned char P1, int32_t P2) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1948460))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetWeaponByActorID(int32_t P0) {
		return ((T (*)(BRInventoryManager*, int32_t))(Il2CppBase() + 0x1948480))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_RemoveInventoryByID(int32_t P0, unsigned char P1, int32_t P2, bool P3) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x1948488))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateFirstSecondWeapon() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x19484AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActualChangeWeapon() {
		return ((T (*)(BRInventoryManager*))(Il2CppBase() + 0x19484B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FullAmmo(int32_t P0, int32_t P1) {
		return ((T (*)(BRInventoryManager*, int32_t, int32_t))(Il2CppBase() + 0x19484BC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_FullSyncWeaponBulletInfo(uintptr_t P0) {
		return ((T (*)(BRInventoryManager*, uintptr_t))(Il2CppBase() + 0x19484C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRInventoryManager*, float))(Il2CppBase() + 0x19484CC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SelectSubWeapon(int32_t P0, unsigned char P1, int32_t P2, unsigned char P3, uint32_t P4) {
		return ((T (*)(BRInventoryManager*, int32_t, unsigned char, int32_t, unsigned char, uint32_t))(Il2CppBase() + 0x19484D4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T xLuaBaseProxy_HadInventory(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRInventoryManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1948500))(this, P0, P1);
	}

};

}
