#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class UICreditsPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "UICreditsPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& creditData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& departmentHeight() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& groupHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& staffHeight() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetVec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccelerateBtnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySettingsCreditsPopViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387E258))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387E670))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387E898))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387E93C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387EAF0))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387EBAC))(this);
	}
	template <typename T = void> T SetTargetVec() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387ED70))(this);
	}
	template <typename T = void> T OnAccelerateBtnPressed(uintptr_t go, bool isPressed) {
		return ((T (*)(UICreditsPopController*, uintptr_t, bool))(Il2CppBase() + 0x387EF78))(this, go, isPressed);
	}
	template <typename T = void> T OnNotifySettingsCreditsPopViewClose(uintptr_t Msg) {
		return ((T (*)(UICreditsPopController*, uintptr_t))(Il2CppBase() + 0x387F058))(this, Msg);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(UICreditsPopController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x387F174))(this, grid, path);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(UICreditsPopController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x387F230))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(UICreditsPopController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x387F390))(this, grid, cell, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(UICreditsPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x387F6E8))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(UICreditsPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x387F7C4))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(UICreditsPopController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x387F8FC))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(UICreditsPopController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x387FAF4))(this, grid, row, column);
	}
	template <typename T = void> T OnNotifySettingsCreditsPopViewClosem__0() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FC8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FC90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FC98))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FCA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FCA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICreditsPopController*))(Il2CppBase() + 0x387FCB0))(this);
	}

};

}
