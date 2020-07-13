#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankDetailWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RankDetailType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_SpvpSeasonNo() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_SpvpSeasonState() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_BrSeasonNo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_BrSeasonState() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_AdaptTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& m_StateName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ElectronicSports_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> static T& FIXED_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SPVP_RANK_NOT_DOWN_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BR_RANK_NOT_DOWN_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bOpenFromWindow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_RankStatisticCtr() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ScrollPlayDataList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& SCROLL_PLAY_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_LadderDS() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_PersonalInfoDS() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsDS() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshElectronicSports() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRewardDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnElectronicSportsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSpvpDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBrDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterMultiplayRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterBrRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCreateLadderRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRankDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSeasonVideoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRewardWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnStatisticWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseRankStatisticWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeSpvpSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeBrSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowVide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRewardWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDetailViewEnableChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetElectronicSports() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshElectronicSportsCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpRankTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrRankTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSpvpRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentBrRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpPlayerRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrPlayerRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpNextLevelRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnBtnRewardDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBestRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankDetailBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrNextLevelRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpvpNextBestRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrNextBestRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurrentController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySetOpenFromWindowCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenFromWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EE71C))(this);
	}
	template <typename T = uintptr_t> T get_BrLadderDS() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EE7CC))(this);
	}
	template <typename T = uintptr_t> T get_PersonalInfoDS() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EE87C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EE92C))(this);
	}
	template <typename T = uintptr_t> T get_ElectronicSportsDS() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EE9DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EEA8C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EEB98))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EEC3C))(this);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EF6A8))(this);
	}
	template <typename T = void> T RefreshElectronicSports() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EF964))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F02D0))(this);
	}
	template <typename T = void> T OnBtnRewardDetailClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F090C))(this);
	}
	template <typename T = void> T OnBtnElectronicSportsClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F0F6C))(this);
	}
	template <typename T = void> T OnBtnSpvpDetailClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F1240))(this);
	}
	template <typename T = void> T OnBtnBrDetailClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F17C0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F1A04))(this);
	}
	template <typename T = void> T OnMultiplayAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(RankDetailWindowController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37F2610))(this, id, obj);
	}
	template <typename T = void> T EnterMultiplayRoom() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F28D4))(this);
	}
	template <typename T = void> T OnBRAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(RankDetailWindowController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37F2C70))(this, id, obj);
	}
	template <typename T = void> T EnterBrRoom() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F3024))(this);
	}
	template <typename T = void> T OnBtnCreateLadderRoom() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F33C0))(this);
	}
	template <typename T = void> T OnBtnRankDetailClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F36C0))(this);
	}
	template <typename T = void> T OnBtnSeasonVideoClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F3884))(this);
	}
	template <typename T = void> T OnBtnRewardWindowClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F3994))(this);
	}
	template <typename T = void> T OnBtnStatisticWindowClick() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F3B5C))(this);
	}
	template <typename T = void> T OnNotifyCloseRankStatisticWindowView(uintptr_t message) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37F3F18))(this, message);
	}
	template <typename T = void> T ComputeSpvpSeasonState(int32_t serverTime) {
		return ((T (*)(RankDetailWindowController*, int32_t))(Il2CppBase() + 0x37EF78C))(this, serverTime);
	}
	template <typename T = void> T ComputeBrSeasonState(int32_t serverTime) {
		return ((T (*)(RankDetailWindowController*, int32_t))(Il2CppBase() + 0x37EF878))(this, serverTime);
	}
	template <typename T = void> T CheckShowVide() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F3FF4))(this);
	}
	template <typename T = void> T InitView(uintptr_t rankDetailType) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37F4100))(this, rankDetailType);
	}
	template <typename T = void> T InitBtnState(bool bEnterFromHome) {
		return ((T (*)(RankDetailWindowController*, bool))(Il2CppBase() + 0x37F44C0))(this, bEnterFromHome);
	}
	template <typename T = void> T ShowRewardWindow() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F4664))(this);
	}
	template <typename T = bool> T CheckDetailViewEnableChange(uintptr_t detailType) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37F481C))(this, detailType);
	}
	template <typename T = void> T SetDetailView(uintptr_t detailType) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37F1484))(this, detailType);
	}
	template <typename T = void> T SetSpvpView() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F4CAC))(this);
	}
	template <typename T = void> T SetBrView() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F5464))(this);
	}
	template <typename T = void> T SetElectronicSports() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EFC50))(this);
	}
	template <typename T = void> T RefreshElectronicSportsCountDown() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F5EAC))(this);
	}
	template <typename T = void> T SetSpvpRankTip() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F505C))(this);
	}
	template <typename T = void> T SetBrRankTip() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F5680))(this);
	}
	template <typename T = void> T SetBtnState() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F4D68))(this);
	}
	template <typename T = void> T SetCurrentSpvpRankInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F4EFC))(this);
	}
	template <typename T = void> T SetCurrentBrRankInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F5520))(this);
	}
	template <typename T = void> T SetSpvpSeasonInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F60B4))(this);
	}
	template <typename T = void> T SetBrSeasonInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F8B6C))(this);
	}
	template <typename T = void> T SetSpvpPlayerRankInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F6B58))(this);
	}
	template <typename T = void> T SetBrPlayerRankInfo() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F9610))(this);
	}
	template <typename T = void> T SetSpvpNextLevelRewards() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F7AAC))(this);
	}
	template <typename T = void> T OnBtnRewardDetailClick_1(uint32_t itemID) {
		return ((T (*)(RankDetailWindowController*, uint32_t))(Il2CppBase() + 0x37F0A90))(this, itemID);
	}
	template <typename T = void> T SetBestRewards() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F1CF4))(this);
	}
	template <typename T = void> T SetRankDetailBg() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F48D8))(this);
	}
	template <typename T = void> T SetBrNextLevelRewards() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FA564))(this);
	}
	template <typename T = void> T SetSpvpNextBestRewards() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37F880C))(this);
	}
	template <typename T = void> T SetBrNextBestRewards() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FB2C4))(this);
	}
	template <typename T = bool> T CheckCurrentController() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37EFAC0))(this);
	}
	template <typename T = void> T OnNotifySetOpenFromWindowCache(uintptr_t message) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37FB74C))(this, message);
	}
	template <typename T = bool> T IsOpenFromWindow() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FB870))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FB918))(this);
	}
	template <typename T = bool> T SetSpvpRankTipm__1(uintptr_t it) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37FBAD0))(this, it);
	}
	template <typename T = bool> T SetBrRankTipm__2(uintptr_t it) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37FBB54))(this, it);
	}
	template <typename T = bool> T SetSpvpPlayerRankInfom__3(uintptr_t it) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37FBBD8))(this, it);
	}
	template <typename T = bool> T SetBrPlayerRankInfom__4(uintptr_t it) {
		return ((T (*)(RankDetailWindowController*, uintptr_t))(Il2CppBase() + 0x37FBC5C))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FBCE0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FBCE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FBCF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FBCF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RankDetailWindowController*))(Il2CppBase() + 0x37FBD00))(this);
	}

};

}
