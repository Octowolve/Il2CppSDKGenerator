#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LeftTablist() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_LeftTabListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_AnnouncementDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsGlobalController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsPersonalController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsQuestionNaireController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsAnnouncementController() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsDailyTaskController() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsDailyTaskExchangeController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CodLiveOpsSignInCtr() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_CurSelectTopIndex() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_CurSelectLeftIndex() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> static T& m_IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_FirstEnterSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnTopTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResLeftTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnResLeftTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoityfClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSignRedBadget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCurrentOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x354428C))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* topTablist) {
		return ((T (*)(CodLiveOpsMainController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x35444D0))(this, topTablist);
	}
	template <typename T = void> T T_FirstEnterSubscribeAnnouncement(bool bShow) {
		return ((T (*)(CodLiveOpsMainController*, bool))(Il2CppBase() + 0x3544FE4))(this, bShow);
	}
	template <typename T = void> T ResetEasyListData(bool reset) {
		return ((T (*)(CodLiveOpsMainController*, bool))(Il2CppBase() + 0x3545548))(this, reset);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3545670))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3545744))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3545B40))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3544768))(this);
	}
	template <typename T = uintptr_t> T get_AnnouncementDS() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3545A90))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3545D74))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnBtnXClick() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3546960))(this);
	}
	template <typename T = void> T OnTopTabItemClick(uintptr_t msg) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t))(Il2CppBase() + 0x3546A80))(this, msg);
	}
	template <typename T = void> T OnTopTabItemClick_1(int32_t topIndex) {
		return ((T (*)(CodLiveOpsMainController*, int32_t))(Il2CppBase() + 0x3544D7C))(this, topIndex);
	}
	template <typename T = void> T OnResLeftTabItemClick(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t))(Il2CppBase() + 0x3546BF4))(this, Msg);
	}
	template <typename T = void> T OnResLeftTabItemClick_1(int32_t selectLeftNum, uintptr_t ttype, bool reset) {
		return ((T (*)(CodLiveOpsMainController*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x354619C))(this, selectLeftNum, ttype, reset);
	}
	template <typename T = void> T OnNoityfClose(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t))(Il2CppBase() + 0x354733C))(this, Msg);
	}
	template <typename T = void> T RefreshSignRedBadget(uintptr_t message) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t))(Il2CppBase() + 0x3547418))(this, message);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3547640))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodLiveOpsMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3547738))(this, list, userContext);
	}
	template <typename T = bool> static T IsWindowCurrentOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x354781C))(0);
	}
	template <typename T = void> static T T_FirstEnterSubscribeAnnouncementm__0(uintptr_t result, int32_t userContext) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3547928))(0, result, userContext);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x354792C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3547934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x354793C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsMainController*))(Il2CppBase() + 0x3547944))(this);
	}

};

}
