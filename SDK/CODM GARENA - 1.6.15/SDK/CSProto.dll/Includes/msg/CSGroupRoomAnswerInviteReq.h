#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerInviteReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerInviteReq"));
	}

	template <typename T = uint32_t> T& _answer_flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _src_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& _profile() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _phone_perf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _check_sum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _invite_source() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uint32_t> T get_answer_flag() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD6E0))(this);
	}
	template <typename T = void> T set_answer_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint32_t))(Il2CppBase() + 0x51DD6E8))(this, value);
	}
	template <typename T = uint64_t> T get_src_player_id() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD6F0))(this);
	}
	template <typename T = void> T set_src_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint64_t))(Il2CppBase() + 0x51DD6F8))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD708))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint32_t))(Il2CppBase() + 0x51DD710))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD718))(this);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD720))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, bool))(Il2CppBase() + 0x51DD728))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD730))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, bool))(Il2CppBase() + 0x51DD738))(this, value);
	}
	template <typename T = uintptr_t> T get_profile() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD740))(this);
	}
	template <typename T = void> T set_profile(uintptr_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uintptr_t))(Il2CppBase() + 0x51DD748))(this, value);
	}
	template <typename T = uint32_t> T get_phone_perf() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD750))(this);
	}
	template <typename T = void> T set_phone_perf(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint32_t))(Il2CppBase() + 0x51DD758))(this, value);
	}
	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD760))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint64_t))(Il2CppBase() + 0x51DD768))(this, value);
	}
	template <typename T = uint64_t> T get_check_sum() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD778))(this);
	}
	template <typename T = void> T set_check_sum(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint64_t))(Il2CppBase() + 0x51DD780))(this, value);
	}
	template <typename T = uint32_t> T get_invite_source() {
		return ((T (*)(CSGroupRoomAnswerInviteReq*))(Il2CppBase() + 0x51DD790))(this);
	}
	template <typename T = void> T set_invite_source(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, uint32_t))(Il2CppBase() + 0x51DD798))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerInviteReq*, bool))(Il2CppBase() + 0x51DD7A0))(this, createIfMissing);
	}

};

}
