#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetCallBackRewardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetCallBackRewardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _player_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _reward_number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*))(Il2CppBase() + 0x5139180))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*, int32_t))(Il2CppBase() + 0x5139188))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_player_list() {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*))(Il2CppBase() + 0x5139190))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*))(Il2CppBase() + 0x5139198))(this);
	}
	template <typename T = int32_t> T get_reward_number() {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*))(Il2CppBase() + 0x51391A0))(this);
	}
	template <typename T = void> T set_reward_number(int32_t value) {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*, int32_t))(Il2CppBase() + 0x51391A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetCallBackRewardRes*, bool))(Il2CppBase() + 0x51391B0))(this, createIfMissing);
	}

};

}
