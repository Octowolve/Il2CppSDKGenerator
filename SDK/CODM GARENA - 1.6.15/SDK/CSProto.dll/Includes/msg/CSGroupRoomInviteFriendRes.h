#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomInviteFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomInviteFriendRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_lower_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_upper_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomInviteFriendRes*))(Il2CppBase() + 0x51DEB90))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendRes*, int32_t))(Il2CppBase() + 0x51DEB98))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_lower_level() {
		return ((T (*)(CSGroupRoomInviteFriendRes*))(Il2CppBase() + 0x51DEBA0))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_lower_level(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendRes*, int32_t))(Il2CppBase() + 0x51DEBA8))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_upper_level() {
		return ((T (*)(CSGroupRoomInviteFriendRes*))(Il2CppBase() + 0x51DEBB0))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_upper_level(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendRes*, int32_t))(Il2CppBase() + 0x51DEBB8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomInviteFriendRes*, bool))(Il2CppBase() + 0x51DEBC0))(this, createIfMissing);
	}

};

}
