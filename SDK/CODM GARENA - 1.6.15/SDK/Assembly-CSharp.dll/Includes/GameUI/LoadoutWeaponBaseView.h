#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponBaseView"));
	}

	template <typename T = uintptr_t> T& WeaponRootWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WeaponItemScrollView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DetailRootWidget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& DetailItemScrollView() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& DetailCloseBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& DecorateCell() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& MenuSkinCell() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& MenuOpticCell() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& MenuAttach1Cell() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& MenuAttach2Cell() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& MenuAttach3Cell() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& CompareWeaponBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& WeaponBtnGroup() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& WeaponEquipBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& WeaponEquipedBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& WeaponGotoBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& DetailBtnGroup() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& DetailEquipBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& DetailTakeOffBtn() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& DetailGotoBtn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& DecorateRootObj() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& DecorateOrnamentTab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& DecorateCrosshairTab() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& DecorateSkinTab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& DecorateOrnamentReddot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& DecorateCrosshairReddot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& DecorateSkinReddot() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& CrosshairRoot() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CrosshairIconSprite() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mCacheWeapon() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillMenuCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCellItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuSelectedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetWeaponMenu(uintptr_t weapon, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutWeaponBaseView*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F4D598))(this, weapon, squadType, loadoutIndex);
	}
	template <typename T = void> T FillMenuCell(uintptr_t weapon, uintptr_t cell, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutWeaponBaseView*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F4D6EC))(this, weapon, cell, squadType, loadoutIndex);
	}
	template <typename T = void> T SetCellItem(uintptr_t weapon, uintptr_t cell, uintptr_t item) {
		return ((T (*)(LoadoutWeaponBaseView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F4D978))(this, weapon, cell, item);
	}
	template <typename T = bool> T CheckCanEquip(uintptr_t weapon, uintptr_t cellType) {
		return ((T (*)(LoadoutWeaponBaseView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F4DC3C))(this, weapon, cellType);
	}
	template <typename T = void> T SetMenuSelectedStatus() {
		return ((T (*)(LoadoutWeaponBaseView*))(Il2CppBase() + 0x1F1D498))(this);
	}

};

}
