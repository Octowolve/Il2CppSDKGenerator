#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendsRankRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendsRankRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_rankinfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _total_page_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _my_rank_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x5216798))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetFriendsRankRes*, int32_t))(Il2CppBase() + 0x52167A0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_rankinfo() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x52167A8))(this);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x52167B0))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendsRankRes*, int32_t))(Il2CppBase() + 0x52167B8))(this, value);
	}
	template <typename T = int32_t> T get_total_page_count() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x52167C0))(this);
	}
	template <typename T = void> T set_total_page_count(int32_t value) {
		return ((T (*)(CSGetFriendsRankRes*, int32_t))(Il2CppBase() + 0x52167C8))(this, value);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x52167D0))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(CSGetFriendsRankRes*, uintptr_t))(Il2CppBase() + 0x52167D8))(this, value);
	}
	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSGetFriendsRankRes*))(Il2CppBase() + 0x52167E0))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSGetFriendsRankRes*, int32_t))(Il2CppBase() + 0x52167E8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendsRankRes*, bool))(Il2CppBase() + 0x52167F0))(this, createIfMissing);
	}

};

}
