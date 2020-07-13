#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TrophyRankConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TrophyRankConfig"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Sub_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Need_trophy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Max_trophy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Penalty_factor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& K_value() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Need_num() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Small_Icon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Daily_prize_info_add_exp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Daily_prize_info_add_gold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Daily_prize_info_add_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Daily_prize_info_box_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Daily_prize_info_box_num() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Daily_prize_info_prize_num() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_add_exp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_add_gold() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_add_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_box_id() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_box_num() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_prize_num() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_PointNeed() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB1C))(this);
	}
	template <typename T = int32_t> T get_PointMax() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB2C))(this);
	}
	template <typename T = int32_t> T get_DecLevelBuffer() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB3C))(this);
	}
	template <typename T = int32_t> T get_ReachPrize() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB44))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB54))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Gold() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB64))(this);
	}
	template <typename T = Il2CppString*> T GetRankName() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB74))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFCB8))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFD58))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFD60))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFD68))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(TrophyRankConfig*, Il2CppString*))(Il2CppBase() + 0x30EFD70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFCA0))(this);
	}
	template <typename T = Il2CppString*> T get_Sub_level() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFCB0))(this);
	}
	template <typename T = void> T set_Sub_level(Il2CppString* value) {
		return ((T (*)(TrophyRankConfig*, Il2CppString*))(Il2CppBase() + 0x30EFD78))(this, value);
	}
	template <typename T = int32_t> T get_Need_trophy() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB24))(this);
	}
	template <typename T = void> T set_Need_trophy(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFD80))(this, value);
	}
	template <typename T = int32_t> T get_Max_trophy() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB34))(this);
	}
	template <typename T = void> T set_Max_trophy(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFD88))(this, value);
	}
	template <typename T = float> T get_Penalty_factor() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFD90))(this);
	}
	template <typename T = void> T set_Penalty_factor(float value) {
		return ((T (*)(TrophyRankConfig*, float))(Il2CppBase() + 0x30EFD98))(this, value);
	}
	template <typename T = int32_t> T get_K_value() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDA0))(this);
	}
	template <typename T = void> T set_K_value(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFDA8))(this, value);
	}
	template <typename T = int32_t> T get_Need_num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDB0))(this);
	}
	template <typename T = void> T set_Need_num(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFDB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDC0))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(TrophyRankConfig*, Il2CppString*))(Il2CppBase() + 0x30EFDC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Small_Icon() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDD0))(this);
	}
	template <typename T = void> T set_Small_Icon(Il2CppString* value) {
		return ((T (*)(TrophyRankConfig*, Il2CppString*))(Il2CppBase() + 0x30EFDD8))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_add_exp() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDE0))(this);
	}
	template <typename T = void> T set_Daily_prize_info_add_exp(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFDE8))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_add_gold() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFDF0))(this);
	}
	template <typename T = void> T set_Daily_prize_info_add_gold(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFDF8))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_add_apvp_gold() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE00))(this);
	}
	template <typename T = void> T set_Daily_prize_info_add_apvp_gold(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE08))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_box_id() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE10))(this);
	}
	template <typename T = void> T set_Daily_prize_info_box_id(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE18))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_box_num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE20))(this);
	}
	template <typename T = void> T set_Daily_prize_info_box_num(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE28))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_prize_num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE30))(this);
	}
	template <typename T = void> T set_Daily_prize_info_prize_num(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE38))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_add_exp() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE40))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_add_exp(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE48))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_add_gold() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB6C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_add_gold(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE50))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_add_apvp_gold() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE58))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_add_apvp_gold(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE60))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_box_id() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB4C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_box_id(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE68))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_box_num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFB5C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_box_num(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE70))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_prize_num() {
		return ((T (*)(TrophyRankConfig*))(Il2CppBase() + 0x30EFE78))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_prize_num(int32_t value) {
		return ((T (*)(TrophyRankConfig*, int32_t))(Il2CppBase() + 0x30EFE80))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(TrophyRankConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EFE88))(this, bytes, position);
	}

};

}
