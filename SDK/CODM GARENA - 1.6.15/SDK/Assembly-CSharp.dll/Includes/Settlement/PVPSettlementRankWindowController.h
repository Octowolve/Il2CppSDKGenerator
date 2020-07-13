#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementRankWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementRankWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& OnCloseCallBack() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& bPlayingAnim() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupPVPRankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreparePVPRankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayAgainClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T OnOpen() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B48BF8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B48DD8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B48E7C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B491C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B494C0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B49B18))(this);
	}
	template <typename T = void> T SetupPVPRankViewData() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B49BD4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PreparePVPRankViewData(uintptr_t ds) {
		return ((T (*)(PVPSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B49DAC))(this, ds);
	}
	template <typename T = void> T Close() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4A0C8))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B49968))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4CD68))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4CE08))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4CEB0))(this);
	}
	template <typename T = void> T OnBtnBPClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4D348))(this);
	}
	template <typename T = void> T OnBtnXPClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4D438))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4D528))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4D9B8))(this);
	}
	template <typename T = void> T OnPickUpBtnClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4DD44))(this);
	}
	template <typename T = void> T OnShowBtnClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4E364))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(PVPSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B4E420))(this, Msg);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC30))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC58))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetShareReportType() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClicked() {
		return ((T (*)(PVPSettlementRankWindowController*))(Il2CppBase() + 0x3B4EC70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAgainTeamInfoUpdateNtf(uintptr_t P0) {
		return ((T (*)(PVPSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B4EC78))(this, P0);
	}

};

}
