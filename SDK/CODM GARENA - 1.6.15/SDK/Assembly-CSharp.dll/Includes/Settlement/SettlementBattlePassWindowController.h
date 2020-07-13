#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBattlePassWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBattlePassWindowController"));
	}

	template <typename T = int32_t> static T& PanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TaskListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_safeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_Init_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SettlementBattlePassWindowController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnExitBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupBPViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBPViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnClaimExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T T_MP1_Init_4() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5BF68))(this);
	}
	template <typename T = void> T T_SettlementBattlePassWindowController_Go() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C030))(this);
	}
	template <typename T = void> T T_OnExitBtnClick() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C0F8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C1C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C294))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C4EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C674))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5D0FC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5D42C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5D5D0))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5D6A8))(this);
	}
	template <typename T = void> T SetupBPViewData() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5D1D0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareBPViewData(uintptr_t ds) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t))(Il2CppBase() + 0x3B5D7F0))(this, ds);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetTaskList(uintptr_t collection, int32_t seasonid) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3B20FE8))(0, collection, seasonid);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5C9C8))(this);
	}
	template <typename T = int32_t> T GetUnClaimExp(Il2CppList<uintptr_t>* tasks) {
		return ((T (*)(SettlementBattlePassWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B5DBA8))(this, tasks);
	}
	template <typename T = void> T OnBtnExitClicked() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5DD4C))(this);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t))(Il2CppBase() + 0x3B5DE68))(this, Msg);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5CD34))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t))(Il2CppBase() + 0x3B5CEA0))(this, Msg);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t))(Il2CppBase() + 0x3B5E038))(this, msg);
	}
	template <typename T = bool> T GameUI_IEasyListCallback_OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B5E180))(this, list, controller, index);
	}
	template <typename T = void> T GameUI_IEasyListCallback_OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SettlementBattlePassWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x3B5E278))(this, list, userContext);
	}
	template <typename T = int32_t> static T GetTaskListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B5E3E0))(0, a, b);
	}
	template <typename T = void> T UpdateViewm__1() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EF78))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(SettlementBattlePassWindowController*))(Il2CppBase() + 0x3B5EFD8))(this);
	}

};

}
