#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LocalPlayerDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LocalPlayerDataStore"));
	}

	template <typename T = int32_t> static T& RefreshPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_PlayerGold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_PlayerDiamond() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_PlayerGuildCoin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_PlayerPVPCoin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PlayerPVECoin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Powder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_PlayerTalentPoint() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CountryId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_WealthChangeClass() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_PlayerGamePoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_PlayerTodayGetGamePoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_PlayerTodayCanGetMaxGamePoint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_PlayerTeamPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_PlayerWeaponPoint() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_PlayerExpertPoint() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_PlayerNickName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_PlayerSocialName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TreasureRecord() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsBRCustomSettingSimpleModeOpenFirstTimeFlag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsBRCustomSettingAdvancedModeOpenFirstTimeFlag() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = Il2CppDictionary<uint64_t, int64_t>*> T& _dicCallingCardInfos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FirstRechargeInfo() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SingleRechargeInfo() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AccumateRechargeInfo() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_bShowPrivacy() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_RankUpEndTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& BRBeginTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& BREndTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& SPVP_LaddarBeginTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& SPVP_LaddarEndTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> T& registertime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint64_t> T& TotalOnlineTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_MMR() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& ELOBias() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_BRMMR() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& m_CurrentCompositeUniqueId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& m_CompositeFinishTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& m_CompositeNeedTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_QQVIP() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_SVIP() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = uint32_t> T& m_VIPFlag() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_ZoneId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_TimeZoneId() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& m_Idip_Zone_Id() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& m_VipLevel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& m_MonthCardLeftDays() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& m_MonthCardLevel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_BuyResourceTimes() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_BuyExpertPointTimes() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_BuyWeaponPointTimes() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& m_LastLevel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint64_t> T& m_ClanID() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_HistoryHighestLadderScore() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_HasEnteredMall() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsDiamondNumOK() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = int32_t> T& m_RedNameVipLevel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& m_LobbyBackgroundUrl() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ReturnLobbyBackgroundUrl() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& m_AbTestTag() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& m_RelativeName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_SendGoldFriendsID() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<bool>*> T& m_SubscribeInfo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_ParentProtect() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerPunishList() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& m_HasCompleteCompositeTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& m_DailyLadderScore() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& m_CdnUrlPre() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_IsRegistedAtZone() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& m_IsRecoverableAccount() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = int32_t> T& m_ExpireRemainTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_PictureInfo() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint64_t> T& m_PlayerGuid() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint64_t> T& CoreUserID() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& m_PlayerCountryId() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uint32_t> T& m_preLevel() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& m_LevelInfo() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& LevelType() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uint32_t> T& m_PveDailyMaxRound() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uint32_t> T& m_PveHistoryMaxRound() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& m_LoginSource() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& m_TotalRecharged() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = int32_t> T& m_RealTotalRecharged() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& m_LadderRank() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& m_LadderScore() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_Trophy() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& m_TrophyRank() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& m_BRLadderRank() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& m_BrLadderScore() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_HighestTrophyRank() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& m_TrophyChangedOffline() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uint32_t> T& m_beLikedCount() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uint32_t> T& m_addedLikedCount() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& m_HasTrophyLevelPrize() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& m_CurrentGetRewardSeason() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uint64_t> T& m_LastLogoutTime() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RechargeStat() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& CurrentLoginIsFirstLogin() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& ProcessingMissionID() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& m_IsGuertBindPop() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uint32_t> T& LogFileType() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uint32_t> T& LogFileBeginTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uint32_t> T& LogFileEndTime() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uint32_t> T& LogFileSize() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppString*> T& LogFileTargetUrl() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uint32_t> T& m_LogFileUploadFlag() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppString*> T& MidasShortOpenId() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& m_CreditScore() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppString*> T& m_GameOpenID() {
		return *(T*)((uintptr_t)this + 0x1DC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstRechargeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstRechargeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAccumulateRechargeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstAccumulateID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstSingleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSingleRechargeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSingleRechargeFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccunmulatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSendGoldFriendsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSubscribeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPunishInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBeingPunish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCurrentDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegisterTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLikedCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrencyNumByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourceNumByMallType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateQQVIPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPlayerLogoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerLogoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWelath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StoreProfileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSShopCoinNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZMModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLogFileUpload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLogUploaderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentLoginIsFirstLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = bool> T get_BRCustomSettingSimpleModeOpenFirstTimeFlag() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5944))(this);
	}
	template <typename T = void> T set_BRCustomSettingSimpleModeOpenFirstTimeFlag(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x199EEC0))(this, value);
	}
	template <typename T = bool> T get_BRCustomSettingAdvancedModeOpenFirstTimeFlag() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A594C))(this);
	}
	template <typename T = void> T set_BRCustomSettingAdvancedModeOpenFirstTimeFlag(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x199EEB8))(this, value);
	}
	template <typename T = int32_t> T get_PlayCountryId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5954))(this);
	}
	template <typename T = void> T SetCallingCardInfo(uint64_t setPlayerID, int64_t cardID) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t, int64_t))(Il2CppBase() + 0x1975E8C))(this, setPlayerID, cardID);
	}
	template <typename T = int64_t> T GetCallingCardInfo(uint64_t playerID) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A595C))(this, playerID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FirstRechargeInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5A7C))(this);
	}
	template <typename T = void> T set_FirstRechargeInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1970AAC))(this, value);
	}
	template <typename T = bool> T IsFirstRechargeOpen() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5A84))(this);
	}
	template <typename T = int32_t> T GetFirstRechargeID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5BB0))(this);
	}
	template <typename T = bool> T IsAccumulateRechargeOpen(int32_t id) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A5CD4))(this, id);
	}
	template <typename T = int32_t> T GetFirstAccumulateID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5E98))(this);
	}
	template <typename T = int32_t> T GetFirstSingleID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A5FBC))(this);
	}
	template <typename T = bool> T IsSingleRechargeOpen(int32_t id) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A60E0))(this, id);
	}
	template <typename T = bool> T IsSingleRechargeFinished(int32_t id) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A62A4))(this, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SingleRechargeInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A646C))(this);
	}
	template <typename T = void> T set_SingleRechargeInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1970AB4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AccumateRechargeInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6474))(this);
	}
	template <typename T = void> T set_AccumateRechargeInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1970ABC))(this, value);
	}
	template <typename T = uintptr_t> T GetAccunmulatInfo(int32_t id) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A647C))(this, id);
	}
	template <typename T = bool> T get_bShowPrivacy() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6634))(this);
	}
	template <typename T = void> T set_bShowPrivacy(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x1978ED4))(this, value);
	}
	template <typename T = int32_t> T get_RankUpEndTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A663C))(this);
	}
	template <typename T = void> T set_RankUpEndTime(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A6644))(this, value);
	}
	template <typename T = uint32_t> T get_BRBeginTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A664C))(this);
	}
	template <typename T = void> T set_BRBeginTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A6654))(this, value);
	}
	template <typename T = uint32_t> T get_BREndTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A665C))(this);
	}
	template <typename T = void> T set_BREndTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A6664))(this, value);
	}
	template <typename T = uint32_t> T get_SPVP_LaddarBeginTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A666C))(this);
	}
	template <typename T = void> T set_SPVP_LaddarBeginTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A6674))(this, value);
	}
	template <typename T = uint32_t> T get_SPVP_LaddarEndTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A667C))(this);
	}
	template <typename T = void> T set_SPVP_LaddarEndTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A6684))(this, value);
	}
	template <typename T = uint64_t> T get_registertime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A668C))(this);
	}
	template <typename T = void> T set_registertime(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A6694))(this, value);
	}
	template <typename T = uint64_t> T get_TotalOnlineTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66A4))(this);
	}
	template <typename T = void> T set_TotalOnlineTime(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A66AC))(this, value);
	}
	template <typename T = int32_t> T get_MMR() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66BC))(this);
	}
	template <typename T = void> T set_MMR(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A66C4))(this, value);
	}
	template <typename T = int32_t> T get_BRMMR() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66CC))(this);
	}
	template <typename T = void> T set_BRMMR(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A66D4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentCompositeUniqueId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66DC))(this);
	}
	template <typename T = void> T set_CurrentCompositeUniqueId(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A66E4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentCompositeFinsihTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66EC))(this);
	}
	template <typename T = void> T set_CurrentCompositeFinsihTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A66F4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentCompositeNeedTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A66FC))(this);
	}
	template <typename T = void> T set_CurrentCompositeNeedTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A6704))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A670C))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1978FEC))(this, value);
	}
	template <typename T = int32_t> T get_TimeZone() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6714))(this);
	}
	template <typename T = void> T set_TimeZone(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1978FF4))(this, value);
	}
	template <typename T = uint32_t> T get_Idip_Zone_Id() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A671C))(this);
	}
	template <typename T = void> T set_Idip_Zone_Id(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x1978FFC))(this, value);
	}
	template <typename T = bool> T get_QQVIP() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6724))(this);
	}
	template <typename T = void> T set_QQVIP(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A672C))(this, value);
	}
	template <typename T = bool> T get_SQQVIP() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6734))(this);
	}
	template <typename T = void> T set_SQQVIP(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A673C))(this, value);
	}
	template <typename T = uint32_t> T get_VIPFlag() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6744))(this);
	}
	template <typename T = void> T set_VIPFlag(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A674C))(this, value);
	}
	template <typename T = int32_t> T get_VipLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6754))(this);
	}
	template <typename T = void> T set_VipLevel(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1970AA4))(this, value);
	}
	template <typename T = int32_t> T get_MonthCardLeftDays() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x1970A94))(this);
	}
	template <typename T = void> T set_MonthCardLeftDays(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A675C))(this, value);
	}
	template <typename T = int32_t> T get_MonthCardLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6764))(this);
	}
	template <typename T = void> T set_MonthCardLevel(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1970A9C))(this, value);
	}
	template <typename T = int32_t> T get_BuyGoldTimes() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A676C))(this);
	}
	template <typename T = void> T set_BuyGoldTimes(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A6774))(this, value);
	}
	template <typename T = int32_t> T get_BuyExpertPointTimes() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A677C))(this);
	}
	template <typename T = void> T set_BuyExpertPointTimes(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A6784))(this, value);
	}
	template <typename T = int32_t> T get_BuyWeaponPointTimes() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A678C))(this);
	}
	template <typename T = void> T set_BuyWeaponPointTimes(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A6794))(this, value);
	}
	template <typename T = int32_t> T get_LastLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A679C))(this);
	}
	template <typename T = uint64_t> T get_ClanID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A67A4))(this);
	}
	template <typename T = void> T set_ClanID(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A67AC))(this, value);
	}
	template <typename T = int32_t> T get_HistoryHighestLadderScore() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A67BC))(this);
	}
	template <typename T = void> T set_HistoryHighestLadderScore(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A67C4))(this, value);
	}
	template <typename T = bool> T get_HasEnteredMall() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A67CC))(this);
	}
	template <typename T = void> T set_HasEnteredMall(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A67D4))(this, value);
	}
	template <typename T = bool> T get_IsDiamondNumAvailable() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A67DC))(this);
	}
	template <typename T = void> T set_IsDiamondNumAvailable(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A67E4))(this, value);
	}
	template <typename T = int32_t> T get_RedNameVipLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6AE4))(this);
	}
	template <typename T = void> T set_RedNameVipLevel(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A6AEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LobbyBackgroundUrl() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6AF4))(this);
	}
	template <typename T = void> T set_LobbyBackgroundUrl(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x197900C))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_ReturnLobbyBackgroundUrl() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6AFC))(this);
	}
	template <typename T = Il2CppString*> T get_AbTestTag() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6B04))(this);
	}
	template <typename T = void> T set_AbTestTag(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x1979014))(this, value);
	}
	template <typename T = Il2CppString*> T get_RelativeName() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6B0C))(this);
	}
	template <typename T = void> T set_RelativeName(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x1978BB0))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_SendGoldFriendsID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6B14))(this);
	}
	template <typename T = Il2CppList<bool>*> T get_SubscribeInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6B1C))(this);
	}
	template <typename T = void> T SaveSendGoldFriendsData(Il2CppList<uint64_t>* friendsList) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x1999FE8))(this, friendsList);
	}
	template <typename T = void> T SaveSubscribeInfo(Il2CppList<uintptr_t>* contents) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x199B02C))(this, contents);
	}
	template <typename T = void> T SetPunishInfo(uintptr_t info) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x1978BB8))(this, info);
	}
	template <typename T = bool> T IsBeingPunish(uintptr_t type, uintptr_t* time) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19A6C00))(this, type, time);
	}
	template <typename T = int32_t> T get_PlayerCurrentLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6F6C))(this);
	}
	template <typename T = void> T set_PlayerCurrentLevel(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7038))(this, value);
	}
	template <typename T = void> T SetCurrentLevel(int32_t level) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A70BC))(this, level);
	}
	template <typename T = int32_t> T get_PlayerCurrentGold() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A716C))(this);
	}
	template <typename T = Il2CppString*> T get_GoldNumFormat() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7174))(this);
	}
	template <typename T = Il2CppString*> T get_DiamondNumFormat() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7334))(this);
	}
	template <typename T = int32_t> T get_PlayerCurrentDiamond() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x1970A6C))(this);
	}
	template <typename T = Il2CppString*> T get_PlayerCurrentDiamondFormated() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A74F4))(this);
	}
	template <typename T = int32_t> T get_PlayerGuildGold() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7594))(this);
	}
	template <typename T = void> T set_PlayerGuildGold(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A759C))(this, value);
	}
	template <typename T = int32_t> T get_PlayerPVPCoin() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75A4))(this);
	}
	template <typename T = void> T set_PlayerPVPCoin(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A75AC))(this, value);
	}
	template <typename T = int32_t> T get_PlayerPVECoin() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75B4))(this);
	}
	template <typename T = void> T set_PlayerPVECoin(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A75BC))(this, value);
	}
	template <typename T = int32_t> T get_PlayerTalentPoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75C4))(this);
	}
	template <typename T = void> T set_PlayerTalentPoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A75CC))(this, value);
	}
	template <typename T = int32_t> T get_PlayerPowderCount() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75D4))(this);
	}
	template <typename T = void> T set_PlayerPowderCount(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A75DC))(this, value);
	}
	template <typename T = int32_t> T get_HasCompleteCompositeTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75E4))(this);
	}
	template <typename T = void> T set_HasCompleteCompositeTime(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A75EC))(this, value);
	}
	template <typename T = bool> T UpdatePlayerCurrentDiamond(int64_t updateNum) {
		return ((T (*)(LocalPlayerDataStore*, int64_t))(Il2CppBase() + 0x1970AC4))(this, updateNum);
	}
	template <typename T = int32_t> T get_PlayerGamePoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A75FC))(this);
	}
	template <typename T = void> T set_PlayerGamePoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7604))(this, value);
	}
	template <typename T = int32_t> T get_DailyLadderScore() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A760C))(this);
	}
	template <typename T = void> T set_DailyLadderScore(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7614))(this, value);
	}
	template <typename T = int32_t> T get_PlayerTodayGetGamePoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A761C))(this);
	}
	template <typename T = void> T set_PlayerTodayGetGamePoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7624))(this, value);
	}
	template <typename T = int32_t> T get_PlayerTodayCanGetMaxGamePoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A762C))(this);
	}
	template <typename T = void> T set_PlayerTodayCanGetMaxGamePoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7634))(this, value);
	}
	template <typename T = int32_t> T get_PlayerTeamPoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A763C))(this);
	}
	template <typename T = void> T set_PlayerTeamPoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7644))(this, value);
	}
	template <typename T = int32_t> T get_PlayerWeaponPoint() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A764C))(this);
	}
	template <typename T = void> T set_PlayerWeaponPoint(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7654))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerCurrentNickName() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A765C))(this);
	}
	template <typename T = void> T set_PlayerCurrentNickName(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x1978EBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CdnUrlPre() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7664))(this);
	}
	template <typename T = void> T set_CdnUrlPre(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x197901C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerSocialName() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A766C))(this);
	}
	template <typename T = void> T set_PlayerSocialName(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x1978EC4))(this, value);
	}
	template <typename T = bool> T get_IsRegistedAtZone() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7674))(this);
	}
	template <typename T = void> T set_IsRegistedAtZone(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x1978EDC))(this, value);
	}
	template <typename T = bool> T get_IsRecoverableAccount() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x1978EEC))(this);
	}
	template <typename T = void> T set_IsRecoverableAccount(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x1978EE4))(this, value);
	}
	template <typename T = uintptr_t> T get_PictureInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A767C))(this);
	}
	template <typename T = void> T set_PictureInfo(uintptr_t value) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x1978ECC))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x1970A64))(this);
	}
	template <typename T = void> T set_PlayerId(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x1978EF4))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerGuid() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7684))(this);
	}
	template <typename T = void> T set_PlayerGuid(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A7694))(this, value);
	}
	template <typename T = uint64_t> T get_CoreUserID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A76A0))(this);
	}
	template <typename T = void> T set_CoreUserID(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A76B0))(this, value);
	}
	template <typename T = int32_t> T get_PlayerCountryId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A76BC))(this);
	}
	template <typename T = void> T set_PlayerCountryId(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1979004))(this, value);
	}
	template <typename T = uintptr_t> T get_LevelInfo() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6F98))(this);
	}
	template <typename T = void> T set_LevelInfo(uintptr_t value) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A76C4))(this, value);
	}
	template <typename T = uint32_t> T GetRealLevel() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A79E8))(this);
	}
	template <typename T = uintptr_t> T GetRegisterTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7AE0))(this);
	}
	template <typename T = Il2CppString*> T GetLevelString(bool isShort) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A7C0C))(this, isShort);
	}
	template <typename T = uint32_t> T get_PveDailyMaxRound() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D1C))(this);
	}
	template <typename T = void> T set_PveDailyMaxRound(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A7D24))(this, value);
	}
	template <typename T = uint32_t> T get_PveHistoryMaxRound() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D2C))(this);
	}
	template <typename T = void> T set_PveHistoryMaxRound(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A7D34))(this, value);
	}
	template <typename T = int32_t> T get_LoginSource() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D3C))(this);
	}
	template <typename T = void> T set_LoginSource(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7D44))(this, value);
	}
	template <typename T = int32_t> T get_TotalRecharged() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D4C))(this);
	}
	template <typename T = void> T set_TotalRecharged(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1970A84))(this, value);
	}
	template <typename T = int32_t> T get_RealTotalRecharged() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D54))(this);
	}
	template <typename T = void> T set_RealTotalRecharged(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x1970A8C))(this, value);
	}
	template <typename T = int32_t> T get_LadderRank() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D5C))(this);
	}
	template <typename T = void> T set_LadderRank(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7D64))(this, value);
	}
	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D6C))(this);
	}
	template <typename T = void> T set_LadderScore(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7D74))(this, value);
	}
	template <typename T = int32_t> T get_Trophy() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D7C))(this);
	}
	template <typename T = void> T set_Trophy(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7D84))(this, value);
	}
	template <typename T = int32_t> T get_TrophyRank() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D8C))(this);
	}
	template <typename T = void> T set_TrophyRank(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7D94))(this, value);
	}
	template <typename T = int32_t> T get_BRLadderRank() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7D9C))(this);
	}
	template <typename T = void> T set_BRLadderRank(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7DA4))(this, value);
	}
	template <typename T = int32_t> T get_BrLadderScore() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7DAC))(this);
	}
	template <typename T = void> T set_BrLadderScore(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7DB4))(this, value);
	}
	template <typename T = int32_t> T get_HighestTrophyRank() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7DBC))(this);
	}
	template <typename T = void> T set_HighestTrophyRank(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7DC4))(this, value);
	}
	template <typename T = int32_t> T get_TrophyChagnedOffline() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7DCC))(this);
	}
	template <typename T = void> T set_TrophyChagnedOffline(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7DD4))(this, value);
	}
	template <typename T = bool> T get_HasTrophyLevelPrize() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7DDC))(this);
	}
	template <typename T = void> T set_HasTrophyLevelPrize(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A7DE4))(this, value);
	}
	template <typename T = uint32_t> T get_BeLikedCount() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7DEC))(this);
	}
	template <typename T = void> T set_BeLikedCount(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A7DFC))(this, value);
	}
	template <typename T = void> T AddLikedCount() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7E0C))(this);
	}
	template <typename T = int32_t> T get_CurrentGetRewardSeason() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7EB4))(this);
	}
	template <typename T = void> T set_CurrentGetRewardSeason(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A7EBC))(this, value);
	}
	template <typename T = uint64_t> T get_LastLogoutTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7EC4))(this);
	}
	template <typename T = void> T set_LastLogoutTime(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A7ED4))(this, value);
	}
	template <typename T = uint64_t> T get_GuildID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7EE0))(this);
	}
	template <typename T = void> T set_GuildID(uint64_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A7EF0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RechargeStat() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A7EFC))(this);
	}
	template <typename T = void> T set_RechargeStat(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x19A7F04))(this, value);
	}
	template <typename T = int32_t> T GetCurrencyNumByType(uintptr_t currencyType) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A7F0C))(this, currencyType);
	}
	template <typename T = int32_t> T GetResourceNumByMallType(int32_t mallType) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A8008))(this, mallType);
	}
	template <typename T = void> T RefreshPlayerData(uintptr_t data) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A80CC))(this, data);
	}
	template <typename T = void> T UpdateQQVIPData(uint32_t inVIPFlag) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A85A8))(this, inVIPFlag);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A865C))(this);
	}
	template <typename T = void> static T ShutDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x19A87E0))(0);
	}
	template <typename T = void> T ApplyPlayerLogoutTime(uint64_t logoutTime) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A89F4))(this, logoutTime);
	}
	template <typename T = void> T ApplyGuildData(uint64_t guildID) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x198691C))(this, guildID);
	}
	template <typename T = void> static T RecordPlayerLogoutTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x19A8878))(0);
	}
	template <typename T = void> T UpdateWelath(uintptr_t res) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x1972044))(this, res);
	}
	template <typename T = void> T UpdateWealth() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A6800))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A8B7C))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A8B84))(this, value);
	}
	template <typename T = void> T StoreProfileData(uintptr_t data) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A8B8C))(this, data);
	}
	template <typename T = void> T set_ProcessingMissionID(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19A99D8))(this, value);
	}
	template <typename T = int32_t> T get_ProcessingMissionID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A99E0))(this);
	}
	template <typename T = int32_t> T GetSShopCoinNum(uintptr_t Type) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A99E8))(this, Type);
	}
	template <typename T = bool> T IsLocalPlayer(uint64_t playerId) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t))(Il2CppBase() + 0x19A9A98))(this, playerId);
	}
	template <typename T = bool> T IsBRModeAvailable() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9B78))(this);
	}
	template <typename T = bool> T IsZMModeAvailable() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9C70))(this);
	}
	template <typename T = bool> T get_IsGuertBindPop() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9D68))(this);
	}
	template <typename T = void> T set_IsGuertBindPop(bool value) {
		return ((T (*)(LocalPlayerDataStore*, bool))(Il2CppBase() + 0x19A9D70))(this, value);
	}
	template <typename T = uint32_t> T get_LogFileType() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9D78))(this);
	}
	template <typename T = void> T set_LogFileType(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A9D80))(this, value);
	}
	template <typename T = uint32_t> T get_LogFileBeginTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9D88))(this);
	}
	template <typename T = void> T set_LogFileBeginTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A9D90))(this, value);
	}
	template <typename T = uint32_t> T get_LogFileEndTime() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9D98))(this);
	}
	template <typename T = void> T set_LogFileEndTime(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A9DA0))(this, value);
	}
	template <typename T = uint32_t> T get_LogFileSize() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9DA8))(this);
	}
	template <typename T = void> T set_LogFileSize(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A9DB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LogFileTargetUrl() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9DB8))(this);
	}
	template <typename T = void> T set_LogFileTargetUrl(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x19A9DC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_MidasShortOpenId() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9DC8))(this);
	}
	template <typename T = void> T set_MidasShortOpenId(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x19A87D8))(this, value);
	}
	template <typename T = bool> T IsLogFileUpload() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9DD0))(this);
	}
	template <typename T = uint32_t> T get_LogFileUploadFlag() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19A9E78))(this);
	}
	template <typename T = void> T set_LogFileUploadFlag(uint32_t value) {
		return ((T (*)(LocalPlayerDataStore*, uint32_t))(Il2CppBase() + 0x19A9E80))(this, value);
	}
	template <typename T = void> T ApplyLogUploaderData(uintptr_t data) {
		return ((T (*)(LocalPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x19A9F88))(this, data);
	}
	template <typename T = int32_t> T get_CreditScore() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19AA1D0))(this);
	}
	template <typename T = void> T set_CreditScore(int32_t value) {
		return ((T (*)(LocalPlayerDataStore*, int32_t))(Il2CppBase() + 0x19AA1D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameOpenID() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19AA1E0))(this);
	}
	template <typename T = void> T set_GameOpenID(Il2CppString* value) {
		return ((T (*)(LocalPlayerDataStore*, Il2CppString*))(Il2CppBase() + 0x19AA1E8))(this, value);
	}
	template <typename T = void> T SetCurrentLoginIsFirstLogin(uint64_t loginTime, uint64_t LastLoginTime) {
		return ((T (*)(LocalPlayerDataStore*, uint64_t, uint64_t))(Il2CppBase() + 0x19A97E0))(this, loginTime, LastLoginTime);
	}
	template <typename T = bool> static T StoreProfileDatam__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19AA1F0))(0, s);
	}
	template <typename T = bool> static T StoreProfileDatam__1(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19AA22C))(0, s);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LocalPlayerDataStore*))(Il2CppBase() + 0x19AA268))(this);
	}

};

}
