#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrThrowingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrThrowingView"));
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
	template <typename T = uintptr_t> T& MenuSkinCell() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& WeaponBtnGroup() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& WeaponEquipBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& WeaponEquipedBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& DetailBtnGroup() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& DetailEquipBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& DetailTakeOffBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& DetailGotoBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& WeaponColorTab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ColorTab() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& mCacheItemId() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillMenuCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuSelectedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkinTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetMenu(uint32_t itemId, bool isEquip) {
		return ((T (*)(LoadoutBrThrowingView*, uint32_t, bool))(Il2CppBase() + 0x1A06130))(this, itemId, isEquip);
	}
	template <typename T = void> T FillMenuCell(uint32_t itemId, uintptr_t cell, bool isEquip) {
		return ((T (*)(LoadoutBrThrowingView*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x1A0C248))(this, itemId, cell, isEquip);
	}
	template <typename T = void> T SetMenuSelectedStatus() {
		return ((T (*)(LoadoutBrThrowingView*))(Il2CppBase() + 0x1A093FC))(this);
	}
	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutBrThrowingView*))(Il2CppBase() + 0x1A0620C))(this);
	}
	template <typename T = void> T ShowWeaponTab() {
		return ((T (*)(LoadoutBrThrowingView*))(Il2CppBase() + 0x1A06630))(this);
	}
	template <typename T = void> T ShowSkinTab() {
		return ((T (*)(LoadoutBrThrowingView*))(Il2CppBase() + 0x1A06758))(this);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutBrThrowingView*))(Il2CppBase() + 0x1A06880))(this);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A0C418))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A0C518))(0, it);
	}

};

}
