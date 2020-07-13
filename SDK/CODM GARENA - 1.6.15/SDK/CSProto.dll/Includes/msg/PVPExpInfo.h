#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVPExpInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVPExpInfo"));
	}

	template <typename T = uint32_t> T& _time_add_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _win_add_exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _kill_add_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _buf_add_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _guild_add_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _friend_add_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _key_mode_add_exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _actv_add_exp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_time_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF10))(this);
	}
	template <typename T = void> T set_time_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF18))(this, value);
	}
	template <typename T = uint32_t> T get_win_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF20))(this);
	}
	template <typename T = void> T set_win_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF28))(this, value);
	}
	template <typename T = uint32_t> T get_kill_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF30))(this);
	}
	template <typename T = void> T set_kill_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF38))(this, value);
	}
	template <typename T = uint32_t> T get_buf_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF40))(this);
	}
	template <typename T = void> T set_buf_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF48))(this, value);
	}
	template <typename T = uint32_t> T get_guild_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF50))(this);
	}
	template <typename T = void> T set_guild_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF58))(this, value);
	}
	template <typename T = uint32_t> T get_friend_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF60))(this);
	}
	template <typename T = void> T set_friend_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF68))(this, value);
	}
	template <typename T = uint32_t> T get_key_mode_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF70))(this);
	}
	template <typename T = void> T set_key_mode_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF78))(this, value);
	}
	template <typename T = uint32_t> T get_actv_add_exp() {
		return ((T (*)(PVPExpInfo*))(Il2CppBase() + 0x506FF80))(this);
	}
	template <typename T = void> T set_actv_add_exp(uint32_t value) {
		return ((T (*)(PVPExpInfo*, uint32_t))(Il2CppBase() + 0x506FF88))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVPExpInfo*, bool))(Il2CppBase() + 0x506FF90))(this, createIfMissing);
	}

};

}
