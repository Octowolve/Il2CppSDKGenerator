#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRRoomMembersDoubleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRRoomMembersDoubleController"));
	}

	template <typename T = int32_t> static T& COLUMN_PER_ROW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Column() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LastColumn() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B20D98))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B20E48))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B2103C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B210E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B21188))(this);
	}
	template <typename T = void> T InitScrollView(int32_t width, int32_t height) {
		return ((T (*)(BRRoomMembersDoubleController*, int32_t, int32_t))(Il2CppBase() + 0x1B21230))(this, width, height);
	}
	template <typename T = void> T RefreshPlayerList() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B2168C))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2180C))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B218D8))(this, grid, cell, path);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B21BB8))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, int32_t))(Il2CppBase() + 0x1B21C74))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, int32_t))(Il2CppBase() + 0x1B21D34))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1B21E00))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(BRRoomMembersDoubleController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1B21AD8))(this, grid, row, column);
	}
	template <typename T = void> T InitScrollViewm__0() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B21ECC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B2205C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B22060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B22064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRRoomMembersDoubleController*))(Il2CppBase() + 0x1B2206C))(this);
	}

};

}
