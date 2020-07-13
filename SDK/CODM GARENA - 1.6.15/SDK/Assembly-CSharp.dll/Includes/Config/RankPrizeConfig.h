#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RankPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RankPrizeConfig"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& RankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T& ZoneAwardDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& Rank_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prize_info_2_item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Prize_info_2_item_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortRankPrizeConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T GetAwardList(int32_t Rank_Id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30D8548))(0, Rank_Id);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRankAwardList(uintptr_t rankId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30D8A00))(0, rankId);
	}
	template <typename T = int32_t> static T SortRankPrizeConfig(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D8D48))(0, a, b);
	}
	template <typename T = int32_t> T get_Rank_id() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89C0))(this);
	}
	template <typename T = void> T set_Rank_id(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E40))(this, value);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89F8))(this);
	}
	template <typename T = void> T set_Rank(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E48))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_id() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89C8))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_id(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E50))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_num() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89D0))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_num(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E58))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_duration() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89D8))(this);
	}
	template <typename T = void> T set_Prize_info_1_duration(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E60))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_id() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89E0))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_id(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E68))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_num() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89E8))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_num(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E70))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_duration() {
		return ((T (*)(RankPrizeConfig*))(Il2CppBase() + 0x30D89F0))(this);
	}
	template <typename T = void> T set_Prize_info_2_duration(int32_t value) {
		return ((T (*)(RankPrizeConfig*, int32_t))(Il2CppBase() + 0x30D8E78))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RankPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30D8E80))(this, bytes, position);
	}

};

}
