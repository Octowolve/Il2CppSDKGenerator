#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BaseSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BaseSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& playAgainBtnTimer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _uiview() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _shareBtnWindow() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _whenShareEnableRecords() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDetailClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDetailTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTriggerDetailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshReportTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayAgainLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShareWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C11B6C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C11E5C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C123FC))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C12728))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C127D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C128E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C12B98))(this);
	}
	template <typename T = void> T OnBtnDetailClicked() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C12D40))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C1322C))(this);
	}
	template <typename T = void> T RefreshDetailTips() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C134FC))(this);
	}
	template <typename T = void> T AddTriggerDetailTimes(Il2CppString* modeName, uint64_t playerID) {
		return ((T (*)(BaseSettlementWindowController*, Il2CppString*, uint64_t))(Il2CppBase() + 0x3C12FE4))(this, modeName, playerID);
	}
	template <typename T = void> T RefreshReportTips() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C124E8))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C13788))(this);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C11F48))(this);
	}
	template <typename T = void> T CheckShowPlayAgainButton() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C12088))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(BaseSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C13790))(this, Msg);
	}
	template <typename T = void> T UpdatePlayAgainLabel() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C13CE0))(this);
	}
	template <typename T = bool> T IsCanPlayAgain() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C13DBC))(this);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(BaseSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C13F2C))(this, msg);
	}
	template <typename T = void> T ShowShareWindow() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C14054))(this);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(BaseSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C141AC))(this, msg);
	}
	template <typename T = bool> T IsShowShare(uintptr_t data) {
		return ((T (*)(BaseSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C1450C))(this, data);
	}
	template <typename T = uintptr_t> T GetShareData() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C146B0))(this);
	}
	template <typename T = uintptr_t> T GetShareReportData() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C147B8))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C14938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C149D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C149E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C149E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C149F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C149F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C14A00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BaseSettlementWindowController*))(Il2CppBase() + 0x3C14A08))(this);
	}

};

}
