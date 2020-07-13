#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBScoreController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBScoreController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32A3C))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32AE0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32B7C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32C24))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32CCC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C32E78))(this);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BRSettlementRoomOBScoreController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C32F98))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(BRSettlementRoomOBScoreController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3C3305C))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(BRSettlementRoomOBScoreController*, uintptr_t))(Il2CppBase() + 0x3C332C4))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BRSettlementRoomOBScoreController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C33410))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(BRSettlementRoomOBScoreController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3C334D4))(this, table, row, worldPos);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C335A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C337EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C337F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C337FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C33804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRSettlementRoomOBScoreController*))(Il2CppBase() + 0x3C3380C))(this);
	}

};

}
