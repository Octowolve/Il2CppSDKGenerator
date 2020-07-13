#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBMatchFourController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBMatchFourController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_Column() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2C730))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2C7D4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2C870))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2C918))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2C9C0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2CC60))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C2CD80))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C2CE4C))(this, grid, cell, path);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C2D09C))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C2D158))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C2D218))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3C2D36C))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(BRSettlementRoomOBMatchFourController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3C2D438))(this, grid, row, column);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2D504))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2DA60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2DA68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2DA70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2DA78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRSettlementRoomOBMatchFourController*))(Il2CppBase() + 0x3C2DA80))(this);
	}

};

}
