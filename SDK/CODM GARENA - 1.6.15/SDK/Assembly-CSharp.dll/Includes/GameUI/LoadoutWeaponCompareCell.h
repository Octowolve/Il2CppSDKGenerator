#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponCompareCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponCompareCell"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponNameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponQualitySprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WeaponIconSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& line1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& line2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& line3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& line4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& line5() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NoItemLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Designattion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& cacheWeaponData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& WeaponScrollView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& WeaponGrid() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& WeaponShowTemplate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& iDetailPage() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponItemList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponDetailList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPropertyLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponDetailData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoConent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutWeaponCompareCell*))(Il2CppBase() + 0x1F4DF98))(this);
	}
	template <typename T = void> T SetData(uintptr_t showWeapon, uintptr_t compareWeapon, bool needAnim, bool selected) {
		return ((T (*)(LoadoutWeaponCompareCell*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1F4E264))(this, showWeapon, compareWeapon, needAnim, selected);
	}
	template <typename T = void> T RefreshPropertyLine(uintptr_t oldWeapInfo, uintptr_t newWeapInfo, bool needAnim) {
		return ((T (*)(LoadoutWeaponCompareCell*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1F4E824))(this, oldWeapInfo, newWeapInfo, needAnim);
	}
	template <typename T = void> T SetWeaponDetailData(int32_t weaponLv) {
		return ((T (*)(LoadoutWeaponCompareCell*, int32_t))(Il2CppBase() + 0x1F4EEB8))(this, weaponLv);
	}
	template <typename T = void> T SetNoConent() {
		return ((T (*)(LoadoutWeaponCompareCell*))(Il2CppBase() + 0x1F4E6D0))(this);
	}

};

}
