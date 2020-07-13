#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeaponPromotionItemCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeaponPromotionItemCell"));
	}

	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UseMaxBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemIconSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ItemNameLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ItemNumberLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mCacheConf() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnUseMaxBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseMaxBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestMaxItemCountToUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestToUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T T_OnUseMaxBtnClick() {
		return ((T (*)(WeaponPromotionItemCell*))(Il2CppBase() + 0x2A2FC40))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponPromotionItemCell*))(Il2CppBase() + 0x2A2FE18))(this);
	}
	template <typename T = void> T OnUseBtnClick(uintptr_t obj) {
		return ((T (*)(WeaponPromotionItemCell*, uintptr_t))(Il2CppBase() + 0x2A2FF90))(this, obj);
	}
	template <typename T = void> T OnUseMaxBtnClick(uintptr_t obj) {
		return ((T (*)(WeaponPromotionItemCell*, uintptr_t))(Il2CppBase() + 0x2A3034C))(this, obj);
	}
	template <typename T = void> T RequestMaxItemCountToUpgrade() {
		return ((T (*)(WeaponPromotionItemCell*))(Il2CppBase() + 0x2A30620))(this);
	}
	template <typename T = void> T RequestToUpgrade(int32_t count) {
		return ((T (*)(WeaponPromotionItemCell*, int32_t))(Il2CppBase() + 0x2A30040))(this, count);
	}
	template <typename T = int32_t> T GetMaxItemCount() {
		return ((T (*)(WeaponPromotionItemCell*))(Il2CppBase() + 0x2A306D8))(this);
	}
	template <typename T = void> T SetItemData(uint32_t itemId, bool avail) {
		return ((T (*)(WeaponPromotionItemCell*, uint32_t, bool))(Il2CppBase() + 0x2A30904))(this, itemId, avail);
	}
	template <typename T = void> T OnUseMaxBtnClickm__0() {
		return ((T (*)(WeaponPromotionItemCell*))(Il2CppBase() + 0x2A30F00))(this);
	}

};

}
