#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIUtil"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SCREEN_DESIGN_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SCREEN_DESIGN_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& PAYTOKEN_INVALID_CONTEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHAT_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& CHAT_WORLD_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& VIEW_CLOSE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& MP_SIGN_BLUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& MP_SIGN_RED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PvpMatchAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PvpPrivateAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BrMatchAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BrPrivateAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ZombieAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ShopAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SettingAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BattlePassAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RegularUIViewAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = float> T& preloadRegularResStartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& preloadRegularResEndTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsSyncPreloadRegularUI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bindingNewController() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& cacheNavigationDataForLoadoutWeapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cacheNavigationDataForLoadoutRole() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_BrLadderDS() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPayTokenInvalidTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackToLoginConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHomeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBPShowTipIfBPNotOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowSeasonCurDownInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBattlePassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBattlePassBuyPass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBattlePassGetTiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFirstRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAccumulateRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSingleRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFriendRecall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShopByShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToShopByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShopDetilViewByShopItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckyBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustFontSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenShopMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadRegularUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheLoadRegularUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToCodLiveOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToCodLiveOpsByPillar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopupGuestBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToWorkShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Switch2SoldierReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Switch2SoldierReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSeasonShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVideoIsReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady_PersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSquadCompose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToExternalLink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenElectroicSportsUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderScoreByGameModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitofferSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFirstReCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAmassReCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAmassRechargeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSingleRechargeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToOTO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSingle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagAssetLoadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillStreakClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillStreakClickImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLoadoutWeaponViewBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLoadoutWeaponViewEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenLoadoutWeaponImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLoadoutRoleViewBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBrLoadoutRoleViewBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLoadoutRoleViewEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenLoadoutRoleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToWeaponPromotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToWeaponPromotionImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoSomewhereByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMailBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackToLastView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLobbyVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLobbyVideoPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVideoFileExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVideoByPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNGUIWeight_InUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNGUIHeight_InUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsedHomemainview33Resource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToRankDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToCallingCardShowScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBrRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo20vs20Room() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBrByMatchServiceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterBrByTargetMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToGetBrInfoByCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsBrLadderSeasonEnablePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterBrRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TryToEnterBrRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryToEnterBrRoom_MatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryToenterBrRoom_Private() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopupTipByPlaylistState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSpvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMpByMatchServiceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterMpByTargetMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterMpByPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterMpByPlaylistList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterMp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToZB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchZombie_Match() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A068))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A118))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A1C8))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A278))(this);
	}
	template <typename T = bool> static T ShowPayTokenInvalidTips() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A0A328))(0);
	}
	template <typename T = void> static T OnBackToLoginConfirm(uintptr_t result, int32_t context) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2A0A644))(0, result, context);
	}
	template <typename T = void> T OnHomeBtnClick() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A75C))(this);
	}
	template <typename T = void> T SwitchToBPShowTipIfBPNotOpen() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0A98C))(this);
	}
	template <typename T = Il2CppString*> T GetShowSeasonCurDownInfo() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0AF6C))(this);
	}
	template <typename T = void> T OnBattlePassClick() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0AD00))(this);
	}
	template <typename T = void> T SwitchToBattlePassBuyPass() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0B1C4))(this);
	}
	template <typename T = void> T SwitchToBattlePassGetTiers() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0B5C4))(this);
	}
	template <typename T = void> T SwitchToFirstRecharge() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0B92C))(this);
	}
	template <typename T = void> T SwitchToAccumulateRecharge(int32_t id) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0C2A8))(this, id);
	}
	template <typename T = void> T SwitchToSingleRecharge(int32_t id) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0C410))(this, id);
	}
	template <typename T = void> T SwitchToBP() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0C578))(this);
	}
	template <typename T = void> T SwitchToInviteNewbie(bool bFromWorldChat, Il2CppString* inviteCode) {
		return ((T (*)(UIUtil*, bool, Il2CppString*))(Il2CppBase() + 0x2A0C64C))(this, bFromWorldChat, inviteCode);
	}
	template <typename T = void> T SwitchToFriendRecall() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0CAC8))(this);
	}
	template <typename T = void> T SwitchToShopByShopId(int32_t shopId) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0CDF4))(this, shopId);
	}
	template <typename T = void> T GoToShopByItemId(uint32_t itemId, bool showTips) {
		return ((T (*)(UIUtil*, uint32_t, bool))(Il2CppBase() + 0x2A0D884))(this, itemId, showTips);
	}
	template <typename T = void> T SwitchToShopDetilViewByShopItemData(uintptr_t shopItem, bool showTips, uintptr_t cell, bool isFromCoinTab) {
		return ((T (*)(UIUtil*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x2A0D1E0))(this, shopItem, showTips, cell, isFromCoinTab);
	}
	template <typename T = void> T SwitchToLuckDraw(int32_t id) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0D9E0))(this, id);
	}
	template <typename T = void> T SwitchToLuckyBoard(int32_t id) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0E520))(this, id);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(UIUtil*, uint32_t, uintptr_t))(Il2CppBase() + 0x2A0E39C))(this, boxId, source);
	}
	template <typename T = void> static T OnPrivacyBtnClick(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A0E7B4))(0, obj);
	}
	template <typename T = int32_t> static T AdjustFontSize(int32_t fontSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2A0E910))(0, fontSize);
	}
	template <typename T = void> T PopToTop(bool bPopToTop) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A0E9E0))(this, bPopToTop);
	}
	template <typename T = void> T PopUIScene(bool bPopUIScene) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A0EB58))(this, bPopUIScene);
	}
	template <typename T = void> T PushUI(Il2CppString* titleLocId, Il2CppString* subTitleLocId, uintptr_t barStyle, Il2CppArray<uintptr_t>* barParam, int32_t topNum, int32_t leftNum) {
		return ((T (*)(UIUtil*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E86798))(this, titleLocId, subTitleLocId, barStyle, barParam, topNum, leftNum);
	}
	template <typename T = void> T ShowPopupWindow() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x1E86ADC))(this);
	}
	template <typename T = bool> T SwitchToView(uintptr_t type, int32_t secondTab, int32_t thirdTab, int32_t fourthTab, Il2CppString* url, bool bPopToTop, bool bPopUIScene, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, uintptr_t, int32_t, int32_t, int32_t, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x2A0BA8C))(this, type, secondTab, thirdTab, fourthTab, url, bPopToTop, bPopUIScene, bFromHomeView, bPopToRoot);
	}
	template <typename T = void> T SwitchToShop(int32_t secondTab) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0F4F4))(this, secondTab);
	}
	template <typename T = void> T OnOpenShopMainView(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A12604))(this, id, obj);
	}
	template <typename T = void> T PreLoadRegularUI() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A128E8))(this);
	}
	template <typename T = void> T CacheLoadRegularUI(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A12B9C))(this, id, obj);
	}
	template <typename T = void> T SwitchToCodLiveOps(int32_t topNum, int32_t leftNum) {
		return ((T (*)(UIUtil*, int32_t, int32_t))(Il2CppBase() + 0x2A10044))(this, topNum, leftNum);
	}
	template <typename T = void> T SwitchToCodLiveOpsByPillar(int32_t topNum, Il2CppString* inTopName, int32_t leftNum) {
		return ((T (*)(UIUtil*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2A12DF8))(this, topNum, inTopName, leftNum);
	}
	template <typename T = void> T SwitchToChat() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0FB40))(this);
	}
	template <typename T = void> T SwitchToLive() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A110F8))(this);
	}
	template <typename T = void> T PopupGuestBind() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A11298))(this);
	}
	template <typename T = void> T SwitchToWorkShop() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A1148C))(this);
	}
	template <typename T = void> T Switch2SoldierReturn(int32_t secondTab) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A11670))(this, secondTab);
	}
	template <typename T = void> T Switch2SoldierReturn_1(uintptr_t secondTab) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A1300C))(this, secondTab);
	}
	template <typename T = bool> T IsSupportVideo() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A13400))(this);
	}
	template <typename T = void> T SwitchToSeasonShow(bool showNoVideoTips) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A13590))(this, showNoVideoTips);
	}
	template <typename T = bool> T CheckVideoIsReady(Il2CppString* videoPath) {
		return ((T (*)(UIUtil*, Il2CppString*))(Il2CppBase() + 0x2A13C70))(this, videoPath);
	}
	template <typename T = void> T SwitchToPersonalInfo(uint64_t playeId, int32_t secondTab, int32_t thirdTab) {
		return ((T (*)(UIUtil*, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x2A0FD04))(this, playeId, secondTab, thirdTab);
	}
	template <typename T = void> T OnAssetReady_PersonalInfo(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A13F24))(this, ids, obj);
	}
	template <typename T = void> T SwitchToSquadCompose(int32_t secondTab) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A0F900))(this, secondTab);
	}
	template <typename T = void> T SwitchToExternalLink(int32_t externalLinkSubType, int32_t gameModeCategory, Il2CppString* url) {
		return ((T (*)(UIUtil*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x2A0F9E0))(this, externalLinkSubType, gameModeCategory, url);
	}
	template <typename T = void> T OpenElectroicSportsUrl(int32_t gameModeCategory) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A147E8))(this, gameModeCategory);
	}
	template <typename T = Il2CppString*> T GetChannelToken(Il2CppString* channelinfo) {
		return ((T (*)(UIUtil*, Il2CppString*))(Il2CppBase() + 0x2A14DDC))(this, channelinfo);
	}
	template <typename T = Il2CppString*> T GetLadderScoreByGameModeCategory(int32_t gameModeCategory) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A14F74))(this, gameModeCategory);
	}
	template <typename T = void> T SwitchToShare() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A0F838))(this);
	}
	template <typename T = void> T LimitofferSkip(uintptr_t data) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A15120))(this, data);
	}
	template <typename T = bool> T SwitchToFirstReCharge(bool force, bool inbSendCloseEvent) {
		return ((T (*)(UIUtil*, bool, bool))(Il2CppBase() + 0x2A1059C))(this, force, inbSendCloseEvent);
	}
	template <typename T = void> T SwitchToAmassReCharge(int32_t param) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A10718))(this, param);
	}
	template <typename T = void> T OpenAmassRechargeOpen(bool force) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A157A8))(this, force);
	}
	template <typename T = void> T OpenSingleRechargeOpen(bool force) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A15B84))(this, force);
	}
	template <typename T = bool> T SwitchToOTO(int32_t id, bool isSendCloseEvent) {
		return ((T (*)(UIUtil*, int32_t, bool))(Il2CppBase() + 0x2A109CC))(this, id, isSendCloseEvent);
	}
	template <typename T = void> T SwitchToSingle(int32_t param) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A10BA8))(this, param);
	}
	template <typename T = void> T OnBagAssetLoadFinished(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A15E94))(this, id, obj);
	}
	template <typename T = void> T OnLoadoutClick(uintptr_t tabType) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A144DC))(this, tabType);
	}
	template <typename T = void> T OnKillStreakClick() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A1653C))(this);
	}
	template <typename T = void> T OnKillStreakClickImpl(int32_t id, uintptr_t obj) {
		return ((T (*)(UIUtil*, int32_t, uintptr_t))(Il2CppBase() + 0x2A167DC))(this, id, obj);
	}
	template <typename T = void> T OpenLoadoutWeaponViewBegin(uintptr_t data) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A16BC4))(this, data);
	}
	template <typename T = void> T OpenLoadoutWeaponViewEnd() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A16EBC))(this);
	}
	template <typename T = void> T OnOpenLoadoutWeaponImpl(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A171AC))(this, id, obj);
	}
	template <typename T = void> T OpenLoadoutRoleViewBegin(uintptr_t data) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A174EC))(this, data);
	}
	template <typename T = void> T OpenBrLoadoutRoleViewBegin(uintptr_t data) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A177E4))(this, data);
	}
	template <typename T = void> T OpenLoadoutRoleViewEnd() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A178CC))(this);
	}
	template <typename T = void> T OnOpenLoadoutRoleImpl(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A17BBC))(this, id, obj);
	}
	template <typename T = void> T SwitchToWeaponPromotion(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(UIUtil*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2A17E04))(this, weapon, squadType, index);
	}
	template <typename T = void> T OnSwitchToWeaponPromotionImpl(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(UIUtil*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2A1825C))(this, id, obj);
	}
	template <typename T = void> T GotoSomewhereByItemId(uint32_t itemId) {
		return ((T (*)(UIUtil*, uint32_t))(Il2CppBase() + 0x2A184F8))(this, itemId);
	}
	template <typename T = void> T SwitchToMailBox() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A10E5C))(this);
	}
	template <typename T = void> T BackToLastView() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A19554))(this);
	}
	template <typename T = void> T SwitchToLobbyVideo() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A196EC))(this);
	}
	template <typename T = Il2CppString*> T GetLobbyVideoPath(int32_t seasonId) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A19AA4))(this, seasonId);
	}
	template <typename T = bool> T IsVideoFileExist(Il2CppString* originalPath) {
		return ((T (*)(UIUtil*, Il2CppString*))(Il2CppBase() + 0x2A1A094))(this, originalPath);
	}
	template <typename T = void> T ShowVideoByPath(Il2CppString* videoPath) {
		return ((T (*)(UIUtil*, Il2CppString*))(Il2CppBase() + 0x2A19C08))(this, videoPath);
	}
	template <typename T = float> static T GetNGUIWeight_InUnity() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A1A450))(0);
	}
	template <typename T = float> static T GetNGUIHeight_InUnity() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A1A638))(0);
	}
	template <typename T = bool> static T IsUsedHomemainview33Resource() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A1A820))(0);
	}
	template <typename T = void> T SwitchToRankDetail(int32_t secondTab) {
		return ((T (*)(UIUtil*, int32_t))(Il2CppBase() + 0x2A11798))(this, secondTab);
	}
	template <typename T = void> T SwitchToCallingCardShowScene(int32_t itemID, Il2CppString* MainTitle, Il2CppString* SubTitle) {
		return ((T (*)(UIUtil*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A123B0))(this, itemID, MainTitle, SubTitle);
	}
	template <typename T = uintptr_t> T get_BrLadderDS() {
		return ((T (*)(UIUtil*))(Il2CppBase() + 0x2A1A95C))(this);
	}
	template <typename T = bool> T SwitchToBr(int32_t brSubType, int32_t playlistId, int32_t brTargetMapId, bool bFromHomeView, bool bPopToRoot, bool bForceTargetPlaylistId) {
		return ((T (*)(UIUtil*, int32_t, int32_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x2A0ECD0))(this, brSubType, playlistId, brTargetMapId, bFromHomeView, bPopToRoot, bForceTargetPlaylistId);
	}
	template <typename T = bool> T SwitchToBrMatchLadder(int32_t playlistId, int32_t targetMapId, bool bFromHomeView, bool bPopToRoot, bool bForceTargetPlaylistId) {
		return ((T (*)(UIUtil*, int32_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x2A1AB98))(this, playlistId, targetMapId, bFromHomeView, bPopToRoot, bForceTargetPlaylistId);
	}
	template <typename T = bool> T SwitchToBrRoom(int32_t playlistId, int32_t targetMapId, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2A1AA0C))(this, playlistId, targetMapId, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T SwitchTo20vs20Room(int32_t playlistId, int32_t targetMapId, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2A1AD3C))(this, playlistId, targetMapId, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T SwitchToBrByMatchServiceList(int32_t targetPlaylistId, int32_t targetMapId, bool bFromHomeView, Il2CppList<int32_t>* matchServiceList, bool bPopToRoot, bool bForceTargetPlaylistId) {
		return ((T (*)(UIUtil*, int32_t, int32_t, bool, Il2CppList<int32_t>*, bool, bool))(Il2CppBase() + 0x2A1B0D0))(this, targetPlaylistId, targetMapId, bFromHomeView, matchServiceList, bPopToRoot, bForceTargetPlaylistId);
	}
	template <typename T = bool> T TryToEnterBrByTargetMapId(int32_t targetPlaylistId, int32_t targetMapId, Il2CppList<int32_t>* matchServiceList, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, int32_t, Il2CppList<int32_t>*, bool, bool))(Il2CppBase() + 0x2A1B3D4))(this, targetPlaylistId, targetMapId, matchServiceList, bFromHomeView, bPopToRoot);
	}
	template <typename T = void> T TryToGetBrInfoByCache(Il2CppList<int32_t>* matchServiceList, uintptr_t playlistId, uintptr_t mapId) {
		return ((T (*)(UIUtil*, Il2CppList<int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A1B5D0))(this, matchServiceList, playlistId, mapId);
	}
	template <typename T = bool> T _IsBrLadderSeasonEnablePlay(bool bTip) {
		return ((T (*)(UIUtil*, bool))(Il2CppBase() + 0x2A1BD88))(this, bTip);
	}
	template <typename T = bool> T TryToEnterBrRoom(Il2CppList<int32_t>* matchServiceList, int32_t targetPlaylistId, int32_t targetMapId, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, Il2CppList<int32_t>*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2A1BC24))(this, matchServiceList, targetPlaylistId, targetMapId, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T TryToEnterBrRoom_1(uintptr_t data, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, uintptr_t, bool, bool))(Il2CppBase() + 0x2A1BED0))(this, data, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T _TryToEnterBrRoom_MatchLadder(uintptr_t data, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, uintptr_t, bool, bool))(Il2CppBase() + 0x2A1C31C))(this, data, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T _TryToenterBrRoom_Private(uintptr_t data, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, uintptr_t, bool, bool))(Il2CppBase() + 0x2A1C76C))(this, data, bFromHomeView, bPopToRoot);
	}
	template <typename T = void> T PopupTipByPlaylistState(uintptr_t state) {
		return ((T (*)(UIUtil*, uintptr_t))(Il2CppBase() + 0x2A1C01C))(this, state);
	}
	template <typename T = bool> T SwitchToSpvp(int32_t spvpSubType, int32_t playlistId, int32_t targetmapId, bool bFromHomeView, bool bPopToRoot, Il2CppList<uint32_t>* PlaylistList, uintptr_t ticketParam) {
		return ((T (*)(UIUtil*, int32_t, int32_t, int32_t, bool, bool, Il2CppList<uint32_t>*, uintptr_t))(Il2CppBase() + 0x2A0F008))(this, spvpSubType, playlistId, targetmapId, bFromHomeView, bPopToRoot, PlaylistList, ticketParam);
	}
	template <typename T = bool> T SwitchToMpLadder(int32_t targetPlaylistId, uintptr_t roomUIType, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2A1CF60))(this, targetPlaylistId, roomUIType, bPopToRoot);
	}
	template <typename T = bool> T SwitchToMpByMatchServiceList(bool bPopToRoot, int32_t switchPlaylistId, int32_t targetMapId, uintptr_t serviceModule, uintptr_t roomUIType, bool bFromHomeView, Il2CppList<uint32_t>* PlaylistList, uintptr_t ticketParam) {
		return ((T (*)(UIUtil*, bool, int32_t, int32_t, uintptr_t, uintptr_t, bool, Il2CppList<uint32_t>*, uintptr_t))(Il2CppBase() + 0x2A1CBE8))(this, bPopToRoot, switchPlaylistId, targetMapId, serviceModule, roomUIType, bFromHomeView, PlaylistList, ticketParam);
	}
	template <typename T = bool> T TryToEnterMpByTargetMapId(bool bPopToRoot, int32_t switchPlaylistId, int32_t targetMapId, uintptr_t serviceModule, uintptr_t roomUIType, bool bFromHomeView) {
		return ((T (*)(UIUtil*, bool, int32_t, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2A1DC98))(this, bPopToRoot, switchPlaylistId, targetMapId, serviceModule, roomUIType, bFromHomeView);
	}
	template <typename T = bool> T TryToEnterMpByPlaylistId(bool bPopToRoot, int32_t switchPlaylistId, uintptr_t serviceModule, uintptr_t roomUIType, bool bFromHomeView) {
		return ((T (*)(UIUtil*, bool, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2A1DEEC))(this, bPopToRoot, switchPlaylistId, serviceModule, roomUIType, bFromHomeView);
	}
	template <typename T = bool> T TryToEnterMpByPlaylistList(bool bPopToRoot, Il2CppList<uint32_t>* PlaylistList, uintptr_t serviceModule, uintptr_t roomUIType, bool bFromHomeView, uintptr_t ticketParam) {
		return ((T (*)(UIUtil*, bool, Il2CppList<uint32_t>*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2A1D8F0))(this, bPopToRoot, PlaylistList, serviceModule, roomUIType, bFromHomeView, ticketParam);
	}
	template <typename T = bool> T TryToEnterMp(uintptr_t roomUIType, uintptr_t serviceModule, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x2A1E114))(this, roomUIType, serviceModule, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T SwitchToZB(int32_t secondTab, int32_t thirdTab, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2A0F218))(this, secondTab, thirdTab, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> T SwitchZombie_Match(int32_t instanceId, bool bFromHomeView, bool bPopToRoot) {
		return ((T (*)(UIUtil*, int32_t, bool, bool))(Il2CppBase() + 0x2A1EA20))(this, instanceId, bFromHomeView, bPopToRoot);
	}
	template <typename T = bool> static T TryToGetBrInfoByCachem__0(int32_t it) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2A1F410))(0, it);
	}

};

}
