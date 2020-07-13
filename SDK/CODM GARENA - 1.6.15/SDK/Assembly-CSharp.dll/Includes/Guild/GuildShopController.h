#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildShopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildShopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& gameShopType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_PlayerGuildGold() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mRowNumber() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& mColumnLess() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& kColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSShopType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotEnoughCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNotEnoughCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGridInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGridItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF172C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF17D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF19C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF1C14))(this);
	}
	template <typename T = void> T SetSShopType(uintptr_t shoptype) {
		return ((T (*)(GuildShopController*, uintptr_t))(Il2CppBase() + 0x3BF1E70))(this, shoptype);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF1F10))(this);
	}
	template <typename T = void> T OnNotEnoughCoin(uintptr_t message) {
		return ((T (*)(GuildShopController*, uintptr_t))(Il2CppBase() + 0x3BF1FB8))(this, message);
	}
	template <typename T = void> T ShowNotEnoughCoin() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF2064))(this);
	}
	template <typename T = void> T WealthChange() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF22A4))(this);
	}
	template <typename T = void> T InitGridInfo(uintptr_t data) {
		return ((T (*)(GuildShopController*, uintptr_t))(Il2CppBase() + 0x3BF25D0))(this, data);
	}
	template <typename T = void> T CacheItems(uintptr_t data, Il2CppString* key) {
		return ((T (*)(GuildShopController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3BF2A2C))(this, data, key);
	}
	template <typename T = void> T SetGridItems() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF2490))(this);
	}
	template <typename T = void> T OnItemClick(uintptr_t message) {
		return ((T (*)(GuildShopController*, uintptr_t))(Il2CppBase() + 0x3BF2CE4))(this, message);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF2F04))(this);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(GuildShopController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BF2FB8))(this, grid, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(GuildShopController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BF3078))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildShopController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BF3138))(this, grid, row, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildShopController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BF3204))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(GuildShopController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BF32D0))(this, grid, cell, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildShopController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BF3B98))(this, grid, path);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildShopController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BF3C54))(this, grid, path);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(GuildShopController*))(Il2CppBase() + 0x3BF3D48))(this);
	}

};

}
