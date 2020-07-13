#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeMainController"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& lastShopScrollDatas() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& showDrawBtnRedPoint() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_WorkShopRefreshTimer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_FeatureModeClient() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_GuildApplyMsgDataStore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GuildMissionDataStore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_InviteNewbieDataStore() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_GuildWelfareDataStore() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_LobbyRankBuffDataStore() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsData() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_SundryDS() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_WorkShopDS() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsDS() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> static T& SEND_TO_SERVER_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& MAX_RECHARGEITEM_COUNT() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& drawAniTimer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& drawAniTimerTick() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& DRAW_ANI_MAX_TIMER() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& DRAW_ALPHA_MAX_TIMER() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& minRechargeWidth() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& maxRechargeWidth() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rechargeItemData() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isFromQuickPlay() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& RankMatchIsLock() {
		return *(T*)((uintptr_t)this + 0xCD);
	}
	template <typename T = int32_t> T& lobbyDrawShowLimitId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& MAX_LOBBYDRAW_ONE_SCREEN() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_IsPopUpIng() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_FacePopupCtr() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bFromPlayBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PlayBtnClickReport() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& GUEST_BINDPB_ISPOPPEDUP() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsPop() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0xF4);
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
	template <typename T = void*> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__am$cacheB() {
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
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetPrize_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BuyM4_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutAndWeapon_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LevelUnlock_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetExpCard_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Sign_0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RequestPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HomeMainController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HasExpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShowTutorialLevelEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_EnterBattlePassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnMallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToShowVideo() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_WorkShopRefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdapterChatBroadcastView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLuckyDrawInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLuckyBoardInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendClientMapids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToSendLuckyBoxInfoToStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendNameCardRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendExchangeShopReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpvpEntranceRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrEntranceRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBREntranceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendZMOpenTimeRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEquipDefaultCallingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMergeCodLiveOpsActivityDescFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshZombieEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankMatchEntranceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBRModeOpenOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShopEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRechargeEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLimitOfferEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGuildNewMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCodLiveOpsActivityRedBadget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimeToSendTlog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBattlePassAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBattlePassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSeasonCurDownInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdatePandoraRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPandoraClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLobbyDrawClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDrawOpenAniTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDrawCloseAniTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAmassClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFirstRechargeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowGameCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToRefreshPandora() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlatformBasicClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlatformBasicEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankMatchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInventoryBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLastGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLiveOpsScrollPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateShopScrollPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBalanceRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveBpHomeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBattlePassInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TipsGuestBindFBPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCheckBindPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickRechargeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLimitofferClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSoldierReturnBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToOTO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShopTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSafeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFirstRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAccumulateRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSingleRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CdnItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRechargeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReqToStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendOTORequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLimitOfferRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOInfoArrived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFeatureMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFeatureModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnWorkShopClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPillarEventClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGoodsImmediateUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRechargeLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRechargeLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRechageWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatAdapterWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowBRTutorialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowMPTutorialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankActvUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankActvAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassComicRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MailWillFullTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FriendMailFullTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSoldierReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionMapDownloadAndSoldierReturnTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankMatchTopRight_Logo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowRankMatchRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}

	template <typename T = void> T T_GetPrize_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22E9A08))(this);
	}
	template <typename T = void> T T_BuyM4_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22E9BF4))(this);
	}
	template <typename T = void> T T_LoadoutAndWeapon_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22E9E84))(this);
	}
	template <typename T = void> T T_MP1_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EA1F0))(this);
	}
	template <typename T = void> T T_LevelUnlock_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EA460))(this);
	}
	template <typename T = void> T T_GetExpCard_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EA728))(this);
	}
	template <typename T = void> T T_Lathel_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EA9B8))(this);
	}
	template <typename T = void> T T_Sign_0_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EAC48))(this);
	}
	template <typename T = void> T T_RequestPrize() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EAE34))(this);
	}
	template <typename T = void> T T_HomeMainController_Go() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EB1E4))(this);
	}
	template <typename T = bool> T T_HasExpCard() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EBE58))(this);
	}
	template <typename T = void> T T_ShowTutorialLevelEffect(uintptr_t Msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22EC078))(this, Msg);
	}
	template <typename T = bool> T T_EnterBattlePassClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EC760))(this);
	}
	template <typename T = bool> T T_OnMallBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EC90C))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECB00))(this);
	}
	template <typename T = uintptr_t> T get_SundryDS() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECBB0))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECC60))(this);
	}
	template <typename T = uintptr_t> T get_WorkShopDS() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECD10))(this);
	}
	template <typename T = uintptr_t> T get_ElectronicSportsDS() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECDC0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECE70))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22ECF14))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EDBC4))(this);
	}
	template <typename T = void> T TryToShowVideo() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EDF20))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F13F0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F29BC))(this);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F36B4))(this);
	}
	template <typename T = void> T WorkShopRefreshTimer() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F270C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE988))(this);
	}
	template <typename T = void> T AdapterChatBroadcastView() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F0E58))(this);
	}
	template <typename T = void> T CheckLuckyDrawInfos() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F04E0))(this);
	}
	template <typename T = void> T CheckLuckyBoardInfos() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F0904))(this);
	}
	template <typename T = void> T SendClientMapids() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F0D28))(this);
	}
	template <typename T = void> T DelayToSendLuckyBoxInfoToStore() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F3E4C))(this);
	}
	template <typename T = void> T SendNameCardRequest() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F4120))(this);
	}
	template <typename T = void> T SendExchangeShopReq() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F0F20))(this);
	}
	template <typename T = void> T RefreshSpvpEntranceRedDot(uintptr_t message) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F4328))(this, message);
	}
	template <typename T = void> T RefreshBrEntranceRedDot(uintptr_t message) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F48B8))(this, message);
	}
	template <typename T = void> T RefreshBREntranceView() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EEAEC))(this);
	}
	template <typename T = void> T SendZMOpenTimeRequest() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EF1A4))(this);
	}
	template <typename T = void> T OnNotifyEquipDefaultCallingCard(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F4FF0))(this, msg);
	}
	template <typename T = void> T OnMergeCodLiveOpsActivityDescFinish(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F5128))(this, msg);
	}
	template <typename T = void> T RefreshZombieEntrance(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F51D4))(this, msg);
	}
	template <typename T = void> T RefreshRankMatchEntranceView() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EF2A4))(this);
	}
	template <typename T = bool> T CheckBRModeOpenOnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F5F6C))(this);
	}
	template <typename T = void> T OnShopBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F615C))(this);
	}
	template <typename T = void> T CheckShopEntrance() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EFD38))(this);
	}
	template <typename T = void> T CheckRechargeEntrance(bool enableLobbyDrawSort) {
		return ((T (*)(HomeMainController*, bool))(Il2CppBase() + 0x22F6408))(this, enableLobbyDrawSort);
	}
	template <typename T = void> T CheckLimitOfferEntrance() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EFE80))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t NotificationIndex) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x22F6AD8))(this, SourceDataStore, PropertyTag, NotificationIndex);
	}
	template <typename T = void> T ShowGuildNewMessage() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F6FD0))(this);
	}
	template <typename T = void> T UpdateCodLiveOpsActivityRedBadget(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F6EA0))(this, msg);
	}
	template <typename T = void> T OnTimeToSendTlog() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F7248))(this);
	}
	template <typename T = void> T OnMultiplayClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F7354))(this);
	}
	template <typename T = void> T OnMultiplayAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x22F77C8))(this, id, obj);
	}
	template <typename T = void> T OnZombieClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F7B60))(this);
	}
	template <typename T = void> T OnZombieAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x22F814C))(this, id, obj);
	}
	template <typename T = void> T OnBRClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F840C))(this);
	}
	template <typename T = void> T OnBRAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x22F8880))(this, id, obj);
	}
	template <typename T = void> T OnBattlePassAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(HomeMainController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x22F8C18))(this, id, obj);
	}
	template <typename T = void> T OnBtnBattlePassClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F92B4))(this);
	}
	template <typename T = Il2CppString*> T ShowSeasonCurDownInfo() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F908C))(this);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t eMsg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F9614))(this, eMsg);
	}
	template <typename T = void> T OnNotifyUpdateReddotData(uintptr_t message) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F9ABC))(this, message);
	}
	template <typename T = void> T OnNotifyUpdatePandoraRoot(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22F9C50))(this, msg);
	}
	template <typename T = void> T OnBtnPandoraClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F9DF0))(this);
	}
	template <typename T = void> T OnBtnLobbyDrawClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F9E88))(this);
	}
	template <typename T = void> T PlayDrawOpenAniTimer() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FA14C))(this);
	}
	template <typename T = void> T PlayDrawCloseAniTimer() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FA36C))(this);
	}
	template <typename T = void> T OnBtnAmassClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FA600))(this);
	}
	template <typename T = void> T OnBtnFirstRechargeClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FA710))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FA824))(this);
	}
	template <typename T = void> T ShowModel() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FAAD4))(this);
	}
	template <typename T = void> T CheckShowGameCenter() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE0E0))(this);
	}
	template <typename T = void> T CheckToRefreshPandora() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE2D0))(this);
	}
	template <typename T = void> T CheckShowFace(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FC2C8))(this, msg);
	}
	template <typename T = void> T ShowNextFace(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FC63C))(this, msg);
	}
	template <typename T = void> T ShowFace(bool next) {
		return ((T (*)(HomeMainController*, bool))(Il2CppBase() + 0x22FC378))(this, next);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FC820))(this);
	}
	template <typename T = void> T OnPlatformBasicClose(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FC97C))(this, msg);
	}
	template <typename T = void> T CheckShowPlatformBasicEntrance() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE1BC))(this);
	}
	template <typename T = void> T OnLoadoutBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FCAAC))(this);
	}
	template <typename T = void> T OnGuildBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FCF3C))(this);
	}
	template <typename T = void> T OnRankBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FD3FC))(this);
	}
	template <typename T = void> T OnRankMatchBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FD67C))(this);
	}
	template <typename T = void> T OnPaySuccess(uintptr_t obj) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FE080))(this, obj);
	}
	template <typename T = void> T OnMallBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FE13C))(this);
	}
	template <typename T = void> T OnPlayBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FE3A4))(this);
	}
	template <typename T = void> T OnInventoryBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FE7E4))(this);
	}
	template <typename T = void> T ShowLastGameMode() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FE9C4))(this);
	}
	template <typename T = void> T UpdateGuildInfo() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE368))(this);
	}
	template <typename T = void> T CreateLiveOpsScrollPlay(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FEF14))(this, msg);
	}
	template <typename T = void> T CreateShopScrollPlay(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FB63C))(this, msg);
	}
	template <typename T = void> T OnNotifyBalanceRes(uintptr_t obj) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FF53C))(this, obj);
	}
	template <typename T = void> T SetActiveBpHomeUI() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EE520))(this);
	}
	template <typename T = void> T ShowBattlePassInfo(uintptr_t bpDS, uintptr_t mBattlePassConfDs) {
		return ((T (*)(HomeMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22FF5E8))(this, bpDS, mBattlePassConfDs);
	}
	template <typename T = void> T TipsGuestBindFBPopup() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FC6EC))(this);
	}
	template <typename T = void> T OnGuestBindPop(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x23000E8))(this, msg);
	}
	template <typename T = void> T IsCheckBindPopup() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FFC50))(this);
	}
	template <typename T = void> T OnClickRechargeItem(int32_t idx) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x23001A0))(this, idx);
	}
	template <typename T = void> T OnBtnLimitofferClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x230170C))(this);
	}
	template <typename T = void> T OnSoldierReturnBtnClicked() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2301BA0))(this);
	}
	template <typename T = void> T SwitchInviteNewbie() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x230148C))(this);
	}
	template <typename T = void> T SwitchOpenURL(Il2CppString* openURL) {
		return ((T (*)(HomeMainController*, Il2CppString*))(Il2CppBase() + 0x2301308))(this, openURL);
	}
	template <typename T = void> T SwitchToOTO(int32_t skipParam) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2300828))(this, skipParam);
	}
	template <typename T = void> T SwitchToShopTab(int32_t skipParam) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2300EA4))(this, skipParam);
	}
	template <typename T = void> T SwitchToSafeBox(int32_t skipParam) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2301200))(this, skipParam);
	}
	template <typename T = void> T SwitchToLuckDraw(int32_t shopId) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2300D8C))(this, shopId);
	}
	template <typename T = void> T SwitchToLuckBoard(int32_t shopId) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x23015F4))(this, shopId);
	}
	template <typename T = void> T SwitchToFirstRecharge() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2300944))(this);
	}
	template <typename T = void> T SwitchToAccumulateRecharge(int32_t id) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2300A50))(this, id);
	}
	template <typename T = void> T SwitchToSingleRecharge(int32_t id) {
		return ((T (*)(HomeMainController*, int32_t))(Il2CppBase() + 0x2300C74))(this, id);
	}
	template <typename T = void> T SwitchToBP() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2300B68))(this);
	}
	template <typename T = void> T SwitchToShop(uintptr_t data) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x2300708))(this, data);
	}
	template <typename T = void> T CdnItem(uintptr_t itemView, uintptr_t item) {
		return ((T (*)(HomeMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2301CD8))(this, itemView, item);
	}
	template <typename T = void> T RefreshRechargeItem(uintptr_t item, int32_t idx) {
		return ((T (*)(HomeMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x2301E38))(this, item, idx);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReqToStore(uint32_t boxId, uintptr_t source) {
		return ((T (*)(HomeMainController*, uint32_t, uintptr_t))(Il2CppBase() + 0x22F3FCC))(this, boxId, source);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x230207C))(this, message);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x2302508))(this, message);
	}
	template <typename T = void> T SendOTORequest() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FB50C))(this);
	}
	template <typename T = void> T SendLimitOfferRequest() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FB3DC))(this);
	}
	template <typename T = void> T OnOTOInfoArrived(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x2302AA8))(this, msg);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FB9B4))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2302B54))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23033A8))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22FBACC))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2303CD0))(this);
	}
	template <typename T = void> T RefreshFeatureMode() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F3758))(this);
	}
	template <typename T = void> T OnBtnFeatureModeClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2303F1C))(this);
	}
	template <typename T = void> T OnBtnWorkShopClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23045A0))(this);
	}
	template <typename T = void> T OnBtnPillarEventClick() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23047F4))(this);
	}
	template <typename T = void> T CheckGoodsImmediateUse(uintptr_t msg) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x22FBBF4))(this, msg);
	}
	template <typename T = void> T SetLadderIcon(int32_t ladder, uintptr_t icon, bool isBR) {
		return ((T (*)(HomeMainController*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x22F59FC))(this, ladder, icon, isBR);
	}
	template <typename T = void> T ResetRechargeLayout(bool isExpand) {
		return ((T (*)(HomeMainController*, bool))(Il2CppBase() + 0x22F01A4))(this, isExpand);
	}
	template <typename T = void> T OnRechargeLayoutChanged() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2304A48))(this);
	}
	template <typename T = void> T GetRechageWidth(uintptr_t minWidth, uintptr_t maxWidth, uintptr_t showBtnLobbyDraw) {
		return ((T (*)(HomeMainController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2304E64))(this, minWidth, maxWidth, showBtnLobbyDraw);
	}
	template <typename T = int32_t> T GetChatAdapterWidth(uintptr_t widgetOffset) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x2304B40))(this, widgetOffset);
	}
	template <typename T = bool> T ShouldShowBRTutorialEffect() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F4DFC))(this);
	}
	template <typename T = bool> T ShouldShowMPTutorialEffect() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22EC5A8))(this);
	}
	template <typename T = void> T RefreshRankActvUIActive() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23050D4))(this);
	}
	template <typename T = void> T RefreshRankActvAdd() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2305298))(this);
	}
	template <typename T = bool> T CheckBattlePassComicRedPoint() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F9880))(this);
	}
	template <typename T = void> T MailWillFullTips() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23053F8))(this);
	}
	template <typename T = void> T FriendMailFullTips() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2305780))(this);
	}
	template <typename T = void> T ResetSoldierReturn() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x22F120C))(this);
	}
	template <typename T = void> T RepositionMapDownloadAndSoldierReturnTable() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2303B4C))(this);
	}
	template <typename T = void> T RefreshRankMatchTopRight_Logo(bool isLock) {
		return ((T (*)(HomeMainController*, bool))(Il2CppBase() + 0x22F5E1C))(this, isLock);
	}
	template <typename T = bool> T IsShowRankMatchRedDot() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x2305A88))(this);
	}
	template <typename T = void> static T T_GetPrize_0_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2305C58))(0, tutorialType, info);
	}
	template <typename T = void> static T T_BuyM4_0_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2305E28))(0, tutorialType, info);
	}
	template <typename T = void> T T_BuyM4_0_Initm__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2305FE8))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306138))(0, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23062F8))(0, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_0_Initm__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23064B8))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306608))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__7(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306800))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_0_Initm__8(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23069FC))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__9(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306B54))(0, tutorialType, info);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__A(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306D14))(0, tutorialType, info);
	}
	template <typename T = void> static T T_GetExpCard_0_Initm__B(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2306EC0))(0, tutorialType, info);
	}
	template <typename T = void> T T_GetExpCard_0_Initm__C(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2307080))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Lathel_0_Initm__D(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23071D0))(0, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_0_Initm__E(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(HomeMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2307390))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Sign_0_Initm__F(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23074E0))(0, tutorialType, info);
	}
	template <typename T = void> T OnOpenm__10() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23076A0))(this);
	}
	template <typename T = bool> T CheckRechargeEntrancem__11(uintptr_t x) {
		return ((T (*)(HomeMainController*, uintptr_t))(Il2CppBase() + 0x23076A4))(this, x);
	}
	template <typename T = bool> static T OnNotifyLuckyBoardInfom__12(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23076D8))(0, x);
	}
	template <typename T = bool> static T OnNotifyLuckyDrawInfom__13(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23077D0))(0, x);
	}
	template <typename T = void> T MailWillFullTipsm__14() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23078C8))(this);
	}
	template <typename T = void> static T T_BuyM4_0_Initm__15() {
		return ((T (*)(void *))(Il2CppBase() + 0x23078CC))(0);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__16() {
		return ((T (*)(void *))(Il2CppBase() + 0x23079C8))(0);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_0_Initm__17() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307AC4))(0);
	}
	template <typename T = void> static T T_MP1_0_Initm__18() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307BC0))(0);
	}
	template <typename T = void> static T T_MP1_0_Initm__19() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307CBC))(0);
	}
	template <typename T = void> static T T_LevelUnlock_0_Initm__1A() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307DB8))(0);
	}
	template <typename T = void> static T T_GetExpCard_0_Initm__1B() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307EB4))(0);
	}
	template <typename T = void> static T T_Lathel_0_Initm__1C() {
		return ((T (*)(void *))(Il2CppBase() + 0x2307FB0))(0);
	}
	template <typename T = void> static T T_Sign_0_Initm__1D() {
		return ((T (*)(void *))(Il2CppBase() + 0x23080AC))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(HomeMainController*))(Il2CppBase() + 0x23082F4))(this);
	}

};

}
