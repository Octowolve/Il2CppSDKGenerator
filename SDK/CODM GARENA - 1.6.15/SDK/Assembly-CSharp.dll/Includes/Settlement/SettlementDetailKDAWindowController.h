#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailKDAWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailKDAWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2955560))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2955604))(this);
	}
	template <typename T = void> T OnCloseDelegate(uintptr_t go) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t))(Il2CppBase() + 0x2955920))(this, go);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x29559DC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2955A84))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x29560EC))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x29561B4))(this, list, userContext);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2956268))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x295632C))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t))(Il2CppBase() + 0x29568FC))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2956BA0))(this, table, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(SettlementDetailKDAWindowController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x2956C64))(this, table, row, worldPos);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2956D30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2956D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2956D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(SettlementDetailKDAWindowController*))(Il2CppBase() + 0x2956D48))(this);
	}

};

}
