#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AbstractSettlementPopUpWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractSettlementPopUpWindowController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_SettlementDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _shareBtnWindow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _whenShareEnableRecords() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& playAgainBtnTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleAddChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleLikeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleReportChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScreenFixedPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuffDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMoreMedalClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareWindowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerHeadIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySettlementBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSettlementBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init_Share() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShuntDown_Share() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShareWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayAgainLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0B868))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0BC00))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0BC08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C19C))(this);
	}
	template <typename T = uintptr_t> T get_SettlementDS() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C570))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C620))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C9DC))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CAAC))(this);
	}
	template <typename T = void> T OnToggleAddChange() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CBC4))(this);
	}
	template <typename T = void> T OnToggleLikeChange() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CC80))(this);
	}
	template <typename T = void> T OnToggleReportChange() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CD3C))(this);
	}
	template <typename T = bool> T IsScreenFixedPic() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CDF8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CE98))(this);
	}
	template <typename T = void> T OnBtnBuffDetailClick() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CFE0))(this);
	}
	template <typename T = void> T OnBtnMoreMedalClick() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0D154))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0D210))(this);
	}
	template <typename T = void> T OnShareWindowClose(uintptr_t Msg) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0D38C))(this, Msg);
	}
	template <typename T = void> T OnPlayerHeadIconClick(uintptr_t Msg) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0D4BC))(this, Msg);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0D774))(this);
	}
	template <typename T = void> T PlaySettlementBGM(uintptr_t settlementDS) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0D854))(this, settlementDS);
	}
	template <typename T = void> T PlayMusic(Il2CppString* audioID, float delay) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, Il2CppString*, float))(Il2CppBase() + 0x4A0D8F4))(this, audioID, delay);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0D9A8))(this);
	}
	template <typename T = void> T StopSettlementBGM() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0DA50))(this);
	}
	template <typename T = void> T Init_Share() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0B97C))(this);
	}
	template <typename T = void> T ShuntDown_Share() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0CF48))(this);
	}
	template <typename T = void> T ShowShareWindow() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0DB14))(this);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0DC6C))(this, msg);
	}
	template <typename T = bool> T IsShowShare(uintptr_t data) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0E0A0))(this, data);
	}
	template <typename T = uintptr_t> T GetShareData() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0E244))(this);
	}
	template <typename T = uintptr_t> T GetShareReportData() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0E33C))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0E4BC))(this);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C6F0))(this);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0E55C))(this, msg);
	}
	template <typename T = void> T CheckShowPlayAgainButton() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0C830))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(AbstractSettlementPopUpWindowController*, uintptr_t))(Il2CppBase() + 0x4A0E634))(this, Msg);
	}
	template <typename T = void> T UpdatePlayAgainLabel() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0E88C))(this);
	}
	template <typename T = bool> T IsCanPlayAgain() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0E968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EAD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EAE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EAE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EAF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EAF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EB00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(AbstractSettlementPopUpWindowController*))(Il2CppBase() + 0x4A0EB10))(this);
	}

};

}
