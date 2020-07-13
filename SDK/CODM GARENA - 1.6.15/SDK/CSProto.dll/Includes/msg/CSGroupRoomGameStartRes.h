#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomGameStartRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomGameStartRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_half_join() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _forbid_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _forbid_end_second() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _client_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomGameStartRes*))(Il2CppBase() + 0x51DE784))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomGameStartRes*, int32_t))(Il2CppBase() + 0x51DE78C))(this, value);
	}
	template <typename T = bool> T get_is_half_join() {
		return ((T (*)(CSGroupRoomGameStartRes*))(Il2CppBase() + 0x51DE794))(this);
	}
	template <typename T = void> T set_is_half_join(bool value) {
		return ((T (*)(CSGroupRoomGameStartRes*, bool))(Il2CppBase() + 0x51DE79C))(this, value);
	}
	template <typename T = uint64_t> T get_forbid_player_id() {
		return ((T (*)(CSGroupRoomGameStartRes*))(Il2CppBase() + 0x51DE7A4))(this);
	}
	template <typename T = void> T set_forbid_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomGameStartRes*, uint64_t))(Il2CppBase() + 0x51DE7AC))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_end_second() {
		return ((T (*)(CSGroupRoomGameStartRes*))(Il2CppBase() + 0x51DE7BC))(this);
	}
	template <typename T = void> T set_forbid_end_second(uint32_t value) {
		return ((T (*)(CSGroupRoomGameStartRes*, uint32_t))(Il2CppBase() + 0x51DE7C4))(this, value);
	}
	template <typename T = uint64_t> T get_client_flag() {
		return ((T (*)(CSGroupRoomGameStartRes*))(Il2CppBase() + 0x51DE7CC))(this);
	}
	template <typename T = void> T set_client_flag(uint64_t value) {
		return ((T (*)(CSGroupRoomGameStartRes*, uint64_t))(Il2CppBase() + 0x51DE7D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomGameStartRes*, bool))(Il2CppBase() + 0x51DE7E4))(this, createIfMissing);
	}

};

}
