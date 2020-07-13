#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementRankScoreController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementRankScoreController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ExpGained() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CurrExp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CurrLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_SettlementData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _shareBtnWindow() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_PVPLadderDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_BRLadderDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_SettlementDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_OneMore() {
		return *(T*)((uintptr_t)this + 0x70);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitShareButtonNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StartSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetLadderPercentReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetLadderPercentRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationFinnalCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeBindAnimationFinnalCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeUnBindAnimationFinnalCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderScoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrLadderScoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_PVPLadderDS() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971A90))(this);
	}
	template <typename T = uintptr_t> T get_BRLadderDS() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971B40))(this);
	}
	template <typename T = uintptr_t> T get_SettlementDS() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971BF0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971CA0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971D44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2972158))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2972508))(this);
	}
	template <typename T = void> T InitShareButtonNode() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x297261C))(this);
	}
	template <typename T = void> T PrepareData() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x29728FC))(this);
	}
	template <typename T = void> T StartSettlement(uintptr_t type) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x2973138))(this, type);
	}
	template <typename T = void> T StartSettlement_1(uintptr_t type, int32_t score, int32_t level, int32_t expGain) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2974404))(this, type, score, level, expGain);
	}
	template <typename T = void> T SendGetLadderPercentReq() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2973218))(this);
	}
	template <typename T = void> T OnGetLadderPercentRes(uintptr_t message) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x297465C))(this, message);
	}
	template <typename T = void> T OnBtnNextClicked() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2974918))(this);
	}
	template <typename T = void> T OnShareBtnClicked() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2974A14))(this);
	}
	template <typename T = void> T GenerateParts() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2973444))(this);
	}
	template <typename T = void> T GenerateStep() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2974C74))(this);
	}
	template <typename T = void> T OnAnimationFinnalCallback(bool isShowShare) {
		return ((T (*)(SettlementRankScoreController*, bool))(Il2CppBase() + 0x29774C8))(this, isShowShare);
	}
	template <typename T = void> T SafeBindAnimationFinnalCallback() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2971EE0))(this);
	}
	template <typename T = void> T SafeUnBindAnimationFinnalCallback() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2972290))(this);
	}
	template <typename T = uintptr_t> T GetLadderScoreData() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2974B30))(this);
	}
	template <typename T = uintptr_t> T GetBrLadderScoreData() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x29775A8))(this);
	}
	template <typename T = uintptr_t> T GetShareData() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2972F9C))(this);
	}
	template <typename T = uintptr_t> T GetShareReportData() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x29776EC))(this);
	}
	template <typename T = bool> T GeneratePartsm__0(uintptr_t s) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x2977830))(this, s);
	}
	template <typename T = bool> T GeneratePartsm__1(uintptr_t s) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x2977874))(this, s);
	}
	template <typename T = bool> T GenerateStepm__2(uintptr_t s) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x29778B8))(this, s);
	}
	template <typename T = bool> T GenerateStepm__3(uintptr_t s) {
		return ((T (*)(SettlementRankScoreController*, uintptr_t))(Il2CppBase() + 0x29778FC))(this, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2977940))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2977948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2977950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementRankScoreController*))(Il2CppBase() + 0x2977958))(this);
	}

};

}
