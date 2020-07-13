#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriendShieldConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriendShieldConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _common_shiled_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _guest_shiled_conf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _isclose_avatar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_close_messenger() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGameFriendShieldConfRes*))(Il2CppBase() + 0x51D2178))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGameFriendShieldConfRes*, int32_t))(Il2CppBase() + 0x51D2180))(this, value);
	}
	template <typename T = uintptr_t> T get_common_shiled_conf() {
		return ((T (*)(CSGameFriendShieldConfRes*))(Il2CppBase() + 0x51D2188))(this);
	}
	template <typename T = void> T set_common_shiled_conf(uintptr_t value) {
		return ((T (*)(CSGameFriendShieldConfRes*, uintptr_t))(Il2CppBase() + 0x51D2190))(this, value);
	}
	template <typename T = uintptr_t> T get_guest_shiled_conf() {
		return ((T (*)(CSGameFriendShieldConfRes*))(Il2CppBase() + 0x51D2198))(this);
	}
	template <typename T = void> T set_guest_shiled_conf(uintptr_t value) {
		return ((T (*)(CSGameFriendShieldConfRes*, uintptr_t))(Il2CppBase() + 0x51D21A0))(this, value);
	}
	template <typename T = bool> T get_isclose_avatar() {
		return ((T (*)(CSGameFriendShieldConfRes*))(Il2CppBase() + 0x51D21A8))(this);
	}
	template <typename T = void> T set_isclose_avatar(bool value) {
		return ((T (*)(CSGameFriendShieldConfRes*, bool))(Il2CppBase() + 0x51D21B0))(this, value);
	}
	template <typename T = bool> T get_is_close_messenger() {
		return ((T (*)(CSGameFriendShieldConfRes*))(Il2CppBase() + 0x51D21B8))(this);
	}
	template <typename T = void> T set_is_close_messenger(bool value) {
		return ((T (*)(CSGameFriendShieldConfRes*, bool))(Il2CppBase() + 0x51D21C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriendShieldConfRes*, bool))(Il2CppBase() + 0x51D21C8))(this, createIfMissing);
	}

};

}
