#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WinnerCircleMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WinnerCircleMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HandleMP1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSettlementData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupMainViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareMainViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPlayerWinnerCircleRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWinnerCircleShowData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampCheckFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareCaptureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideUIFromScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainMatchingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPlayerProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShareWindowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOnLoadingUIClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayAgainWindowPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = void> T OnOpen() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A3319C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A332CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A33370))(this);
	}
	template <typename T = void> T T_HandleMP1() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A335F4))(this);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A33480))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A33AAC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A33F60))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A34004))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A340A8))(this);
	}
	template <typename T = void> T OnGetSettlementData(uintptr_t msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A341BC))(this, msg);
	}
	template <typename T = void> T SetupMainViewData() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A33B58))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T PrepareMainViewData(uintptr_t ds, uintptr_t* isFFA) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2A34268))(0, ds, isFFA);
	}
	template <typename T = int32_t> static T GetLocalPlayerWinnerCircleRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A368A8))(0);
	}
	template <typename T = uintptr_t> static T GetWinnerCircleShowData(uintptr_t matchCategory, bool isFFA, bool isScoreFFA, bool isBr, uintptr_t playerStats) {
		return ((T (*)(void *, uintptr_t, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x2A35E68))(0, matchCategory, isFFA, isScoreFFA, isBr, playerStats);
	}
	template <typename T = void*> static T GetCampCheckFunc(bool isFFA, int32_t winningCamp) {
		return ((T (*)(void *, bool, int32_t))(Il2CppBase() + 0x2A35C44))(0, isFFA, winningCamp);
	}
	template <typename T = void> T ShowBlackScreen() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A36B18))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A36C6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A37004))(this);
	}
	template <typename T = void> T OnBtnShareClick() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A371E4))(this);
	}
	template <typename T = void> T OnShareCaptureCallback() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A37A84))(this);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A37E80))(this);
	}
	template <typename T = void> T HideUIFromScreenShot() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A38054))(this);
	}
	template <typename T = void> T OnPlayAgainMatchingStart(uintptr_t Msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A3810C))(this, Msg);
	}
	template <typename T = void> T OnShowPlayerProfile(uintptr_t Msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A382B4))(this, Msg);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2A3865C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A337F4))(this);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A38938))(this, msg);
	}
	template <typename T = void> T OnNotifyShareWindowClose(uintptr_t msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A38CF4))(this, msg);
	}
	template <typename T = void> T OnNotifyOnLoadingUIClosed(uintptr_t msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A38FF4))(this, msg);
	}
	template <typename T = Il2CppVector3> T GetPlayAgainWindowPos() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A38B04))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(WinnerCircleMainController*, uintptr_t))(Il2CppBase() + 0x2A33934))(this, Msg);
	}
	template <typename T = bool> static T GetCampCheckFuncm__0(int32_t campInt) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2A3950C))(0, campInt);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39514))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A3951C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A3952C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WinnerCircleMainController*))(Il2CppBase() + 0x2A39534))(this);
	}

};

}
