#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendGetBlacklistRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendGetBlacklistRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _blacklist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendGetBlacklistRes*))(Il2CppBase() + 0x5227C08))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendGetBlacklistRes*, int32_t))(Il2CppBase() + 0x5227C10))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_blacklist() {
		return ((T (*)(GameFriendGetBlacklistRes*))(Il2CppBase() + 0x5227C18))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendGetBlacklistRes*, bool))(Il2CppBase() + 0x5227C20))(this, createIfMissing);
	}

};

}
