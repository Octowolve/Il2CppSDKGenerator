#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendGetNewMessageNumRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendGetNewMessageNumRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _new_message_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendGetNewMessageNumRes*))(Il2CppBase() + 0x50CCB10))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendGetNewMessageNumRes*, int32_t))(Il2CppBase() + 0x50CCB18))(this, value);
	}
	template <typename T = int32_t> T get_new_message_num() {
		return ((T (*)(GameFriendGetNewMessageNumRes*))(Il2CppBase() + 0x50CCB20))(this);
	}
	template <typename T = void> T set_new_message_num(int32_t value) {
		return ((T (*)(GameFriendGetNewMessageNumRes*, int32_t))(Il2CppBase() + 0x50CCB28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendGetNewMessageNumRes*, bool))(Il2CppBase() + 0x50CCB30))(this, createIfMissing);
	}

};

}
