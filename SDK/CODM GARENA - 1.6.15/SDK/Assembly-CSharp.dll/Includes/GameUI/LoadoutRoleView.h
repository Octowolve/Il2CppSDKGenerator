#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutRoleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutRoleView"));
	}

	template <typename T = uintptr_t> T& RoleRootWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RoleItemScrollView() {
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
	template <typename T = uintptr_t> T& MenuHatCell() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& MenuBagCell() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& MenuClothCell() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& MenuSuitCell() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& RoleBtnGroup() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RoleEquipBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RoleEquipedBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RoleGotoBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& DetailBtnGroup() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& DetailEquipBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& DetailTakeOffBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& DetailGotoBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& RoleColorTab() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& OtherColorTab() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& mCacheRole() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& RoleGroupGrid() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& mLoadoutItemDetailView() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x108);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleMenu() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoleTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOtherTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoleGroupGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T SetRoleMenu(uintptr_t role, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutRoleView*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F37F48))(this, role, squadType, loadoutIndex);
	}
	template <typename T = void> T FillMenuCell(uintptr_t role, uintptr_t cell, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutRoleView*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F40A00))(this, role, cell, squadType, loadoutIndex);
	}
	template <typename T = void> T SetMenuSelectedStatus() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F3A5DC))(this);
	}
	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F3815C))(this);
	}
	template <typename T = void> T ShowRoleTab() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F38578))(this);
	}
	template <typename T = void> T ShowOtherTab() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F386A0))(this);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F388B4))(this);
	}
	template <typename T = void> T UpdateRoleGroupGrid() {
		return ((T (*)(LoadoutRoleView*))(Il2CppBase() + 0x1F32998))(this);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F40E90))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F40F90))(0, it);
	}

};

}
