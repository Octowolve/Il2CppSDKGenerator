#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterFetchFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapter_FetchFriend_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _difficult() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterFetchFriendRes*))(Il2CppBase() + 0x51CF3A0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterFetchFriendRes*, int32_t))(Il2CppBase() + 0x51CF3A8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_list() {
		return ((T (*)(CSChapterFetchFriendRes*))(Il2CppBase() + 0x51CF3B0))(this);
	}
	template <typename T = int32_t> T get_difficult() {
		return ((T (*)(CSChapterFetchFriendRes*))(Il2CppBase() + 0x51CF3B8))(this);
	}
	template <typename T = void> T set_difficult(int32_t value) {
		return ((T (*)(CSChapterFetchFriendRes*, int32_t))(Il2CppBase() + 0x51CF3C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterFetchFriendRes*, bool))(Il2CppBase() + 0x51CF3C8))(this, createIfMissing);
	}

};

}
