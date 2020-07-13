#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendGetMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendGetMessageRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _message_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _refuse_add_friend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendGetMessageRes*))(Il2CppBase() + 0x5227DF0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendGetMessageRes*, int32_t))(Il2CppBase() + 0x5227DF8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_message_list() {
		return ((T (*)(GameFriendGetMessageRes*))(Il2CppBase() + 0x5227E00))(this);
	}
	template <typename T = uint32_t> T get_refuse_add_friend() {
		return ((T (*)(GameFriendGetMessageRes*))(Il2CppBase() + 0x5227E08))(this);
	}
	template <typename T = void> T set_refuse_add_friend(uint32_t value) {
		return ((T (*)(GameFriendGetMessageRes*, uint32_t))(Il2CppBase() + 0x5227E10))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendGetMessageRes*, bool))(Il2CppBase() + 0x5227E18))(this, createIfMissing);
	}

};

}
