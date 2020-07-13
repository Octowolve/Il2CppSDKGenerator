#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetCallBackInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetCallBackInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _call_back_player() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _back_player() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _reward_number() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _start_timestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _end_timestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _show_tips() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _min_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _leave_sec() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5138FD8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, int32_t))(Il2CppBase() + 0x5138FE0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_call_back_player() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5138FE8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_back_player() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5138FF0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5138FF8))(this);
	}
	template <typename T = int32_t> T get_reward_number() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139000))(this);
	}
	template <typename T = void> T set_reward_number(int32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, int32_t))(Il2CppBase() + 0x5139008))(this, value);
	}
	template <typename T = uint64_t> T get_start_timestamp() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139010))(this);
	}
	template <typename T = void> T set_start_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, uint64_t))(Il2CppBase() + 0x5139018))(this, value);
	}
	template <typename T = uint64_t> T get_end_timestamp() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139028))(this);
	}
	template <typename T = void> T set_end_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, uint64_t))(Il2CppBase() + 0x5139030))(this, value);
	}
	template <typename T = bool> T get_show_tips() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139040))(this);
	}
	template <typename T = void> T set_show_tips(bool value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, bool))(Il2CppBase() + 0x5139048))(this, value);
	}
	template <typename T = uint32_t> T get_min_level() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139050))(this);
	}
	template <typename T = void> T set_min_level(uint32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, uint32_t))(Il2CppBase() + 0x5139058))(this, value);
	}
	template <typename T = uint32_t> T get_leave_sec() {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*))(Il2CppBase() + 0x5139060))(this);
	}
	template <typename T = void> T set_leave_sec(uint32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, uint32_t))(Il2CppBase() + 0x5139068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetCallBackInfoRes*, bool))(Il2CppBase() + 0x5139070))(this, createIfMissing);
	}

};

}
