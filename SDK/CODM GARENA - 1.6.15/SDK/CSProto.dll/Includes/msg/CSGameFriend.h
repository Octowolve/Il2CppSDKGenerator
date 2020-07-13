#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriend"));
	}

	template <typename T = uintptr_t> T& _friend_profile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _add_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _add_source() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_friend_profile() {
		return ((T (*)(CSGameFriend*))(Il2CppBase() + 0x51D1F3C))(this);
	}
	template <typename T = void> T set_friend_profile(uintptr_t value) {
		return ((T (*)(CSGameFriend*, uintptr_t))(Il2CppBase() + 0x51D1F44))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(CSGameFriend*))(Il2CppBase() + 0x51D1F4C))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(CSGameFriend*, int32_t))(Il2CppBase() + 0x51D1F54))(this, value);
	}
	template <typename T = uint32_t> T get_add_time() {
		return ((T (*)(CSGameFriend*))(Il2CppBase() + 0x51D1F5C))(this);
	}
	template <typename T = void> T set_add_time(uint32_t value) {
		return ((T (*)(CSGameFriend*, uint32_t))(Il2CppBase() + 0x51D1F64))(this, value);
	}
	template <typename T = int32_t> T get_add_source() {
		return ((T (*)(CSGameFriend*))(Il2CppBase() + 0x51D1F6C))(this);
	}
	template <typename T = void> T set_add_source(int32_t value) {
		return ((T (*)(CSGameFriend*, int32_t))(Il2CppBase() + 0x51D1F74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriend*, bool))(Il2CppBase() + 0x51D1F7C))(this, createIfMissing);
	}

};

}
