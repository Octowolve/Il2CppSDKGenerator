#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class FFASettlementRankWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "FFASettlementRankWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& OnCloseCallBack() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupFFARankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareFFARankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayAgainClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B20484))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B20528))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B20870))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B20B6C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B21F88))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B22048))(this);
	}
	template <typename T = void> T SetupFFARankViewData() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B22104))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareFFARankViewData(uintptr_t ds) {
		return ((T (*)(FFASettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B222BC))(this, ds);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B21DD8))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B244EC))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B2458C))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B24A80))(this);
	}
	template <typename T = void> T OnBtnBPClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B24E00))(this);
	}
	template <typename T = void> T OnBtnXPClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B24EE4))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B24FC8))(this);
	}
	template <typename T = void> T OnPickUpBtnClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B25420))(this);
	}
	template <typename T = void> T OnShowBtnClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B25A0C))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(FFASettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B25AC8))(this, Msg);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B261B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetShareReportType() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClicked() {
		return ((T (*)(FFASettlementRankWindowController*))(Il2CppBase() + 0x3B262D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAgainTeamInfoUpdateNtf(uintptr_t P0) {
		return ((T (*)(FFASettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B262DC))(this, P0);
	}

};

}
