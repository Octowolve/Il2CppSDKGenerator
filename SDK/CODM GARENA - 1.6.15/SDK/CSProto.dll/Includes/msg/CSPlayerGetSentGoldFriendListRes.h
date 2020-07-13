#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerGetSentGoldFriendListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerGetSentGoldFriendListRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _friend_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPlayerGetSentGoldFriendListRes*))(Il2CppBase() + 0x51F14AC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPlayerGetSentGoldFriendListRes*, int32_t))(Il2CppBase() + 0x51F14B4))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_friend_id() {
		return ((T (*)(CSPlayerGetSentGoldFriendListRes*))(Il2CppBase() + 0x51F14BC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerGetSentGoldFriendListRes*, bool))(Il2CppBase() + 0x51F14C4))(this, createIfMissing);
	}

};

}
