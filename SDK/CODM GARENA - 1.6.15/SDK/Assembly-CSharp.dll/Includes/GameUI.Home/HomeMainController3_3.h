#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeMainController33
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeMainController3_3"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ChatBroadcastController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ShopDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isShowDrawBtnToggle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isWillShow() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& showDrawBtnRedPoint() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_FeatureModeClient() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_GuildApplyMsgDataStore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_GuildMissionDataStore() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_InviteNewbieDataStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SundryDS() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& SEND_TO_SERVER_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& MAX_RECHARGEITEM_COUNT() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& drawAniTimer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& drawAniTimerTick() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& DRAW_ANI_MAX_TIMER() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& DRAW_ALPHA_MAX_TIMER() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& minRechargeWidth() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& maxRechargeWidth() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rechargeItemData() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& lobbyDrawShowLimitId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& MAX_LOBBYDRAW_ONE_SCREEN() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsPopUpIng() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_FacePopupCtr() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& bFromPlayBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PlayBtnClickReport() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& GUEST_BINDPB_ISPOPPEDUP() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_IsPop() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__am$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& f__am$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& f__am$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& f__am$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__am$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& f__am$cache11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& f__am$cache12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& f__am$cache13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__am$cache14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetPrize_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BuyM4_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutAndWeapon_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LevelUnlock_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetExpCard_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Sign_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RequestPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HomeMainController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HasExpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShowTutorialLevelEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_EnterBattlePassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnMallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdapterChatBroadcastView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLuckyDrawInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLuckyBoardInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendClientMapids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendExchangeShopReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpvpEntranceRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrEntranceRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBREntranceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendZMOpenTimeRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshZombieEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankMatchEntranceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBRModeOpenOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShopEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRechargeEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGuildNewMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCodLiveOpsActivityRedBadget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimeToSendTlog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBattlePassAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBattlePassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSeasonCurDownInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdatePandoraRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPandoraClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLobbyDrawClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDrawOpenAniTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDrawCloseAniTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAmassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFirstRechargeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowGameCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToRefreshPandora() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlatformBasicClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlatformBasicEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankMatchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInventoryBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLastGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLiveOpsScrollPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateShopScrollPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBalanceRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveBpHomeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBattlePassInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TipsGuestBindFBPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCheckBindPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickRechargeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToOTO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShopTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSafeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFirstRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAccumulateRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSingleRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CdnItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRechargeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendOTORequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLimitOfferRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOInfoArrived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFeatureMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFeatureModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPillarEventClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGoodsImmediateUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRechargeLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRechargeLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRechageWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatAdapterWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowBRTutorialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowMPTutorialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}

	template <typename T = void> T T_GetPrize_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2308604))(this);
	}
	template <typename T = void> T T_BuyM4_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23087F0))(this);
	}
	template <typename T = void> T T_LoadoutAndWeapon_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2308A80))(this);
	}
	template <typename T = void> T T_MP1_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2308DEC))(this);
	}
	template <typename T = void> T T_LevelUnlock_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230905C))(this);
	}
	template <typename T = void> T T_GetExpCard_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2309324))(this);
	}
	template <typename T = void> T T_Lathel_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23095B4))(this);
	}
	template <typename T = void> T T_Sign_0_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2309844))(this);
	}
	template <typename T = void> T T_RequestPrize() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2309A30))(this);
	}
	template <typename T = void> T T_HomeMainController_Go() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2309DE0))(this);
	}
	template <typename T = bool> T T_HasExpCard() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230AA54))(this);
	}
	template <typename T = void> T T_ShowTutorialLevelEffect(uintptr_t Msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x230AC74))(this, Msg);
	}
	template <typename T = bool> T T_EnterBattlePassClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230B35C))(this);
	}
	template <typename T = bool> T T_OnMallBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230B940))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230BB34))(this);
	}
	template <typename T = uintptr_t> T get_SundryDS() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230BBE4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230BC94))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230BD38))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230C978))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230FFEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23111C4))(this);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2311120))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230D864))(this);
	}
	template <typename T = void> T AdapterChatBroadcastView() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230FE24))(this);
	}
	template <typename T = void> T CheckLuckyDrawInfos() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230F4AC))(this);
	}
	template <typename T = void> T CheckLuckyBoardInfos() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230F8D0))(this);
	}
	template <typename T = void> T SendClientMapids() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230FCF4))(this);
	}
	template <typename T = void> T SendExchangeShopReq() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230FEEC))(this);
	}
	template <typename T = void> T RefreshSpvpEntranceRedDot(uintptr_t message) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2312458))(this, message);
	}
	template <typename T = void> T RefreshBrEntranceRedDot(uintptr_t message) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x23129E8))(this, message);
	}
	template <typename T = void> T RefreshBREntranceView() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230D9C8))(this);
	}
	template <typename T = void> T SendZMOpenTimeRequest() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230E080))(this);
	}
	template <typename T = void> T RefreshZombieEntrance(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2313120))(this, msg);
	}
	template <typename T = void> T RefreshRankMatchEntranceView() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230E180))(this);
	}
	template <typename T = bool> T CheckBRModeOpenOnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2313CB8))(this);
	}
	template <typename T = void> T OnShopBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2313EA8))(this);
	}
	template <typename T = void> T CheckShopEntrance() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230EC18))(this);
	}
	template <typename T = void> T CheckRechargeEntrance(bool enableLobbyDrawSort) {
		return ((T (*)(HomeMainController33*, bool))(Il2CppBase() + 0x230ED60))(this, enableLobbyDrawSort);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t NotificationIndex) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2314808))(this, SourceDataStore, PropertyTag, NotificationIndex);
	}
	template <typename T = void> T ShowGuildNewMessage() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2314C78))(this);
	}
	template <typename T = void> T UpdateCodLiveOpsActivityRedBadget(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2314B48))(this, msg);
	}
	template <typename T = void> T OnTimeToSendTlog() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2314EF0))(this);
	}
	template <typename T = void> T OnMultiplayClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2314FFC))(this);
	}
	template <typename T = void> T OnMultiplayAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController33*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x23153C8))(this, id, obj);
	}
	template <typename T = void> T OnZombieClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2315748))(this);
	}
	template <typename T = void> T OnZombieAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController33*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2315D34))(this, id, obj);
	}
	template <typename T = void> T OnBRClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2315FF4))(this);
	}
	template <typename T = void> T OnBRAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController33*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x23163C0))(this, id, obj);
	}
	template <typename T = void> T OnBattlePassAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController33*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2316740))(this, id, obj);
	}
	template <typename T = void> T OnBtnBattlePassClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2316DDC))(this);
	}
	template <typename T = Il2CppString*> T ShowSeasonCurDownInfo() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2316BB4))(this);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t eMsg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231713C))(this, eMsg);
	}
	template <typename T = void> T OnNotifyUpdateReddotData(uintptr_t message) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231733C))(this, message);
	}
	template <typename T = void> T OnNotifyUpdatePandoraRoot(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x23174D0))(this, msg);
	}
	template <typename T = void> T OnBtnPandoraClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2317664))(this);
	}
	template <typename T = void> T OnBtnLobbyDrawClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23176FC))(this);
	}
	template <typename T = void> T PlayDrawOpenAniTimer() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23179C0))(this);
	}
	template <typename T = void> T PlayDrawCloseAniTimer() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2317BE0))(this);
	}
	template <typename T = void> T OnBtnAmassClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2317E74))(this);
	}
	template <typename T = void> T OnBtnFirstRechargeClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2317F84))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2318098))(this);
	}
	template <typename T = void> T ShowModel() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231828C))(this);
	}
	template <typename T = void> T CheckShowGameCenter() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230CBC0))(this);
	}
	template <typename T = void> T CheckToRefreshPandora() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230CDB0))(this);
	}
	template <typename T = void> T CheckShowFace(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2319854))(this, msg);
	}
	template <typename T = void> T ShowNextFace(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2319BB4))(this, msg);
	}
	template <typename T = void> T ShowFace(bool next) {
		return ((T (*)(HomeMainController33*, bool))(Il2CppBase() + 0x2319904))(this, next);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2319D98))(this);
	}
	template <typename T = void> T OnPlatformBasicClose(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2319EF4))(this, msg);
	}
	template <typename T = void> T CheckShowPlatformBasicEntrance() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230CC9C))(this);
	}
	template <typename T = void> T OnLoadoutBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231A024))(this);
	}
	template <typename T = void> T OnGuildBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231A4B4))(this);
	}
	template <typename T = void> T OnRankBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231A974))(this);
	}
	template <typename T = void> T OnRankMatchBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231ABF4))(this);
	}
	template <typename T = void> T OnPaySuccess(uintptr_t obj) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231B588))(this, obj);
	}
	template <typename T = void> T OnMallBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231B644))(this);
	}
	template <typename T = void> T OnPlayBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231B8AC))(this);
	}
	template <typename T = void> T OnInventoryBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231BCF0))(this);
	}
	template <typename T = void> T ShowLastGameMode() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230CE48))(this);
	}
	template <typename T = void> T UpdateGuildInfo() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230D244))(this);
	}
	template <typename T = void> T CreateLiveOpsScrollPlay(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231C024))(this, msg);
	}
	template <typename T = void> T CreateShopScrollPlay(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2318DF4))(this, msg);
	}
	template <typename T = void> T OnNotifyBalanceRes(uintptr_t obj) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231C64C))(this, obj);
	}
	template <typename T = void> T SetActiveBpHomeUI() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230D3FC))(this);
	}
	template <typename T = void> T ShowBattlePassInfo(uintptr_t bpDS, uintptr_t mBattlePassConfDs) {
		return ((T (*)(HomeMainController33*, uintptr_t, uintptr_t))(Il2CppBase() + 0x231C6FC))(this, bpDS, mBattlePassConfDs);
	}
	template <typename T = void> T TipsGuestBindFBPopup() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2319C64))(this);
	}
	template <typename T = void> T OnGuestBindPop(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231D1FC))(this, msg);
	}
	template <typename T = void> T IsCheckBindPopup() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231CD64))(this);
	}
	template <typename T = void> T OnClickRechargeItem(int32_t idx) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231D2B4))(this, idx);
	}
	template <typename T = void> T SwitchInviteNewbie() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231E5A4))(this);
	}
	template <typename T = void> T SwitchOpenURL(Il2CppString* openURL) {
		return ((T (*)(HomeMainController33*, Il2CppString*))(Il2CppBase() + 0x231E420))(this, openURL);
	}
	template <typename T = void> T SwitchToOTO(int32_t skipParam) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231D940))(this, skipParam);
	}
	template <typename T = void> T SwitchToShopTab(int32_t skipParam) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231DFBC))(this, skipParam);
	}
	template <typename T = void> T SwitchToSafeBox(int32_t skipParam) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231E318))(this, skipParam);
	}
	template <typename T = void> T SwitchToLuckDraw(int32_t shopId) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231DEA4))(this, shopId);
	}
	template <typename T = void> T SwitchToLuckBoard(int32_t shopId) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231E70C))(this, shopId);
	}
	template <typename T = void> T SwitchToFirstRecharge() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231DA5C))(this);
	}
	template <typename T = void> T SwitchToAccumulateRecharge(int32_t id) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231DB68))(this, id);
	}
	template <typename T = void> T SwitchToSingleRecharge(int32_t id) {
		return ((T (*)(HomeMainController33*, int32_t))(Il2CppBase() + 0x231DD8C))(this, id);
	}
	template <typename T = void> T SwitchToBP() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231DC80))(this);
	}
	template <typename T = void> T SwitchToShop(uintptr_t data) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231D820))(this, data);
	}
	template <typename T = void> T CdnItem(uintptr_t itemView, uintptr_t item) {
		return ((T (*)(HomeMainController33*, uintptr_t, uintptr_t))(Il2CppBase() + 0x231E824))(this, itemView, item);
	}
	template <typename T = void> T RefreshRechargeItem(uintptr_t item, int32_t idx) {
		return ((T (*)(HomeMainController33*, uintptr_t, int32_t))(Il2CppBase() + 0x231E984))(this, item, idx);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231EBC8))(this, message);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231F054))(this, message);
	}
	template <typename T = void> T SendOTORequest() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2318CC4))(this);
	}
	template <typename T = void> T SendLimitOfferRequest() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2318B94))(this);
	}
	template <typename T = void> T OnOTOInfoArrived(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x231F5F4))(this, msg);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23191F8))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231F6A4))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x231FC2C))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2319310))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2320158))(this);
	}
	template <typename T = void> T RefreshFeatureMode() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2311D5C))(this);
	}
	template <typename T = void> T OnBtnFeatureModeClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23203A4))(this);
	}
	template <typename T = void> T OnBtnPillarEventClick() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2320A28))(this);
	}
	template <typename T = void> T CheckGoodsImmediateUse(uintptr_t msg) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2319438))(this, msg);
	}
	template <typename T = void> T SetLadderIcon(int32_t ladder, uintptr_t icon, bool isBR) {
		return ((T (*)(HomeMainController33*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2313898))(this, ladder, icon, isBR);
	}
	template <typename T = void> T ResetRechargeLayout(bool isExpand) {
		return ((T (*)(HomeMainController33*, bool))(Il2CppBase() + 0x2314154))(this, isExpand);
	}
	template <typename T = void> T OnRechargeLayoutChanged() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2320BC4))(this);
	}
	template <typename T = void> T GetRechageWidth(uintptr_t minWidth, uintptr_t maxWidth, uintptr_t showBtnLobbyDraw) {
		return ((T (*)(HomeMainController33*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2320CBC))(this, minWidth, maxWidth, showBtnLobbyDraw);
	}
	template <typename T = int32_t> T GetChatAdapterWidth(uintptr_t widgetOffset) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2320F2C))(this, widgetOffset);
	}
	template <typename T = bool> T ShouldShowBRTutorialEffect() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2312F2C))(this);
	}
	template <typename T = bool> T ShouldShowMPTutorialEffect() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x230B1A4))(this);
	}
	template <typename T = void> static T T_GetPrize_0_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321250))(0, tutorialType, info);
	}
	template <typename T = void> static T T_BuyM4_0_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321420))(0, tutorialType, info);
	}
	template <typename T = void> T T_BuyM4_0_Initm__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23215E0))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321730))(0, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23218F0))(0, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_0_Initm__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321AB0))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321C00))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__7(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321DF8))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__8(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2321FF4))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__9(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x232214C))(0, tutorialType, info);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__A(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x232230C))(0, tutorialType, info);
	}
	template <typename T = void> static T T_GetExpCard_0_Initm__B(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23224B8))(0, tutorialType, info);
	}
	template <typename T = void> T T_GetExpCard_0_Initm__C(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2322678))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Lathel_0_Initm__D(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23227C8))(0, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_0_Initm__E(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController33*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2322988))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Sign_0_Initm__F(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2322AD8))(0, tutorialType, info);
	}
	template <typename T = void> static T OnOpenm__10() {
		return ((T (*)(void *))(Il2CppBase() + 0x2322C98))(0);
	}
	template <typename T = bool> T CheckRechargeEntrancem__11(uintptr_t x) {
		return ((T (*)(HomeMainController33*, uintptr_t))(Il2CppBase() + 0x2322D64))(this, x);
	}
	template <typename T = bool> static T OnNotifyLuckyBoardInfom__12(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2322D98))(0, x);
	}
	template <typename T = bool> static T OnNotifyLuckyDrawInfom__13(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2322E90))(0, x);
	}
	template <typename T = void> static T T_BuyM4_0_Initm__14() {
		return ((T (*)(void *))(Il2CppBase() + 0x2322F88))(0);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__15() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323084))(0);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__16() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323180))(0);
	}
	template <typename T = void> static T T_MP1_0_Initm__17() {
		return ((T (*)(void *))(Il2CppBase() + 0x232327C))(0);
	}
	template <typename T = void> static T T_MP1_0_Initm__18() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323378))(0);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__19() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323474))(0);
	}
	template <typename T = void> static T T_GetExpCard_0_Initm__1A() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323570))(0);
	}
	template <typename T = void> static T T_Lathel_0_Initm__1B() {
		return ((T (*)(void *))(Il2CppBase() + 0x232366C))(0);
	}
	template <typename T = void> static T T_Sign_0_Initm__1C() {
		return ((T (*)(void *))(Il2CppBase() + 0x2323768))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2323990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x2323998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x232399C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23239A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23239A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23239A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(HomeMainController33*))(Il2CppBase() + 0x23239B0))(this);
	}

};

}
