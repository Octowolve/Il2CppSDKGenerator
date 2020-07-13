#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class ZbZoneRankData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "ZbZoneRankData"));
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
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& RnakDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LastPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FirstIntervalList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerListDivide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetPlayerList(Il2CppList<uintptr_t>* list, bool isReset) {
		return ((T (*)(ZbZoneRankData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x38197D0))(this, list, isReset);
	}
	template <typename T = int32_t> static T GetRankInterval(int32_t rank, Il2CppList<int32_t>* list) {
		return ((T (*)(void *, int32_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x38198C8))(0, rank, list);
	}
	template <typename T = void> T PlayerListDivide(Il2CppList<int32_t>* list) {
		return ((T (*)(ZbZoneRankData*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3819A8C))(this, list);
	}
	template <typename T = void> T GetLastPlayerInfo(Il2CppList<int32_t>* list) {
		return ((T (*)(ZbZoneRankData*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3819EA0))(this, list);
	}

};

}
