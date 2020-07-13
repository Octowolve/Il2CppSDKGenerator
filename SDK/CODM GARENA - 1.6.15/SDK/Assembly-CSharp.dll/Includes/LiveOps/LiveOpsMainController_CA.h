#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMainControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMainController_CA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_SelectedTopIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_SelectedLeftIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& CurActivityType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LEFTBTN_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LEFTBTN_Height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CurCtrl() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_FlowGridBgTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_InitFlowDataTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_UpdateLeftTabListTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& liveOpsActivityClickReport() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_TopMenuInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChildrenWindowsActiveFalse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLiveOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollViewScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeftMenuAdaption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTotalMenusView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTotalMenusShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecordRedDots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSignRedBadget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchActiveInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoActivityDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F143C))(this);
	}
	template <typename T = Il2CppVector2> static T get_StandardViewSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x34F14EC))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F151C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F18A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F1974))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F1B4C))(this);
	}
	template <typename T = void> T TopMenuInit() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F1CD4))(this);
	}
	template <typename T = void> T SetChildrenWindowsActiveFalse() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F1F98))(this);
	}
	template <typename T = void> T SetLiveOps(bool bInit, int32_t topNum, int32_t leftNum) {
		return ((T (*)(LiveOpsMainControllerCA*, bool, int32_t, int32_t))(Il2CppBase() + 0x34F211C))(this, bInit, topNum, leftNum);
	}
	template <typename T = void> T ResetScrollViewScale() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F28A8))(this);
	}
	template <typename T = void> T CheckLeftMenuAdaption() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F2BDC))(this);
	}
	template <typename T = void> T InitTotalMenusView(bool bInit) {
		return ((T (*)(LiveOpsMainControllerCA*, bool))(Il2CppBase() + 0x34F258C))(this, bInit);
	}
	template <typename T = void> T UpdateTotalMenusShow() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F346C))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x34F397C))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x34F3A70))(this, table, cell, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x34F4020))(this, table, row, worldPos);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t))(Il2CppBase() + 0x34F58B4))(this, grid);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x34F5A84))(this, table, row);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(LiveOpsMainControllerCA*, int32_t))(Il2CppBase() + 0x34F5B78))(this, index);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x34F6020))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnRecordRedDots() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F6174))(this);
	}
	template <typename T = void> T RefreshSignRedBadget(uintptr_t message) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t))(Il2CppBase() + 0x34F64D0))(this, message);
	}
	template <typename T = void> T SwitchActiveInterface(uintptr_t tabData, bool bInit) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x34F454C))(this, tabData, bInit);
	}
	template <typename T = void> T OnGotoActivityDetails(uintptr_t Msg) {
		return ((T (*)(LiveOpsMainControllerCA*, uintptr_t))(Il2CppBase() + 0x34F783C))(this, Msg);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7A78))(this);
	}
	template <typename T = void> T Initm__1() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7D60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7D68))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7D70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7D78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMainControllerCA*))(Il2CppBase() + 0x34F7D80))(this);
	}

};

}
