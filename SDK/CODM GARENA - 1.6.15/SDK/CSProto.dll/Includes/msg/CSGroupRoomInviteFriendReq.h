#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomInviteFriendReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomInviteFriendReq"));
	}

	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _invite_source() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSGroupRoomInviteFriendReq*))(Il2CppBase() + 0x51DEB3C))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomInviteFriendReq*, uint64_t))(Il2CppBase() + 0x51DEB44))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(CSGroupRoomInviteFriendReq*))(Il2CppBase() + 0x51DEB54))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendReq*, int32_t))(Il2CppBase() + 0x51DEB5C))(this, value);
	}
	template <typename T = uint32_t> T get_invite_source() {
		return ((T (*)(CSGroupRoomInviteFriendReq*))(Il2CppBase() + 0x51DEB64))(this);
	}
	template <typename T = void> T set_invite_source(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendReq*, uint32_t))(Il2CppBase() + 0x51DEB6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomInviteFriendReq*, bool))(Il2CppBase() + 0x51DEB74))(this, createIfMissing);
	}

};

}
