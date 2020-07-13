#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ActivityRankPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ActivityRankPrizeConfig"));
	}

	template <typename T = int32_t> T& Rank_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Rank_lower_limit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Rank_upper_limit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Is_percent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Prize_info_2_item_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Prize_info_2_item_num() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Prize_info_3_item_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Prize_info_3_item_num() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Prize_info_3_duration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Rank_type() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DA8C))(this);
	}
	template <typename T = void> T set_Rank_type(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DA94))(this, value);
	}
	template <typename T = int32_t> T get_Rank_lower_limit() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DA9C))(this);
	}
	template <typename T = void> T set_Rank_lower_limit(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAA4))(this, value);
	}
	template <typename T = int32_t> T get_Rank_upper_limit() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DAAC))(this);
	}
	template <typename T = void> T set_Rank_upper_limit(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAB4))(this, value);
	}
	template <typename T = int32_t> T get_Is_percent() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DABC))(this);
	}
	template <typename T = void> T set_Is_percent(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAC4))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_id() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DACC))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_id(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAD4))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_num() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DADC))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_num(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAE4))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_duration() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DAEC))(this);
	}
	template <typename T = void> T set_Prize_info_1_duration(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DAF4))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_id() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DAFC))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_id(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB04))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_num() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DB0C))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_num(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB14))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_duration() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DB1C))(this);
	}
	template <typename T = void> T set_Prize_info_2_duration(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB24))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_3_item_id() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DB2C))(this);
	}
	template <typename T = void> T set_Prize_info_3_item_id(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB34))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_3_item_num() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DB3C))(this);
	}
	template <typename T = void> T set_Prize_info_3_item_num(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB44))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_3_duration() {
		return ((T (*)(ActivityRankPrizeConfig*))(Il2CppBase() + 0x2D3DB4C))(this);
	}
	template <typename T = void> T set_Prize_info_3_duration(int32_t value) {
		return ((T (*)(ActivityRankPrizeConfig*, int32_t))(Il2CppBase() + 0x2D3DB54))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ActivityRankPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D3DB5C))(this, bytes, position);
	}

};

}
