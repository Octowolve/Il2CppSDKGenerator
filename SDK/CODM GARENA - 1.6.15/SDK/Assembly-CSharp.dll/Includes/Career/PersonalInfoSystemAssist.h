#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& CONST_RENAME_CARD_ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& CONST_RENAME_CARD_GUID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& History_PageIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MAX_History_PageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& cacheId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& cacheFriendId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetPVPPlayerPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPVPPlayerPersonalInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetBRPlayerPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetBRPlayerPersonalInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetZombiePlayerPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetZombiePlayerPersonalInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieLevelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieDamageString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetPersonalInfoHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPersonalInfoHistoryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqHistoryAllMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetPersonalInfoHostory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersonalInfoHistoryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestLocalPlayerAllPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestOtherPlayerAllPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerEmblem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerSendGoldInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerSubscribeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetSubscribe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetSubscribeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSendGold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendGoldResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetMedalResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetAchievementResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetUseRenamingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOnSetNameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNameCdTimeTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetMedalReqponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetAchievementReqponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFifthMedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFifthAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconByModeRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRaidMaxRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundByCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeByLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCSActvViewUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = void> T RegisterListener(uintptr_t subscriber) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5323624))(this, subscriber);
	}
	template <typename T = void> T UnRegisterListener(uintptr_t subscriber) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5323710))(this, subscriber);
	}
	template <typename T = void> T RequestGetPVPPlayerPersonalInfo(uint64_t playerId) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x53237FC))(this, playerId);
	}
	template <typename T = void> T OnGetPVPPlayerPersonalInfoResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5323978))(this, res);
	}
	template <typename T = void> T RequestGetBRPlayerPersonalInfo(uint64_t playerId) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x5323A6C))(this, playerId);
	}
	template <typename T = void> T OnGetBRPlayerPersonalInfoResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5323BE8))(this, res);
	}
	template <typename T = void> T RequestGetZombiePlayerPersonalInfo(uint64_t playerId) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x5323CDC))(this, playerId);
	}
	template <typename T = void> T OnGetZombiePlayerPersonalInfoResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5323E58))(this, res);
	}
	template <typename T = Il2CppString*> T GetZombieLevelName(int32_t levelId) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t))(Il2CppBase() + 0x5323F4C))(this, levelId);
	}
	template <typename T = Il2CppString*> T GetZombieDamageString(uint64_t damage) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x532411C))(this, damage);
	}
	template <typename T = int32_t> T get_History_PageIndex() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x53244B0))(this);
	}
	template <typename T = void> T set_History_PageIndex(int32_t value) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t))(Il2CppBase() + 0x53244B8))(this, value);
	}
	template <typename T = void> T RequestGetPersonalInfoHistory(uint32_t gameType, bool bBR) {
		return ((T (*)(PersonalInfoSystemAssist*, uint32_t, bool))(Il2CppBase() + 0x53244C0))(this, gameType, bBR);
	}
	template <typename T = void> T OnGetPersonalInfoHistoryResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5324740))(this, res);
	}
	template <typename T = void> T ReqHistoryAllMode() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x5324834))(this);
	}
	template <typename T = void> T ReqGetPersonalInfoHostory(uint32_t gameType, int32_t pageIndex, bool bBr) {
		return ((T (*)(PersonalInfoSystemAssist*, uint32_t, int32_t, bool))(Il2CppBase() + 0x5324948))(this, gameType, pageIndex, bBr);
	}
	template <typename T = void> T GetPersonalInfoHistoryResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5324BDC))(this, res);
	}
	template <typename T = void> T RequestLocalPlayerAllPersonalInfo(uint64_t playerId) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x5324D70))(this, playerId);
	}
	template <typename T = void> T RequestOtherPlayerAllPersonalInfo(uint64_t playerId) {
		return ((T (*)(PersonalInfoSystemAssist*, uint64_t))(Il2CppBase() + 0x5324EBC))(this, playerId);
	}
	template <typename T = void> T RequestPlayerEmblem() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x532527C))(this);
	}
	template <typename T = void> T RequestPlayerAchievement() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x53250A0))(this);
	}
	template <typename T = void> T RequestPlayerSendGoldInfo() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x5325458))(this);
	}
	template <typename T = void> T RequestPlayerSubscribeInfo() {
		return ((T (*)(PersonalInfoSystemAssist*))(Il2CppBase() + 0x53255F0))(this);
	}
	template <typename T = void> T RequestSetSubscribe(uintptr_t req) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5325788))(this, req);
	}
	template <typename T = void> T OnSetSubscribeResponse(bool bSuccess) {
		return ((T (*)(PersonalInfoSystemAssist*, bool))(Il2CppBase() + 0x53259A8))(this, bSuccess);
	}
	template <typename T = void> T RequestSendGold(uintptr_t req) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5325C68))(this, req);
	}
	template <typename T = void> T OnSendGoldResponse(bool bSuccess) {
		return ((T (*)(PersonalInfoSystemAssist*, bool))(Il2CppBase() + 0x5325E88))(this, bSuccess);
	}
	template <typename T = void> T OnSetMedalResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x53261B4))(this, res);
	}
	template <typename T = void> T OnSetAchievementResponse(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x53262D8))(this, res);
	}
	template <typename T = void> T RequestGetUseRenamingCard(Il2CppString* name) {
		return ((T (*)(PersonalInfoSystemAssist*, Il2CppString*))(Il2CppBase() + 0x5326438))(this, name);
	}
	template <typename T = void> T OnOnSetNameResponse(bool isSuccess) {
		return ((T (*)(PersonalInfoSystemAssist*, bool))(Il2CppBase() + 0x5326654))(this, isSuccess);
	}
	template <typename T = Il2CppString*> T GetNameCdTimeTips(int32_t CdTime, int32_t errCode) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t, int32_t))(Il2CppBase() + 0x5326A74))(this, CdTime, errCode);
	}
	template <typename T = void> T OnSetMedalReqponse(int32_t id, int32_t index) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t, int32_t))(Il2CppBase() + 0x5326FB8))(this, id, index);
	}
	template <typename T = void> T OnSetAchievementReqponse(int32_t Id, int32_t index) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t, int32_t))(Il2CppBase() + 0x532713C))(this, Id, index);
	}
	template <typename T = void> T CheckFifthMedal(uintptr_t res) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x53272C0))(this, res);
	}
	template <typename T = void> T CheckFifthAchievement(uintptr_t data) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x53274A4))(this, data);
	}
	template <typename T = Il2CppString*> T GetIconByModeRound(uintptr_t mode, int32_t round, bool isBoss, int32_t bossId, int32_t difficulty) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x5327688))(this, mode, round, isBoss, bossId, difficulty);
	}
	template <typename T = int32_t> T GetRaidMaxRound(int32_t diff) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t))(Il2CppBase() + 0x5327B54))(this, diff);
	}
	template <typename T = uintptr_t> T GetRoundByCsv(int32_t round, int32_t mode, int32_t diff) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x53278C0))(this, round, mode, diff);
	}
	template <typename T = int32_t> T GetModeByLevelID(int32_t LevelId) {
		return ((T (*)(PersonalInfoSystemAssist*, int32_t))(Il2CppBase() + 0x5327DA0))(this, LevelId);
	}
	template <typename T = void> T ReqCSActvViewUI(uintptr_t actvID) {
		return ((T (*)(PersonalInfoSystemAssist*, uintptr_t))(Il2CppBase() + 0x5327F2C))(this, actvID);
	}

};

}
