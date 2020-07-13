#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_SingleSettlementCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_SPVPSettlementCtr() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_BRSettlementCtr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_PVESettlementCtr() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_PVPCatSettlementCtr() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_BRTDMSettlementCtr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& mIsChange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenReportView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReportBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySetReportBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295AEEC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295AFF8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295B12C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295B1D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295B3BC))(this);
	}
	template <typename T = void> T InitWindow(bool historyInfo) {
		return ((T (*)(SettlementDetailWindowController*, bool))(Il2CppBase() + 0x2958D3C))(this, historyInfo);
	}
	template <typename T = void> T ReportBtnClick() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295BB4C))(this);
	}
	template <typename T = void> T OnOpenReportView(Il2CppList<uintptr_t>* mTeammate, Il2CppList<uintptr_t>* mHitter, bool mIsBR, bool mIsMP, bool mIsFFA) {
		return ((T (*)(SettlementDetailWindowController*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x295C3C0))(this, mTeammate, mHitter, mIsBR, mIsMP, mIsFFA);
	}
	template <typename T = void> T SetReportBtnActive(bool mIsHistoryInfo) {
		return ((T (*)(SettlementDetailWindowController*, bool))(Il2CppBase() + 0x295B500))(this, mIsHistoryInfo);
	}
	template <typename T = void> T NotifySetReportBtnActive(uintptr_t Msg) {
		return ((T (*)(SettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x295C654))(this, Msg);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(SettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x295C7E8))(this, Msg);
	}
	template <typename T = bool> static T OnOpenReportViewm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x295C92C))(0, s);
	}
	template <typename T = bool> static T OnOpenReportViewm__1(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x295C95C))(0, s);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295C98C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295C994))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295C99C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295C9A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementDetailWindowController*))(Il2CppBase() + 0x295C9AC))(this);
	}

};

}
