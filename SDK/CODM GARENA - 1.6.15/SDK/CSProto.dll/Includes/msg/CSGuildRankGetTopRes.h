#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildRankGetTopRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuildRankGetTopRes"));
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
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC6DC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, int32_t))(Il2CppBase() + 0x51DC6E4))(this, value);
	}
	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC6EC))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, int32_t))(Il2CppBase() + 0x51DC6F4))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC6FC))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, int32_t))(Il2CppBase() + 0x51DC704))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC70C))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, int32_t))(Il2CppBase() + 0x51DC714))(this, value);
	}
	template <typename T = int32_t> T get_page_count() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC71C))(this);
	}
	template <typename T = void> T set_page_count(int32_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, int32_t))(Il2CppBase() + 0x51DC724))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_list() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC72C))(this);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(CSGuildRankGetTopRes*))(Il2CppBase() + 0x51DC734))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(CSGuildRankGetTopRes*, uintptr_t))(Il2CppBase() + 0x51DC73C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildRankGetTopRes*, bool))(Il2CppBase() + 0x51DC744))(this, createIfMissing);
	}

};

}
