#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildRankDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildRankDataStore"));
	}

	template <typename T = bool> T& WaitingForData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RankInfoList_Weekly() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelfGuildRankInfo_Weekly() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RankInfoList_Seasonal() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SelfGuildRankInfo_Seasonal() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& week_rank_cur_page() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& week_rank_max_page() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& isRequestingWeekRank() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& season_rank_cur_page() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& season_rank_max_page() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& isRequestingSeasonRank() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> static T& MAX_RANK_DATA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetRankList_Weekly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetRankList_Seasonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetGuildRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetGuildRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_RankInfoList_Weekly() {
		return ((T (*)(GuildRankDataStore*))(Il2CppBase() + 0x3BE347C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RankInfoList_Seasonal() {
		return ((T (*)(GuildRankDataStore*))(Il2CppBase() + 0x3BE3484))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildRankDataStore*))(Il2CppBase() + 0x3BE348C))(this);
	}
	template <typename T = void> T RequestGetRankList_Weekly(bool bMoreData) {
		return ((T (*)(GuildRankDataStore*, bool))(Il2CppBase() + 0x3BE36B4))(this, bMoreData);
	}
	template <typename T = void> T RequestGetRankList_Seasonal(bool bMoreData) {
		return ((T (*)(GuildRankDataStore*, bool))(Il2CppBase() + 0x3BE39E8))(this, bMoreData);
	}
	template <typename T = void> T RequestGetGuildRankList(uintptr_t rankID, int32_t pageIndex) {
		return ((T (*)(GuildRankDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x3BE385C))(this, rankID, pageIndex);
	}
	template <typename T = void> T ResponseGetGuildRankList(uintptr_t response) {
		return ((T (*)(GuildRankDataStore*, uintptr_t))(Il2CppBase() + 0x3BE3B90))(this, response);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildRankDataStore*))(Il2CppBase() + 0x3BE4B4C))(this);
	}

};

}
