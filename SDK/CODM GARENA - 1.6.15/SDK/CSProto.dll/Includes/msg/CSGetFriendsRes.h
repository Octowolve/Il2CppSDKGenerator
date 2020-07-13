#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _page_friend_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x52168F4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetFriendsRes*, int32_t))(Il2CppBase() + 0x52168FC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_list() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x5216904))(this);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x521690C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendsRes*, int32_t))(Il2CppBase() + 0x5216914))(this, value);
	}
	template <typename T = int32_t> T get_page_friend_count() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x521691C))(this);
	}
	template <typename T = void> T set_page_friend_count(int32_t value) {
		return ((T (*)(CSGetFriendsRes*, int32_t))(Il2CppBase() + 0x5216924))(this, value);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x521692C))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSGetFriendsRes*, int32_t))(Il2CppBase() + 0x5216934))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGetFriendsRes*))(Il2CppBase() + 0x521693C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGetFriendsRes*, int32_t))(Il2CppBase() + 0x5216944))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendsRes*, bool))(Il2CppBase() + 0x521694C))(this, createIfMissing);
	}

};

}
