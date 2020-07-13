#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LadderSeasonPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LadderSeasonPrizeConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_RewardList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Season_no() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prize_info_1_prize_num() {
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
	template <typename T = int32_t> T& Prize_info_2_prize_num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_RewardList() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E160))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E168))(this);
	}
	template <typename T = int32_t> T get_Season_no() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E370))(this);
	}
	template <typename T = void> T set_Season_no(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E378))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E380))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E388))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_id() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E330))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_id(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E390))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_num() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E338))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_num(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E398))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_prize_num() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E340))(this);
	}
	template <typename T = void> T set_Prize_info_1_prize_num(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3A0))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_duration() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E348))(this);
	}
	template <typename T = void> T set_Prize_info_1_duration(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3A8))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_id() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E350))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_id(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3B0))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_num() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E358))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_num(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3B8))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_prize_num() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E360))(this);
	}
	template <typename T = void> T set_Prize_info_2_prize_num(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3C0))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_duration() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E368))(this);
	}
	template <typename T = void> T set_Prize_info_2_duration(int32_t value) {
		return ((T (*)(LadderSeasonPrizeConfig*, int32_t))(Il2CppBase() + 0x376E3C8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LadderSeasonPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376E3D0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LadderSeasonPrizeConfig*))(Il2CppBase() + 0x376E5B8))(this);
	}

};

}
