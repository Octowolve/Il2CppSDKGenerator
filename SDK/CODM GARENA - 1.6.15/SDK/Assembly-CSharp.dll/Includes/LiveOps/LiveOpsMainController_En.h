#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMainControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMainController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TabList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetLiveOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecordRedDots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchActiveInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemClickNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F829C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F834C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F855C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F8600))(this);
	}
	template <typename T = void> T SetLiveOps(bool bInit, int32_t topNum, int32_t leftNum) {
		return ((T (*)(LiveOpsMainControllerEn*, bool, int32_t, int32_t))(Il2CppBase() + 0x34F8878))(this, bInit, topNum, leftNum);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F9434))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t, int32_t))(Il2CppBase() + 0x34F9638))(this, table, row);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x34F96FC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x34F9844))(this, table, cell, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x34F9A74))(this, table, row, worldPos);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t))(Il2CppBase() + 0x34F9B40))(this, grid);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t, int32_t))(Il2CppBase() + 0x34F9C1C))(this, table, row);
	}
	template <typename T = void> T OnBtnLeftClick() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F9CE0))(this);
	}
	template <typename T = void> T OnBtnRightClick() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F9E88))(this);
	}
	template <typename T = void> T OnRecordRedDots() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34F8E78))(this);
	}
	template <typename T = void> T SwitchActiveInterface(uintptr_t tabData) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t))(Il2CppBase() + 0x34FA0BC))(this, tabData);
	}
	template <typename T = void> T ItemClickNotify(uintptr_t Msg) {
		return ((T (*)(LiveOpsMainControllerEn*, uintptr_t))(Il2CppBase() + 0x34FB87C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34FBA30))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34FBA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34FBA40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerEn*))(Il2CppBase() + 0x34FBA48))(this);
	}

};

}
