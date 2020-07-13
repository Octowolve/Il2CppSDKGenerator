#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendAddMessageNotify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendAddMessageNotify"));
	}

	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_message() {
		return ((T (*)(GameFriendAddMessageNotify*))(Il2CppBase() + 0x52278E4))(this);
	}
	template <typename T = void> T set_message(uintptr_t value) {
		return ((T (*)(GameFriendAddMessageNotify*, uintptr_t))(Il2CppBase() + 0x52278EC))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(GameFriendAddMessageNotify*))(Il2CppBase() + 0x52278F4))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(GameFriendAddMessageNotify*, int32_t))(Il2CppBase() + 0x52278FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendAddMessageNotify*, bool))(Il2CppBase() + 0x5227904))(this, createIfMissing);
	}

};

}
