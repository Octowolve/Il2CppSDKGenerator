#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerInviteRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerInviteRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _answer_flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _src_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomAnswerInviteRes*))(Il2CppBase() + 0x51DD7BC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, int32_t))(Il2CppBase() + 0x51DD7C4))(this, value);
	}
	template <typename T = uint32_t> T get_answer_flag() {
		return ((T (*)(CSGroupRoomAnswerInviteRes*))(Il2CppBase() + 0x51DD7CC))(this);
	}
	template <typename T = void> T set_answer_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, uint32_t))(Il2CppBase() + 0x51DD7D4))(this, value);
	}
	template <typename T = uint64_t> T get_src_player_id() {
		return ((T (*)(CSGroupRoomAnswerInviteRes*))(Il2CppBase() + 0x51DD7DC))(this);
	}
	template <typename T = void> T set_src_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, uint64_t))(Il2CppBase() + 0x51DD7E4))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomAnswerInviteRes*))(Il2CppBase() + 0x51DD7F4))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, uint32_t))(Il2CppBase() + 0x51DD7FC))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomAnswerInviteRes*))(Il2CppBase() + 0x51DD804))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, uint32_t))(Il2CppBase() + 0x51DD80C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerInviteRes*, bool))(Il2CppBase() + 0x51DD814))(this, createIfMissing);
	}

};

}
