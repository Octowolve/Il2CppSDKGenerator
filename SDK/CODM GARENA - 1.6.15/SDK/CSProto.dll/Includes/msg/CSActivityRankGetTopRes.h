#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityRankGetTopRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityRankGetTopRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _number_per_page() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _page_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _my_rank_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _activity_prize_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FA0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, int32_t))(Il2CppBase() + 0x5170FA8))(this, value);
	}
	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FB0))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, int32_t))(Il2CppBase() + 0x5170FB8))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FC0))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, int32_t))(Il2CppBase() + 0x5170FC8))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FD0))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, int32_t))(Il2CppBase() + 0x5170FD8))(this, value);
	}
	template <typename T = int32_t> T get_page_count() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FE0))(this);
	}
	template <typename T = void> T set_page_count(int32_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, int32_t))(Il2CppBase() + 0x5170FE8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_list() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FF0))(this);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5170FF8))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(CSActivityRankGetTopRes*, uintptr_t))(Il2CppBase() + 0x5171000))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_activity_prize_info() {
		return ((T (*)(CSActivityRankGetTopRes*))(Il2CppBase() + 0x5171008))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityRankGetTopRes*, bool))(Il2CppBase() + 0x5171010))(this, createIfMissing);
	}

};

}
