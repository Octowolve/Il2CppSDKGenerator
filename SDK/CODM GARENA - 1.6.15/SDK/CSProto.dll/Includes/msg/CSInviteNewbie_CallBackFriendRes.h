#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieCallBackFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_CallBackFriendRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieCallBackFriendRes*))(Il2CppBase() + 0x5138E88))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieCallBackFriendRes*, int32_t))(Il2CppBase() + 0x5138E90))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSInviteNewbieCallBackFriendRes*))(Il2CppBase() + 0x5138E98))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSInviteNewbieCallBackFriendRes*, uint64_t))(Il2CppBase() + 0x5138EA0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieCallBackFriendRes*, bool))(Il2CppBase() + 0x5138EB0))(this, createIfMissing);
	}

};

}
