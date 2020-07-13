#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRLadderSeasonPrizeInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRLadderSeasonPrizeInfoConfig"));
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
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E120))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E128))(this);
	}
	template <typename T = int32_t> T get_Season_no() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E330))(this);
	}
	template <typename T = void> T set_Season_no(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E338))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E340))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E348))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_id() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E2F0))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_id(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E350))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_item_num() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E2F8))(this);
	}
	template <typename T = void> T set_Prize_info_1_item_num(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E358))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_prize_num() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E300))(this);
	}
	template <typename T = void> T set_Prize_info_1_prize_num(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E360))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_1_duration() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E308))(this);
	}
	template <typename T = void> T set_Prize_info_1_duration(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E368))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_id() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E310))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_id(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E370))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_item_num() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E318))(this);
	}
	template <typename T = void> T set_Prize_info_2_item_num(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E378))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_prize_num() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E320))(this);
	}
	template <typename T = void> T set_Prize_info_2_prize_num(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E380))(this, value);
	}
	template <typename T = int32_t> T get_Prize_info_2_duration() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E328))(this);
	}
	template <typename T = void> T set_Prize_info_2_duration(int32_t value) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, int32_t))(Il2CppBase() + 0x2D4E388))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4E390))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BRLadderSeasonPrizeInfoConfig*))(Il2CppBase() + 0x2D4E578))(this);
	}

};

}
