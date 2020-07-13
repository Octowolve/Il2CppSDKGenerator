#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildDataStore"));
	}

	template <typename T = uintptr_t> T& SelfGuildInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelfData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& CaptainData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& CaptainData_Vice1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& CaptainData_Vice2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_GuildMemberNum() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_GuildMemberNumMax() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_GuildWeekRank() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_GuildWeekRankPer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_GuildSeasonRank() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_GuildSeasonRankPer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_DayEndTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_WeekEndTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_RankSettlementFlag() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChatInfoList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_LastTalkTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& WeekPrizeNtf() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SeasonPrizeNtf() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_IsShowingGuildRankPrize() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_GroupCallbackType() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryWXGroupInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindWXGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWXGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WXGroupCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViceCaptainName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCreateGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateGuildResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildConfReponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoReponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCaptainData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfRoleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDismissGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReponseDismissGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestRefuseImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseRefuseImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAcceptImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAcceptImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestModifyGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseModifyGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDailyActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseDailyActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGuildPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowingRankPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildShout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildTalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGuildMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityRewardNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildLabelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGuildLabelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildLimitDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuildConsumeItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuildConsumeItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanImpeachCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetImpeachLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeekPrizeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonPrizeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = uint64_t> T get_GuildID() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB14DC))(this);
	}
	template <typename T = void> T set_GuildID(uint64_t value) {
		return ((T (*)(GuildDataStore*, uint64_t))(Il2CppBase() + 0x3BB14E4))(this, value);
	}
	template <typename T = int32_t> T get_GuildMemberNum() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB14F4))(this);
	}
	template <typename T = void> T set_GuildMemberNum(int32_t value) {
		return ((T (*)(GuildDataStore*, int32_t))(Il2CppBase() + 0x3BB14FC))(this, value);
	}
	template <typename T = int32_t> T get_GuildMemberNumMax() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1504))(this);
	}
	template <typename T = int32_t> T get_GuildWeekRank() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB150C))(this);
	}
	template <typename T = int32_t> T get_GuildWeekRankPer() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1514))(this);
	}
	template <typename T = int32_t> T get_GuildSeasonRank() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB151C))(this);
	}
	template <typename T = int32_t> T get_GuildSeasonRankPer() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1524))(this);
	}
	template <typename T = int32_t> T get_DayEndTime() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB152C))(this);
	}
	template <typename T = int32_t> T get_WeekEndTime() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1534))(this);
	}
	template <typename T = bool> T get_RankSettlementFlag() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB153C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChatInfoList() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1544))(this);
	}
	template <typename T = void> T QueryWXGroupInfo() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB154C))(this);
	}
	template <typename T = void> T BindWXGroup() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1658))(this);
	}
	template <typename T = void> T ApplyWXGroup() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1764))(this);
	}
	template <typename T = void> T WXGroupCallback(bool result, int32_t errorCode, Il2CppString* url) {
		return ((T (*)(GuildDataStore*, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x3BB1870))(this, result, errorCode, url);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB1BB0))(this);
	}
	template <typename T = uintptr_t> static T BuildBaseInfo(uintptr_t rawData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BB1D70))(0, rawData);
	}
	template <typename T = void> static T BuildMemberInfo(uintptr_t rawData, uintptr_t info) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BB20C4))(0, rawData, info);
	}
	template <typename T = Il2CppString*> T GetViceCaptainName(uint64_t playerID) {
		return ((T (*)(GuildDataStore*, uint64_t))(Il2CppBase() + 0x3BB2580))(this, playerID);
	}
	template <typename T = void> T RequestCreateGuild(uintptr_t baseInfo) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB26E0))(this, baseInfo);
	}
	template <typename T = void> T OnCreateGuildResponse(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB29B8))(this, response);
	}
	template <typename T = void> T RequestGuildConf() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB2C9C))(this);
	}
	template <typename T = void> T OnGuildConfReponse(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB2D9C))(this, response);
	}
	template <typename T = void> T RequestGuildInfo(bool takePrize) {
		return ((T (*)(GuildDataStore*, bool))(Il2CppBase() + 0x3BB2FB4))(this, takePrize);
	}
	template <typename T = void> T OnGuildInfoReponse(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB3118))(this, response);
	}
	template <typename T = uintptr_t> T GetCaptainData(int32_t index) {
		return ((T (*)(GuildDataStore*, int32_t))(Il2CppBase() + 0x3BB3AB4))(this, index);
	}
	template <typename T = uintptr_t> T GetSelfRoleType() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB3BB4))(this);
	}
	template <typename T = void> T RequestDismissGuild(uint64_t guildID) {
		return ((T (*)(GuildDataStore*, uint64_t))(Il2CppBase() + 0x3BB3D34))(this, guildID);
	}
	template <typename T = void> T ReponseDismissGuild(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB3E80))(this, response);
	}
	template <typename T = void> T RequestRefuseImpeachment() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB4264))(this);
	}
	template <typename T = void> T ResponseRefuseImpeachment(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB4398))(this, response);
	}
	template <typename T = void> T RequestAcceptImpeachment() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB4718))(this);
	}
	template <typename T = void> T ResponseAcceptImpeachment(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB484C))(this, response);
	}
	template <typename T = void> T RequestModifyGuildInfo(uintptr_t baseInfo) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB4BCC))(this, baseInfo);
	}
	template <typename T = void> T ResponseModifyGuildInfo(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB50B8))(this, response);
	}
	template <typename T = void> T RequestDailyActivityReward(int32_t index, uintptr_t prizeType) {
		return ((T (*)(GuildDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x3BB5AD4))(this, index, prizeType);
	}
	template <typename T = void> T ResponseDailyActivityReward(uintptr_t response) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB5C3C))(this, response);
	}
	template <typename T = void> T CheckGuildPrize() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB609C))(this);
	}
	template <typename T = void> T SetShowingRankPrize(bool flag) {
		return ((T (*)(GuildDataStore*, bool))(Il2CppBase() + 0x3BB6744))(this, flag);
	}
	template <typename T = void> T RequestGuildShout(uint64_t guildID, uint64_t playerID) {
		return ((T (*)(GuildDataStore*, uint64_t, uint64_t))(Il2CppBase() + 0x3BB67EC))(this, guildID, playerID);
	}
	template <typename T = void> T RequestGuildTalk(Il2CppString* content) {
		return ((T (*)(GuildDataStore*, Il2CppString*))(Il2CppBase() + 0x3BB6958))(this, content);
	}
	template <typename T = uintptr_t> T BuildChatInfo(uintptr_t msgInfo) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB6B30))(this, msgInfo);
	}
	template <typename T = void> T NotifyGuildMessage(uintptr_t notify) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB7354))(this, notify);
	}
	template <typename T = int32_t> T GetActivityRewardNum() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB75D0))(this);
	}
	template <typename T = Il2CppString*> static T GetGuildLabelType(uintptr_t labelType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BB7888))(0, labelType);
	}
	template <typename T = uintptr_t> static T GetGuildLabelType_1(Il2CppString* labelType) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BB7994))(0, labelType);
	}
	template <typename T = Il2CppString*> static T GetGuildLimitDesc(bool allowJoin, bool needApproval) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x3BB7AF8))(0, allowJoin, needApproval);
	}
	template <typename T = int32_t> T GetBuildConsumeItemID() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB7C04))(this);
	}
	template <typename T = int32_t> T GetBuildConsumeItemCount() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB7D8C))(this);
	}
	template <typename T = int32_t> T CheckRedPoint() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB7F14))(this);
	}
	template <typename T = bool> T CheckCanImpeachCaptain() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB8378))(this);
	}
	template <typename T = uint32_t> T GetImpeachLimitTime() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB84A8))(this);
	}
	template <typename T = void> T SetWeekPrizeNtf(uintptr_t ntf) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB65BC))(this, ntf);
	}
	template <typename T = void> T SetSeasonPrizeNtf(uintptr_t ntf) {
		return ((T (*)(GuildDataStore*, uintptr_t))(Il2CppBase() + 0x3BB6680))(this, ntf);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildDataStore*))(Il2CppBase() + 0x3BB8630))(this);
	}

};

}
