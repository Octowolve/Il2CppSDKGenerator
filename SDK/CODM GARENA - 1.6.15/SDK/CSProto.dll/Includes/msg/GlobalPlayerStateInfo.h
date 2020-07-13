#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GlobalPlayerStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GlobalPlayerStateInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _grouproom_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _conn_bus_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _login_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _is_enable() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _logout_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _matchroom_addr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _exp_level() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CD9B8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint64_t))(Il2CppBase() + 0x50CD9C0))(this, value);
	}
	template <typename T = int32_t> T get_state() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CD9D0))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, int32_t))(Il2CppBase() + 0x50CD9D8))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CD9E0))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint32_t))(Il2CppBase() + 0x50CD9E8))(this, value);
	}
	template <typename T = uint64_t> T get_grouproom_id() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CD9F0))(this);
	}
	template <typename T = void> T set_grouproom_id(uint64_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint64_t))(Il2CppBase() + 0x50CD9F8))(this, value);
	}
	template <typename T = int32_t> T get_conn_bus_id() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA08))(this);
	}
	template <typename T = void> T set_conn_bus_id(int32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, int32_t))(Il2CppBase() + 0x50CDA10))(this, value);
	}
	template <typename T = uint64_t> T get_login_time() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA18))(this);
	}
	template <typename T = void> T set_login_time(uint64_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint64_t))(Il2CppBase() + 0x50CDA20))(this, value);
	}
	template <typename T = bool> T get_is_enable() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA30))(this);
	}
	template <typename T = void> T set_is_enable(bool value) {
		return ((T (*)(GlobalPlayerStateInfo*, bool))(Il2CppBase() + 0x50CDA38))(this, value);
	}
	template <typename T = uint64_t> T get_logout_time() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA40))(this);
	}
	template <typename T = void> T set_logout_time(uint64_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint64_t))(Il2CppBase() + 0x50CDA48))(this, value);
	}
	template <typename T = uint32_t> T get_matchroom_addr() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA58))(this);
	}
	template <typename T = void> T set_matchroom_addr(uint32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint32_t))(Il2CppBase() + 0x50CDA60))(this, value);
	}
	template <typename T = uint32_t> T get_exp_level() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA68))(this);
	}
	template <typename T = void> T set_exp_level(uint32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint32_t))(Il2CppBase() + 0x50CDA70))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA78))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint32_t))(Il2CppBase() + 0x50CDA80))(this, value);
	}
	template <typename T = uint32_t> T get_service_module() {
		return ((T (*)(GlobalPlayerStateInfo*))(Il2CppBase() + 0x50CDA88))(this);
	}
	template <typename T = void> T set_service_module(uint32_t value) {
		return ((T (*)(GlobalPlayerStateInfo*, uint32_t))(Il2CppBase() + 0x50CDA90))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GlobalPlayerStateInfo*, bool))(Il2CppBase() + 0x50CDA98))(this, createIfMissing);
	}

};

}
