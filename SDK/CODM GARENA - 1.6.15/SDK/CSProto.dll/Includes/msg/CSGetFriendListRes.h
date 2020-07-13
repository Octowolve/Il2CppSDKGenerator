#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendListRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _page_friend_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _serial_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x5216644))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetFriendListRes*, int32_t))(Il2CppBase() + 0x521664C))(this, value);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x5216654))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSGetFriendListRes*, int32_t))(Il2CppBase() + 0x521665C))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x5216664))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendListRes*, int32_t))(Il2CppBase() + 0x521666C))(this, value);
	}
	template <typename T = int32_t> T get_page_friend_count() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x5216674))(this);
	}
	template <typename T = void> T set_page_friend_count(int32_t value) {
		return ((T (*)(CSGetFriendListRes*, int32_t))(Il2CppBase() + 0x521667C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_list() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x5216684))(this);
	}
	template <typename T = uint32_t> T get_serial_id() {
		return ((T (*)(CSGetFriendListRes*))(Il2CppBase() + 0x521668C))(this);
	}
	template <typename T = void> T set_serial_id(uint32_t value) {
		return ((T (*)(CSGetFriendListRes*, uint32_t))(Il2CppBase() + 0x5216694))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendListRes*, bool))(Il2CppBase() + 0x521669C))(this, createIfMissing);
	}

};

}
