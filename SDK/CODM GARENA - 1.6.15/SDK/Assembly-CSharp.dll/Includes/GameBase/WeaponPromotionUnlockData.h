#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionUnlockData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionUnlockData"));
	}

	template <typename T = uintptr_t> T& PvpWeaponPromotionInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PveWeaponPromotionInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BrWeaponPromotionInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CacheWeaponLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPromotionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUnlockData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortUnlockData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWeaponLevelConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBestWeaponFireEffectConfigIngame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBestWeaponKillEffectIngame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_CacheWeaponLevel() {
		return ((T (*)(WeaponPromotionUnlockData*))(Il2CppBase() + 0x3A77A64))(this);
	}
	template <typename T = void> T set_CacheWeaponLevel(int32_t value) {
		return ((T (*)(WeaponPromotionUnlockData*, int32_t))(Il2CppBase() + 0x3A77A6C))(this, value);
	}
	template <typename T = uintptr_t> T GetWeaponPromotionInfo(uintptr_t mode) {
		return ((T (*)(WeaponPromotionUnlockData*, uintptr_t))(Il2CppBase() + 0x3A6E974))(this, mode);
	}
	template <typename T = void> T SetUnlockData(int32_t groupId, int32_t level) {
		return ((T (*)(WeaponPromotionUnlockData*, int32_t, int32_t))(Il2CppBase() + 0x3A6E480))(this, groupId, level);
	}
	template <typename T = int32_t> T SortUnlockData(uintptr_t a, uintptr_t b) {
		return ((T (*)(WeaponPromotionUnlockData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A77C5C))(this, a, b);
	}
	template <typename T = void> T ProcessWeaponLevelConfig(uintptr_t conf) {
		return ((T (*)(WeaponPromotionUnlockData*, uintptr_t))(Il2CppBase() + 0x3A77A7C))(this, conf);
	}
	template <typename T = uintptr_t> T GetCurrentGameMode(int32_t mapID) {
		return ((T (*)(WeaponPromotionUnlockData*, int32_t))(Il2CppBase() + 0x3A77D54))(this, mapID);
	}
	template <typename T = uintptr_t> T GetBestWeaponFireEffectConfigIngame(int32_t mapID) {
		return ((T (*)(WeaponPromotionUnlockData*, int32_t))(Il2CppBase() + 0x3A78084))(this, mapID);
	}
	template <typename T = uintptr_t> T GetBestWeaponKillEffectIngame(uint32_t weaponId) {
		return ((T (*)(WeaponPromotionUnlockData*, uint32_t))(Il2CppBase() + 0x3A78218))(this, weaponId);
	}

};

}
