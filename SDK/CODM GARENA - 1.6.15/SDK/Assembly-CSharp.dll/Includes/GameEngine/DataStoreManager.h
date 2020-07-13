#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DataStoreManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DataStoreManager"));
	}

	template <typename T = uintptr_t> T& mBRNearbyModuleDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mBRChatDataStore() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mPandoraDataStore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mTipsDataStore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mLanternAnnoucementDataStore() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mNavigationDataStore() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mGameInfoDataStore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mGamePrepareSystemDataStore() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mWorkShopDataStore() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mElectronicSportsDataStore() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mGlobalDataStore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mLocalPlayerDataStore() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mRandomNickNameDataStore() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mRoomDataStore() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mRankDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mRedDotDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mSundryDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLoadingBackGroundDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mPVEModeLevelDataStore() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mSettlementDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mTutorialDataStore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mWeaponPromotionDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mIData_DataStore() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mLoginPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mVersionConfigDataStore() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mMPPVEStageDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mSquadBattleDataStore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mSquadMatchDataStore() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mActivityNoticeDataStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mRollNoticeDataStore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mAnnouncementDataStore() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mLiveOpsMatchJumpDataStore() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mBattlePassDataStore() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mBattlePassConf() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mBRLadderDataStore() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mBRModeMapDataStore() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mRechargeDataStore() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& mAchievementDataStore() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mCareerDataStore() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mPlayerIconDataStore() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mOtherPlayerDataStore() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mChatDataStore() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mCodLiveOpsActivityDataStore() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mMissionSystemDataStore() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& mRelationInvitationDataStore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mFriendChatDataStore() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& mFriendDataStore() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mFriendViewMode() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& mGuestBindingPlatformDataStore() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& mGuildApplyMsgDataStore() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& mGuildDataStore() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& mGuildFriendRequestDataStore() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& mGuildLocationDataStore() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& mGuildMemberDataStore() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& mGuildRankDataStore() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& mGuildSearchDataStore() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& mGuildMissionDataStore() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mGuildWelfareDataStore() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& mFacePictureDataStore() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& mLiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDatastore() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& mLobbyExpBuffDataStore() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& mLobbyMapDataStore() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& mMailDataStore() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& mPersonalInfoDataStore() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& mPlayerGameStatDataStore() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& mRankModel() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& mRankTabDataInfo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& mRankProtocolData() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mSafeBoxDataStore() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& mRankRoleModelData() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& mSpvpDataStore() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& mBrDataStore() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& mSPVPLadderDataStore() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& mSShopDataStore() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& mScreenShotDataStore() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& mSettingsChatDataManager() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& mSettingsViewMode() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& mGameStatesDataStore() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& mGameStateViewMode() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& mShopDataStore() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& mShopPayResDataStore() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& mShopPaymentConfirmDataStore() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& mChestViewMode() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& mTreasureChestDataStore() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& mSignDataStore() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& mSquadDataStore() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& mSettingsDataStore() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& mToStoreRatePopupDataStore() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& mZombieDataStore() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& mZombieDailyChallengeDataStore() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& mZombieEndlessDataStore() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& mZbZoneRankData() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& mCDNDataStore() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& mInviteNewbieDataStore() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& mLiveDataStore() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& mSoldierReturnDataStore() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& mLobbyRankBuffDataStore() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& mFuncBlockDataStore() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& mFriendRecallDataStore() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& mAdvertisingDataStore() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& mBpExpDataStore() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllDataStores() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBindDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_BRNearbyModuleDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AEB54))(this);
	}
	template <typename T = uintptr_t> T get_BRChatDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AEC4C))(this);
	}
	template <typename T = uintptr_t> T get_PandoraDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AED44))(this);
	}
	template <typename T = uintptr_t> T get_TipsDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AEE3C))(this);
	}
	template <typename T = uintptr_t> T get_LanternAnnoucementDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AEF34))(this);
	}
	template <typename T = uintptr_t> T get_NavigationDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF02C))(this);
	}
	template <typename T = uintptr_t> T get_GameInfoDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF124))(this);
	}
	template <typename T = uintptr_t> T get_GamePrepareSystemDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF21C))(this);
	}
	template <typename T = uintptr_t> T get_WorkShopDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF314))(this);
	}
	template <typename T = uintptr_t> T get_ElectronicSportsDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF40C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF504))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF5FC))(this);
	}
	template <typename T = uintptr_t> T get_RandomNickNameDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF6F4))(this);
	}
	template <typename T = uintptr_t> T get_RoomDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF7EC))(this);
	}
	template <typename T = uintptr_t> T get_RankDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF8E4))(this);
	}
	template <typename T = uintptr_t> T get_RedDotDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AF9DC))(this);
	}
	template <typename T = uintptr_t> T get_SundryDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFAD4))(this);
	}
	template <typename T = uintptr_t> T get_LoadingBackGroundDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFBCC))(this);
	}
	template <typename T = uintptr_t> T get_PVEModeLevelDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFCC4))(this);
	}
	template <typename T = uintptr_t> T get_SettlementDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFDBC))(this);
	}
	template <typename T = uintptr_t> T get_TutorialDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFEB4))(this);
	}
	template <typename T = uintptr_t> T get_WeaponPromotionDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41AFFAC))(this);
	}
	template <typename T = uintptr_t> T get_IData_DataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B00A4))(this);
	}
	template <typename T = uintptr_t> T get_LoginPlayerInfo() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B019C))(this);
	}
	template <typename T = uintptr_t> T get_VersionConfigDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0294))(this);
	}
	template <typename T = uintptr_t> T get_MPPVEStageDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B038C))(this);
	}
	template <typename T = uintptr_t> T get_SquadBattleDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0484))(this);
	}
	template <typename T = uintptr_t> T get_SquadMatchDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B057C))(this);
	}
	template <typename T = uintptr_t> T get_ActivityNoticeDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0674))(this);
	}
	template <typename T = uintptr_t> T get_RollNoticeDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B076C))(this);
	}
	template <typename T = uintptr_t> T get_AnnouncementDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0864))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsMatchJumpDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B095C))(this);
	}
	template <typename T = uintptr_t> T get_BattlePassDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0A54))(this);
	}
	template <typename T = uintptr_t> T get_BattlePassConf() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0B4C))(this);
	}
	template <typename T = uintptr_t> T get_BRLadderDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0C44))(this);
	}
	template <typename T = uintptr_t> T get_BRModeMapDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0D3C))(this);
	}
	template <typename T = uintptr_t> T get_RechargeDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0E34))(this);
	}
	template <typename T = uintptr_t> T get_AchievementDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B0F2C))(this);
	}
	template <typename T = uintptr_t> T get_CareerDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1024))(this);
	}
	template <typename T = uintptr_t> T get_PlayerIconDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B111C))(this);
	}
	template <typename T = uintptr_t> T get_OtherPlayerDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1214))(this);
	}
	template <typename T = uintptr_t> T get_ChatDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B130C))(this);
	}
	template <typename T = uintptr_t> T get_CodLiveOpsActivityDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1404))(this);
	}
	template <typename T = uintptr_t> T get_MissionSystemDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B14FC))(this);
	}
	template <typename T = uintptr_t> T get_RelationInvitationDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B15F4))(this);
	}
	template <typename T = uintptr_t> T get_FriendChatDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B16EC))(this);
	}
	template <typename T = uintptr_t> T get_FriendDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B17E4))(this);
	}
	template <typename T = uintptr_t> T get_FriendViewMode() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B18DC))(this);
	}
	template <typename T = uintptr_t> T get_GuestBindingPlatformDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B19D4))(this);
	}
	template <typename T = uintptr_t> T get_GuildApplyMsgDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1ACC))(this);
	}
	template <typename T = uintptr_t> T get_GuildDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1BC4))(this);
	}
	template <typename T = uintptr_t> T get_GuildFriendRequestDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1CBC))(this);
	}
	template <typename T = uintptr_t> T get_GuildLocationDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1DB4))(this);
	}
	template <typename T = uintptr_t> T get_GuildMemberDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1EAC))(this);
	}
	template <typename T = uintptr_t> T get_GuildRankDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B1FA4))(this);
	}
	template <typename T = uintptr_t> T get_GuildSearchDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B209C))(this);
	}
	template <typename T = uintptr_t> T get_GuildMissionDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2194))(this);
	}
	template <typename T = uintptr_t> T get_GuildWelfareDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B228C))(this);
	}
	template <typename T = uintptr_t> T get_FacePictureDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2388))(this);
	}
	template <typename T = uintptr_t> T get_LoadoutDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2480))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2578))(this);
	}
	template <typename T = uintptr_t> T get_LoadoutReddotDatastore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2670))(this);
	}
	template <typename T = uintptr_t> T get_LobbyExpBuffDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2768))(this);
	}
	template <typename T = uintptr_t> T get_LobbyMapDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2860))(this);
	}
	template <typename T = uintptr_t> T get_MailDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2958))(this);
	}
	template <typename T = uintptr_t> T get_PersonalInfoDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2A50))(this);
	}
	template <typename T = uintptr_t> T get_PlayerGameStatDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2B48))(this);
	}
	template <typename T = uintptr_t> T get_RankModel() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2C40))(this);
	}
	template <typename T = uintptr_t> T get_RankTabDataInfo() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2D38))(this);
	}
	template <typename T = uintptr_t> T get_RankProtocolData() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2E30))(this);
	}
	template <typename T = uintptr_t> T get_SafeBoxDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B2F28))(this);
	}
	template <typename T = uintptr_t> T get_RankRoleModelData() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3020))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3118))(this);
	}
	template <typename T = uintptr_t> T get_BrDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3210))(this);
	}
	template <typename T = uintptr_t> T get_SPVPLadderDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3308))(this);
	}
	template <typename T = uintptr_t> T get_SShopDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3400))(this);
	}
	template <typename T = uintptr_t> T get_ScreenShotDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B34F8))(this);
	}
	template <typename T = uintptr_t> T get_SettingsChatDataManager() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B35F0))(this);
	}
	template <typename T = uintptr_t> T get_SettingsViewMode() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x419CBD8))(this);
	}
	template <typename T = uintptr_t> T get_GameStatesDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B36E8))(this);
	}
	template <typename T = uintptr_t> T get_GameStateViewMode() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B37E0))(this);
	}
	template <typename T = uintptr_t> T get_ShopDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B38D8))(this);
	}
	template <typename T = uintptr_t> T get_ShopPayResDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B39D0))(this);
	}
	template <typename T = uintptr_t> T get_ShopPaymentConfirmDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3AC8))(this);
	}
	template <typename T = uintptr_t> T get_ChestViewMode() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3BC4))(this);
	}
	template <typename T = uintptr_t> T get_TreasureChestDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3CBC))(this);
	}
	template <typename T = uintptr_t> T get_SignDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3DB4))(this);
	}
	template <typename T = uintptr_t> T get_SquadDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3EAC))(this);
	}
	template <typename T = uintptr_t> T get_SquadInventoryDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B3FA4))(this);
	}
	template <typename T = uintptr_t> T get_SettingsDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B409C))(this);
	}
	template <typename T = uintptr_t> T get_ToStoreRatePopupDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4194))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B428C))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDailyChallengeDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4384))(this);
	}
	template <typename T = uintptr_t> T get_ZombieEndlessDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B447C))(this);
	}
	template <typename T = uintptr_t> T get_ZbZoneRankData() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4574))(this);
	}
	template <typename T = uintptr_t> T get_CDNDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B466C))(this);
	}
	template <typename T = uintptr_t> T get_InviteNewbieDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4764))(this);
	}
	template <typename T = uintptr_t> T get_LiveDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B485C))(this);
	}
	template <typename T = uintptr_t> T get_SoldierReturnDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4938))(this);
	}
	template <typename T = uintptr_t> T get_LobbyRankPointBuffDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4A14))(this);
	}
	template <typename T = uintptr_t> T get_FuncBlockDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4AF0))(this);
	}
	template <typename T = uintptr_t> T get_FriendRecallDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4BE8))(this);
	}
	template <typename T = uintptr_t> T get_AdvertisingDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4CC4))(this);
	}
	template <typename T = uintptr_t> T get_LobbyBPExpBuffDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4DA0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4E7C))(this);
	}
	template <typename T = void> T PreBindDataStore() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4F20))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B4FE8))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B5120))(this);
	}
	template <typename T = void> T UserLogin(uint64_t playerId) {
		return ((T (*)(DataStoreManager*, uint64_t))(Il2CppBase() + 0x41B5258))(this, playerId);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B53B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B54D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B54D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(DataStoreManager*))(Il2CppBase() + 0x41B54D8))(this);
	}

};

}
