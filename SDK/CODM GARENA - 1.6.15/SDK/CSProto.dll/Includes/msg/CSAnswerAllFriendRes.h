#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAnswerAllFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAnswerAllFriendRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _add_friend_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _answer_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _result_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _page_friend_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _punish_item() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, int32_t))(Il2CppBase() + 0x51E45B0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_add_friend_list() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45B8))(this);
	}
	template <typename T = uint32_t> T get_answer_flag() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45C0))(this);
	}
	template <typename T = void> T set_answer_flag(uint32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, uint32_t))(Il2CppBase() + 0x51E45C8))(this, value);
	}
	template <typename T = uint32_t> T get_result_flag() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45D0))(this);
	}
	template <typename T = void> T set_result_flag(uint32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, uint32_t))(Il2CppBase() + 0x51E45D8))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45E0))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, int32_t))(Il2CppBase() + 0x51E45E8))(this, value);
	}
	template <typename T = int32_t> T get_page_friend_count() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E45F0))(this);
	}
	template <typename T = void> T set_page_friend_count(int32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, int32_t))(Il2CppBase() + 0x51E45F8))(this, value);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E4600))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, int32_t))(Il2CppBase() + 0x51E4608))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_item() {
		return ((T (*)(CSAnswerAllFriendRes*))(Il2CppBase() + 0x51E4610))(this);
	}
	template <typename T = void> T set_punish_item(uintptr_t value) {
		return ((T (*)(CSAnswerAllFriendRes*, uintptr_t))(Il2CppBase() + 0x51E4618))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAnswerAllFriendRes*, bool))(Il2CppBase() + 0x51E4620))(this, createIfMissing);
	}

};

}
