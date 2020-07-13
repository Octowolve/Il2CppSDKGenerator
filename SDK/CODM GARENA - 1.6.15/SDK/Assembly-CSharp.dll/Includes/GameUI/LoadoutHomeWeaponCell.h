#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeWeaponCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeWeaponCell"));
	}

	template <typename T = uintptr_t> T& WeaponCell() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponOpticCell() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponAttachment1Cell() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WeaponAttachment2Cell() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& WeaponAttachment3Cell() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCacheWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mLoadoutPosType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mCacheUnlockLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetWeaponData(uintptr_t loadoutData, uintptr_t weaponData, uintptr_t pos, bool bMainWeapon, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutHomeWeaponCell*, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t, int32_t))(Il2CppBase() + 0x1A4A2C0))(this, loadoutData, weaponData, pos, bMainWeapon, squadType, loadoutIndex);
	}
	template <typename T = bool> T CheckUnlock(uintptr_t loadoutData, bool bMainWeapon) {
		return ((T (*)(LoadoutHomeWeaponCell*, uintptr_t, bool))(Il2CppBase() + 0x1A4B61C))(this, loadoutData, bMainWeapon);
	}
	template <typename T = void> T SetDataByID(int32_t nItemId, bool bWeapon, bool bSmallSprite) {
		return ((T (*)(LoadoutHomeWeaponCell*, int32_t, bool, bool))(Il2CppBase() + 0x1A4B70C))(this, nItemId, bWeapon, bSmallSprite);
	}

};

}
