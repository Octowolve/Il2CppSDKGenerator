#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementRankWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementRankWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetupPVERankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreparePVERankViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReportClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBPClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayAgainClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExpDetailClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B36218))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B362BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B3652C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B3676C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B36B3C))(this);
	}
	template <typename T = void> T SetupPVERankViewData() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B36BF8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PreparePVERankViewData(uintptr_t ds) {
		return ((T (*)(PVESettlementRankWindowController*, uintptr_t))(Il2CppBase() + 0x3B36DB0))(this, ds);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B2CFD0))(this);
	}
	template <typename T = void> T OnBtnReportClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B3824C))(this);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38794))(this);
	}
	template <typename T = void> T OnBtnBPClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38878))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B3895C))(this);
	}
	template <typename T = void> T OnBtnExpDetailClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38B20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnReportClicked() {
		return ((T (*)(PVESettlementRankWindowController*))(Il2CppBase() + 0x3B38C2C))(this);
	}

};

}
