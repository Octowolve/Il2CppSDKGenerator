#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionUtil"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mWeaponPromotionDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<int32_t>*>*> T& mCacheUpgradeAwardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSquadType2GameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionUnlockDataByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionUnlockInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponPromotionUnlockInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponExpItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponExpComparion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponUpgradeAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponUpgradeAwardIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponTotalExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDiff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionUnlockDataAtLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponUnlockTargetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBeMaxLevelThatWeaponNeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_WeaponPromotionDS() {
		return ((T (*)(WeaponPromotionUtil*))(Il2CppBase() + 0x3A7857C))(this);
	}
	template <typename T = uintptr_t> T get_LoadoutReddotDS() {
		return ((T (*)(WeaponPromotionUtil*))(Il2CppBase() + 0x3A7862C))(this);
	}
	template <typename T = uintptr_t> T ChangeSquadType2GameMode(uintptr_t east) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t))(Il2CppBase() + 0x3A786DC))(this, east);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockDataByLevel(uint32_t weaponId, int32_t level) {
		return ((T (*)(WeaponPromotionUtil*, uint32_t, int32_t))(Il2CppBase() + 0x3A787E0))(this, weaponId, level);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockInfo(uint32_t weaponId, int32_t level) {
		return ((T (*)(WeaponPromotionUtil*, uint32_t, int32_t))(Il2CppBase() + 0x3A78980))(this, weaponId, level);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockInfo_1(uint32_t weaponId, int32_t level, uintptr_t gameMode) {
		return ((T (*)(WeaponPromotionUtil*, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3A78B28))(this, weaponId, level, gameMode);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetWeaponExpItemList() {
		return ((T (*)(WeaponPromotionUtil*))(Il2CppBase() + 0x3A73258))(this);
	}
	template <typename T = int32_t> T WeaponExpComparion(uintptr_t a, uintptr_t b) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A78C48))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponUpgradeAwardList(uintptr_t weaponData, uintptr_t dataFlag, uintptr_t* selectIndex) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3A72DD0))(this, weaponData, dataFlag, selectIndex);
	}
	template <typename T = Il2CppList<int32_t>*> T GetWeaponUpgradeAwardIdList(uintptr_t weaponData) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t))(Il2CppBase() + 0x3A78D70))(this, weaponData);
	}
	template <typename T = int32_t> T GetWeaponTotalExp(uintptr_t weaponData) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t))(Il2CppBase() + 0x3A72AE0))(this, weaponData);
	}
	template <typename T = uintptr_t> T GetDiff(uintptr_t A, uintptr_t B) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A790CC))(this, A, B);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionUnlockDataAtLevel(uint32_t weaponId, int32_t level) {
		return ((T (*)(WeaponPromotionUtil*, uint32_t, int32_t))(Il2CppBase() + 0x3A7926C))(this, weaponId, level);
	}
	template <typename T = bool> T IsWeaponUnlockTargetItem(uint64_t weaponGuid, uint32_t targetId, uintptr_t squadType) {
		return ((T (*)(WeaponPromotionUtil*, uint64_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3A794C0))(this, weaponGuid, targetId, squadType);
	}
	template <typename T = int32_t> T GetBeMaxLevelThatWeaponNeed(uintptr_t weapon) {
		return ((T (*)(WeaponPromotionUtil*, uintptr_t))(Il2CppBase() + 0x3A79698))(this, weapon);
	}

};

}
