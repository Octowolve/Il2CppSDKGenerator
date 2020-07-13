#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRankGetTopRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRankGetTopRes"));
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
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E0150))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRankGetTopRes*, int32_t))(Il2CppBase() + 0x51E0158))(this, value);
	}
	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E0160))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSRankGetTopRes*, int32_t))(Il2CppBase() + 0x51E0168))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E0170))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSRankGetTopRes*, int32_t))(Il2CppBase() + 0x51E0178))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E0180))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSRankGetTopRes*, int32_t))(Il2CppBase() + 0x51E0188))(this, value);
	}
	template <typename T = int32_t> T get_page_count() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E0190))(this);
	}
	template <typename T = void> T set_page_count(int32_t value) {
		return ((T (*)(CSRankGetTopRes*, int32_t))(Il2CppBase() + 0x51E0198))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_list() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E01A0))(this);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(CSRankGetTopRes*))(Il2CppBase() + 0x51E01A8))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(CSRankGetTopRes*, uintptr_t))(Il2CppBase() + 0x51E01B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRankGetTopRes*, bool))(Il2CppBase() + 0x51E01B8))(this, createIfMissing);
	}

};

}
