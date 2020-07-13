#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetPosType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosMainType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPosIdValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDroppedPickUpExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentForMainWeaponA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentForMainWeaponB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentForMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNormalEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachmentBelongsToWeaponPosId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClipIdByWeaponId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponInitSlotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRCollection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> static T GetPosType(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18CD378))(0, posId);
	}
	template <typename T = uintptr_t> static T GetPosMainType(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18E8CA8))(0, posId);
	}
	template <typename T = bool> static T CheckPosIdValid(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18DB4C4))(0, posId);
	}
	template <typename T = bool> static T IsWeapon(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18D1A7C))(0, posId);
	}
	template <typename T = bool> static T IsDroppedPickUpExist(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18E8B6C))(0, itemId);
	}
	template <typename T = bool> static T IsAttachment(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18EDF34))(0, posId);
	}
	template <typename T = bool> static T IsAttachmentForMainWeaponA(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18C8E6C))(0, posId);
	}
	template <typename T = bool> static T IsAttachmentForMainWeaponB(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18C8F1C))(0, posId);
	}
	template <typename T = bool> static T IsAttachmentForMeleeWeapon(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18D918C))(0, posId);
	}
	template <typename T = bool> static T IsNormalEquip(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18F2D90))(0, posId);
	}
	template <typename T = int32_t> static T GetAttachmentBelongsToWeaponPosId(int32_t posId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18D6890))(0, posId);
	}
	template <typename T = bool> static T IsGun(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18B31D4))(0, itemId);
	}
	template <typename T = int32_t> static T GetClipIdByWeaponId(int32_t weaponItemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18C84F8))(0, weaponItemId);
	}
	template <typename T = int32_t> static T GetWeaponInitSlotData(uintptr_t config, int32_t posID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x18C8ACC))(0, config, posID);
	}
	template <typename T = bool> static T IsBRCollection(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18AE39C))(0, itemID);
	}

};

}
