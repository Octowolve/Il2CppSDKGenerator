#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameRanksConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameRanksConfig"));
	}

	template <typename T = int32_t> T& Rank_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Account_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Service_module() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Sub_key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Rank_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Need_game_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Need_game_times_of_friend() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Reset_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Update_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Order_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Multi_para() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Total_rank_size() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Top_rank_size() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Has_prize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Rank_Tab_Type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Rank_ChildTab_Type() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T GetRankId(int32_t accountType, uintptr_t curSelectTabtype, int32_t curSleectChildType) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4648BD0))(0, accountType, curSelectTabtype, curSleectChildType);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648D7C))(this);
	}
	template <typename T = int32_t> T get_Rank_id() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648D74))(this);
	}
	template <typename T = void> T set_Rank_id(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E1C))(this, value);
	}
	template <typename T = int32_t> T get_Account_type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648D5C))(this);
	}
	template <typename T = void> T set_Account_type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E24))(this, value);
	}
	template <typename T = int32_t> T get_Service_module() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E2C))(this);
	}
	template <typename T = void> T set_Service_module(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E34))(this, value);
	}
	template <typename T = int32_t> T get_Sub_key() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E3C))(this);
	}
	template <typename T = void> T set_Sub_key(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E44))(this, value);
	}
	template <typename T = int32_t> T get_Rank_type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E4C))(this);
	}
	template <typename T = void> T set_Rank_type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E54))(this, value);
	}
	template <typename T = int32_t> T get_Need_game_times() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E5C))(this);
	}
	template <typename T = void> T set_Need_game_times(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E64))(this, value);
	}
	template <typename T = int32_t> T get_Need_game_times_of_friend() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E6C))(this);
	}
	template <typename T = void> T set_Need_game_times_of_friend(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E74))(this, value);
	}
	template <typename T = int32_t> T get_Reset_type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E7C))(this);
	}
	template <typename T = void> T set_Reset_type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E84))(this, value);
	}
	template <typename T = int32_t> T get_Update_type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E8C))(this);
	}
	template <typename T = void> T set_Update_type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648E94))(this, value);
	}
	template <typename T = int32_t> T get_Order_type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648E9C))(this);
	}
	template <typename T = void> T set_Order_type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EA4))(this, value);
	}
	template <typename T = int32_t> T get_Multi_para() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648EAC))(this);
	}
	template <typename T = void> T set_Multi_para(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EB4))(this, value);
	}
	template <typename T = int32_t> T get_Total_rank_size() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648EBC))(this);
	}
	template <typename T = void> T set_Total_rank_size(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EC4))(this, value);
	}
	template <typename T = int32_t> T get_Top_rank_size() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648ECC))(this);
	}
	template <typename T = void> T set_Top_rank_size(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648ED4))(this, value);
	}
	template <typename T = int32_t> T get_Has_prize() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648EDC))(this);
	}
	template <typename T = void> T set_Has_prize(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EE4))(this, value);
	}
	template <typename T = int32_t> T get_Rank_Tab_Type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648D64))(this);
	}
	template <typename T = void> T set_Rank_Tab_Type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EEC))(this, value);
	}
	template <typename T = int32_t> T get_Rank_ChildTab_Type() {
		return ((T (*)(GameRanksConfig*))(Il2CppBase() + 0x4648D6C))(this);
	}
	template <typename T = void> T set_Rank_ChildTab_Type(int32_t value) {
		return ((T (*)(GameRanksConfig*, int32_t))(Il2CppBase() + 0x4648EF4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameRanksConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4648EFC))(this, bytes, position);
	}

};

}
