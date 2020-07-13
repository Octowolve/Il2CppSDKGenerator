#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountGetSecondaryInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountGetSecondaryInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _game_stat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _guild_data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _player_stamina() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _InventoryData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _client_log_report_cond() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x5170160))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, int32_t))(Il2CppBase() + 0x5170168))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x5170170))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uint64_t))(Il2CppBase() + 0x5170178))(this, value);
	}
	template <typename T = uintptr_t> T get_game_stat() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x5170188))(this);
	}
	template <typename T = void> T set_game_stat(uintptr_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uintptr_t))(Il2CppBase() + 0x5170190))(this, value);
	}
	template <typename T = uintptr_t> T get_guild_data() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x5170198))(this);
	}
	template <typename T = void> T set_guild_data(uintptr_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uintptr_t))(Il2CppBase() + 0x51701A0))(this, value);
	}
	template <typename T = uint32_t> T get_player_stamina() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x51701A8))(this);
	}
	template <typename T = void> T set_player_stamina(uint32_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uint32_t))(Il2CppBase() + 0x51701B0))(this, value);
	}
	template <typename T = uintptr_t> T get_InventoryData() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x51701B8))(this);
	}
	template <typename T = void> T set_InventoryData(uintptr_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uintptr_t))(Il2CppBase() + 0x51701C0))(this, value);
	}
	template <typename T = uintptr_t> T get_client_log_report_cond() {
		return ((T (*)(CSAccountGetSecondaryInfoRes*))(Il2CppBase() + 0x51701C8))(this);
	}
	template <typename T = void> T set_client_log_report_cond(uintptr_t value) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, uintptr_t))(Il2CppBase() + 0x51701D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountGetSecondaryInfoRes*, bool))(Il2CppBase() + 0x51701D8))(this, createIfMissing);
	}

};

}
