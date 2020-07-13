#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriendSetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriendSetRes"));
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
		return ((T (*)(CSGameFriendSetRes*))(Il2CppBase() + 0x51D2120))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGameFriendSetRes*, int32_t))(Il2CppBase() + 0x51D2128))(this, value);
	}
	template <typename T = uint32_t> T get_refuse_add_friend() {
		return ((T (*)(CSGameFriendSetRes*))(Il2CppBase() + 0x51D2130))(this);
	}
	template <typename T = void> T set_refuse_add_friend(uint32_t value) {
		return ((T (*)(CSGameFriendSetRes*, uint32_t))(Il2CppBase() + 0x51D2138))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriendSetRes*, bool))(Il2CppBase() + 0x51D2140))(this, createIfMissing);
	}

};

}
