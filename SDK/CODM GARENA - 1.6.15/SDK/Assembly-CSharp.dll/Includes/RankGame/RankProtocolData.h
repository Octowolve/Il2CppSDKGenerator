#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankProtocolData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankProtocolData"));
	}

	template <typename T = int32_t> T& rank_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& page_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& my_rank_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& player_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rankActivityPrizeInfo_List() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rankPercentActivityPrizeInfo_List() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& RnakDic() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LastPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FirstIntervalList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerListDivide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIDCollectionPlayerlist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankActivityInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAwardByRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAwardByRankPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllRankAwardItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindCorrespondingAwardByRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetPlayerList(Il2CppList<uintptr_t>* list, bool isReset) {
		return ((T (*)(RankProtocolData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3810F5C))(this, list, isReset);
	}
	template <typename T = void> T PlayerListDivide(Il2CppList<int32_t>* list) {
		return ((T (*)(RankProtocolData*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3814D20))(this, list);
	}
	template <typename T = void> T GetLastPlayerInfo(Il2CppList<int32_t>* list) {
		return ((T (*)(RankProtocolData*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3815134))(this, list);
	}
	template <typename T = void> T SetIDCollectionPlayerlist(Il2CppList<uintptr_t>* list, bool isReset) {
		return ((T (*)(RankProtocolData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3811C00))(this, list, isReset);
	}
	template <typename T = void> T SetRankActivityInfoList(Il2CppList<uintptr_t>* list, bool isReset) {
		return ((T (*)(RankProtocolData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3812000))(this, list, isReset);
	}
	template <typename T = bool> T FindAwardByRank(uint32_t uRankId, uintptr_t awardItem) {
		return ((T (*)(RankProtocolData*, uint32_t, uintptr_t))(Il2CppBase() + 0x3815408))(this, uRankId, awardItem);
	}
	template <typename T = bool> T FindAwardByRankPercent(uint32_t uRankPercent, uintptr_t awardItem) {
		return ((T (*)(RankProtocolData*, uint32_t, uintptr_t))(Il2CppBase() + 0x381591C))(this, uRankPercent, awardItem);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllRankAwardItems() {
		return ((T (*)(RankProtocolData*))(Il2CppBase() + 0x37FDBE8))(this);
	}
	template <typename T = uintptr_t> T FindCorrespondingAwardByRank(uint32_t uRankId, uint32_t uRankPercent) {
		return ((T (*)(RankProtocolData*, uint32_t, uint32_t))(Il2CppBase() + 0x38089C0))(this, uRankId, uRankPercent);
	}

};

}
