#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InventoryUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InventoryUtil"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_sItemID2WeaponNameMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& m_sWeaponName2ItemIDMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_sItemID2WeaponPartNameMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& m_HelicopterID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_UAVID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& m_CounterUAVID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& m_HunterKillerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& m_SentryGunID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& m_VTOLID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& m_SAMTurretID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& m_HellfireID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& m_AirstrikeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& m_KnifeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& m_QuickKnifeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& m_Type25ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& m_CarePackageBombID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHiddenBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPistolWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemID2WeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemID2Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Weapon2ItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AlwaysDraw3PCamFirst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = int32_t> static T get_HelicopterID() {
		return ((T (*)(void *))(Il2CppBase() + 0x24736E0))(0);
	}
	template <typename T = int32_t> static T get_UAVID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473814))(0);
	}
	template <typename T = int32_t> static T get_CounterUAVID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473948))(0);
	}
	template <typename T = int32_t> static T get_HunterKillerID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473A7C))(0);
	}
	template <typename T = int32_t> static T get_SentryGunID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473BB0))(0);
	}
	template <typename T = int32_t> static T get_VTOLID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473CE4))(0);
	}
	template <typename T = int32_t> static T get_SAMTurretID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473E18))(0);
	}
	template <typename T = int32_t> static T get_HellfireID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2473F4C))(0);
	}
	template <typename T = int32_t> static T get_AirstrikeID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2474080))(0);
	}
	template <typename T = int32_t> static T get_KnifeID() {
		return ((T (*)(void *))(Il2CppBase() + 0x24741B4))(0);
	}
	template <typename T = int32_t> static T get_QuickKnifeID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2462050))(0);
	}
	template <typename T = int32_t> static T get_Type25ID() {
		return ((T (*)(void *))(Il2CppBase() + 0x24742E8))(0);
	}
	template <typename T = int32_t> static T get_CarePackageBombID() {
		return ((T (*)(void *))(Il2CppBase() + 0x247441C))(0);
	}
	template <typename T = int32_t> static T get_BombID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2474550))(0);
	}
	template <typename T = bool> static T IsBomb(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24653F0))(0, itemID);
	}
	template <typename T = bool> static T IsHiddenBomb(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x247455C))(0, itemID);
	}
	template <typename T = bool> static T IsWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24746B0))(0, itemID);
	}
	template <typename T = bool> static T IsKillStreak(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2468948))(0, itemID);
	}
	template <typename T = bool> static T IsThrowWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x24747AC))(0, itemID);
	}
	template <typename T = bool> static T IsPistolWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2474920))(0, itemID);
	}
	template <typename T = bool> static T IsChipWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2474A2C))(0, itemID);
	}
	template <typename T = bool> static T IsMeleeWeapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2474C14))(0, itemID);
	}
	template <typename T = uintptr_t> static T ItemID2WeaponPart(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2474D20))(0, itemID);
	}
	template <typename T = uintptr_t> static T ItemID2Weapon(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2461BDC))(0, itemID);
	}
	template <typename T = int32_t> static T Weapon2ItemID(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x246383C))(0, weaponName);
	}
	template <typename T = uintptr_t> static T GetWeaponCategory(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2464F98))(0, weaponName);
	}
	template <typename T = bool> static T AlwaysDraw3PCamFirst(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2474F78))(0, weaponName);
	}

};

}
