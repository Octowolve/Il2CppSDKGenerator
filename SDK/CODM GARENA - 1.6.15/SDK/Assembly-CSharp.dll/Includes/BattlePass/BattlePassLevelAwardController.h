#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelAwardController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mCacheFloatRow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& targetLevel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemViewTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewItemPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewItemPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewBasicInfoPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewBasicInfoPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowTableCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetItemViewTransform() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328E50C))(this);
	}
	template <typename T = uintptr_t> T GetItemScrollView() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328E68C))(this);
	}
	template <typename T = int32_t> T GetViewItemPanelDepth() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328E7A4))(this);
	}
	template <typename T = void> T SetViewItemPanelDepth(int32_t depth) {
		return ((T (*)(BattlePassLevelAwardController*, int32_t))(Il2CppBase() + 0x328E924))(this, depth);
	}
	template <typename T = int32_t> T GetViewBasicInfoPanelDepth() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328EAAC))(this);
	}
	template <typename T = void> T SetViewBasicInfoPanelDepth(int32_t depth) {
		return ((T (*)(BattlePassLevelAwardController*, int32_t))(Il2CppBase() + 0x328EC2C))(this, depth);
	}
	template <typename T = uintptr_t> T GetLeftWidget() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328EDB4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328EF54))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328EFF8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F000))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F188))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F368))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F50C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F668))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F734))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassLevelAwardController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x328F800))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshAllData() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F5BC))(this);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328F978))(this);
	}
	template <typename T = void> T RefreshAward() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x328FB84))(this);
	}
	template <typename T = void> T FlowTableCallback(int32_t row) {
		return ((T (*)(BattlePassLevelAwardController*, int32_t))(Il2CppBase() + 0x328FDF8))(this, row);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassLevelAwardController*, uintptr_t, int32_t))(Il2CppBase() + 0x3290834))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(BattlePassLevelAwardController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3290928))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(BattlePassLevelAwardController*, uintptr_t))(Il2CppBase() + 0x3290C10))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassLevelAwardController*, uintptr_t, int32_t))(Il2CppBase() + 0x3290D2C))(this, table, row);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x3290F50))(this);
	}
	template <typename T = void> T RefreshAwardm__1() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x3290F54))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x329112C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x3291134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x329113C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x3291144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x329114C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelAwardController*))(Il2CppBase() + 0x3291154))(this);
	}

};

}
