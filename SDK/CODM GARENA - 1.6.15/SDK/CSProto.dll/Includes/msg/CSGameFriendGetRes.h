#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriendGetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriendGetRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _refuse_add_friend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGameFriendGetRes*))(Il2CppBase() + 0x51D1FB4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGameFriendGetRes*, int32_t))(Il2CppBase() + 0x51D1FBC))(this, value);
	}
	template <typename T = uint32_t> T get_refuse_add_friend() {
		return ((T (*)(CSGameFriendGetRes*))(Il2CppBase() + 0x51D1FC4))(this);
	}
	template <typename T = void> T set_refuse_add_friend(uint32_t value) {
		return ((T (*)(CSGameFriendGetRes*, uint32_t))(Il2CppBase() + 0x51D1FCC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriendGetRes*, bool))(Il2CppBase() + 0x51D1FD4))(this, createIfMissing);
	}

};

}
