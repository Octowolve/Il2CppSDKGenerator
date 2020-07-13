#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionDataStore"));
	}

	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& WeaponPromotionMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllSkinList_PVP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllSkinList_PVE() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllSkinList_BR() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllAttachmentList_PVP() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllAttachmentList_PVE() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<int32_t>*>*> T& CacheGroup2AllAttachmentList_BR() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllCacheData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InnerProcessCacheData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLockSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLockAttachmentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponPromotionUnlockData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionUnlockData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionUnlockDataForGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6D6A0))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6D82C))(this);
	}
	template <typename T = void> T InitDefaultValue() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6D750))(this);
	}
	template <typename T = void> T ResetAllCacheData() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6D8DC))(this);
	}
	template <typename T = void> T InnerProcessCacheData(uintptr_t skinMap, uintptr_t attachMap, int32_t type, int32_t value, uint32_t group) {
		return ((T (*)(WeaponPromotionDataStore*, uintptr_t, uintptr_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x3A6DCC0))(this, skinMap, attachMap, type, value, group);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAllLockSkinList(uintptr_t squadType, uint32_t group) {
		return ((T (*)(WeaponPromotionDataStore*, uintptr_t, uint32_t))(Il2CppBase() + 0x3A6DFDC))(this, squadType, group);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAllLockAttachmentList(uintptr_t squadType, uint32_t group) {
		return ((T (*)(WeaponPromotionDataStore*, uintptr_t, uint32_t))(Il2CppBase() + 0x3A6E16C))(this, squadType, group);
	}
	template <typename T = void> T CheckWeaponPromotionUnlockData(uint64_t weaponGuid, uint32_t weaponId, int32_t level, int32_t exp) {
		return ((T (*)(WeaponPromotionDataStore*, uint64_t, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x3A6C554))(this, weaponGuid, weaponId, level, exp);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockData(uint64_t weaponGuid) {
		return ((T (*)(WeaponPromotionDataStore*, uint64_t))(Il2CppBase() + 0x3A6E2FC))(this, weaponGuid);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockDataForGameMode(uint64_t weaponGuid, uintptr_t gameMode) {
		return ((T (*)(WeaponPromotionDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x3A6E884))(this, weaponGuid, gameMode);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6EAB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(WeaponPromotionDataStore*))(Il2CppBase() + 0x3A6EAB8))(this);
	}

};

}
