#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPCatSettlementRankWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPCatSettlementRankWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& OnCloseCallBack() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayAgainClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3B138))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3B1DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3B450))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3B68C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3BCB8))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3BD60))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3BB08))(this);
	}
	template <typename T = uintptr_t> T GetShareReportType() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D31C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D3BC))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D464))(this);
	}
	template <typename T = void> T OnBtnBPClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D82C))(this);
	}
	template <typename T = void> T OnBtnXPClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D910))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3D9F4))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3DE4C))(this);
	}
	template <typename T = void> T OnPickUpBtnClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3E1CC))(this);
	}
	template <typename T = void> T OnShowBtnClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3E328))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(PVPCatSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B3E3E4))(this, Msg);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EAD0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EB90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EB98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetShareReportType() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClicked() {
		return ((T (*)(PVPCatSettlementRankWindowController*))(Il2CppBase() + 0x3B3EBC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAgainTeamInfoUpdateNtf(uintptr_t P0) {
		return ((T (*)(PVPCatSettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B3EBD0))(this, P0);
	}

};

}
