#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActivityBackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActivityBackInfo"));
	}

	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _login_refresh_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _day_number() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _login_reward_number() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _first_reward() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recommendation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _selected_reward_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _total_active() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _active_reward_number() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _first_match_reward() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _bp_reward_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510AC9C))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510ACA4))(this, value);
	}
	template <typename T = uint64_t> T get_login_refresh_time() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACAC))(this);
	}
	template <typename T = void> T set_login_refresh_time(uint64_t value) {
		return ((T (*)(ActivityBackInfo*, uint64_t))(Il2CppBase() + 0x510ACB4))(this, value);
	}
	template <typename T = int32_t> T get_day_number() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACC4))(this);
	}
	template <typename T = void> T set_day_number(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510ACCC))(this, value);
	}
	template <typename T = int32_t> T get_login_reward_number() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACD4))(this);
	}
	template <typename T = void> T set_login_reward_number(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510ACDC))(this, value);
	}
	template <typename T = bool> T get_first_reward() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACE4))(this);
	}
	template <typename T = void> T set_first_reward(bool value) {
		return ((T (*)(ActivityBackInfo*, bool))(Il2CppBase() + 0x510ACEC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recommendation() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACF4))(this);
	}
	template <typename T = int32_t> T get_selected_reward_id() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510ACFC))(this);
	}
	template <typename T = void> T set_selected_reward_id(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510AD04))(this, value);
	}
	template <typename T = int32_t> T get_total_active() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510AD0C))(this);
	}
	template <typename T = void> T set_total_active(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510AD14))(this, value);
	}
	template <typename T = int32_t> T get_active_reward_number() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510AD1C))(this);
	}
	template <typename T = void> T set_active_reward_number(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510AD24))(this, value);
	}
	template <typename T = bool> T get_first_match_reward() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510AD2C))(this);
	}
	template <typename T = void> T set_first_match_reward(bool value) {
		return ((T (*)(ActivityBackInfo*, bool))(Il2CppBase() + 0x510AD34))(this, value);
	}
	template <typename T = int32_t> T get_bp_reward_id() {
		return ((T (*)(ActivityBackInfo*))(Il2CppBase() + 0x510AD3C))(this);
	}
	template <typename T = void> T set_bp_reward_id(int32_t value) {
		return ((T (*)(ActivityBackInfo*, int32_t))(Il2CppBase() + 0x510AD44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActivityBackInfo*, bool))(Il2CppBase() + 0x510AD4C))(this, createIfMissing);
	}

};

}
