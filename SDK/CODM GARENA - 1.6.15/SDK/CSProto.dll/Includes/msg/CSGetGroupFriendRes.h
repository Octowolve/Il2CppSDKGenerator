#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetGroupFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetGroupFriendRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _group_player() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _page_friend_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B54))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetGroupFriendRes*, int32_t))(Il2CppBase() + 0x5216B5C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_group_player() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B64))(this);
	}
	template <typename T = uint32_t> T get_type() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B6C))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(CSGetGroupFriendRes*, uint32_t))(Il2CppBase() + 0x5216B74))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B7C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetGroupFriendRes*, int32_t))(Il2CppBase() + 0x5216B84))(this, value);
	}
	template <typename T = int32_t> T get_page_friend_count() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B8C))(this);
	}
	template <typename T = void> T set_page_friend_count(int32_t value) {
		return ((T (*)(CSGetGroupFriendRes*, int32_t))(Il2CppBase() + 0x5216B94))(this, value);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSGetGroupFriendRes*))(Il2CppBase() + 0x5216B9C))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSGetGroupFriendRes*, int32_t))(Il2CppBase() + 0x5216BA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetGroupFriendRes*, bool))(Il2CppBase() + 0x5216BAC))(this, createIfMissing);
	}

};

}
