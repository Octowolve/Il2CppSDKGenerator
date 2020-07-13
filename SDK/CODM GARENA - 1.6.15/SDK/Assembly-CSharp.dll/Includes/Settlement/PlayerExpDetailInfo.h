#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PlayerExpDetailInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PlayerExpDetailInfo"));
	}

	template <typename T = uint32_t> T& win_add_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& kill_add_exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& buf_add_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& guild_add_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& friend_add_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& time_add_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& key_mode_add_exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& rank_add_exp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& survival_add_exp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint32_t> T get_win_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28EE4))(this);
	}
	template <typename T = void> T set_win_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28EEC))(this, value);
	}
	template <typename T = uint32_t> T get_kill_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28EF4))(this);
	}
	template <typename T = void> T set_kill_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28EFC))(this, value);
	}
	template <typename T = uint32_t> T get_buf_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F04))(this);
	}
	template <typename T = void> T set_buf_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F0C))(this, value);
	}
	template <typename T = uint32_t> T get_guild_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F14))(this);
	}
	template <typename T = void> T set_guild_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F1C))(this, value);
	}
	template <typename T = uint32_t> T get_friend_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F24))(this);
	}
	template <typename T = void> T set_friend_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F2C))(this, value);
	}
	template <typename T = uint32_t> T get_time_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F34))(this);
	}
	template <typename T = void> T set_time_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F3C))(this, value);
	}
	template <typename T = uint32_t> T get_key_mode_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F44))(this);
	}
	template <typename T = void> T set_key_mode_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F4C))(this, value);
	}
	template <typename T = uint32_t> T get_rank_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F54))(this);
	}
	template <typename T = void> T set_rank_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F5C))(this, value);
	}
	template <typename T = uint32_t> T get_survival_add_exp() {
		return ((T (*)(PlayerExpDetailInfo*))(Il2CppBase() + 0x3B28F64))(this);
	}
	template <typename T = void> T set_survival_add_exp(uint32_t value) {
		return ((T (*)(PlayerExpDetailInfo*, uint32_t))(Il2CppBase() + 0x3B28F6C))(this, value);
	}

};

}
