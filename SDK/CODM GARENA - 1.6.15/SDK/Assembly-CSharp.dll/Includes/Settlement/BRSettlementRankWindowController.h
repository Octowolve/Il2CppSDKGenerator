#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRankWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRankWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetupBRRankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBRRankViewData() {
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
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C24A88))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C24B2C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C24E6C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C25164))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C257A8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C25868))(this);
	}
	template <typename T = void> T SetupBRRankViewData() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C25920))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareBRRankViewData(uintptr_t ds) {
		return ((T (*)(BRSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3C25AD8))(this, ds);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C255E4))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C281C0))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C28260))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C288FC))(this);
	}
	template <typename T = void> T OnBtnBPClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C28C7C))(this);
	}
	template <typename T = void> T OnBtnXPClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C28D60))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C28E44))(this);
	}
	template <typename T = void> T OnPickUpBtnClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2929C))(this);
	}
	template <typename T = void> T OnShowBtnClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C29884))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(BRSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3C29940))(this, Msg);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A028))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A118))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A12C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetShareReportType() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClicked() {
		return ((T (*)(BRSettlementRankWindowController*))(Il2CppBase() + 0x3C2A134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAgainTeamInfoUpdateNtf(uintptr_t P0) {
		return ((T (*)(BRSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3C2A138))(this, P0);
	}

};

}
