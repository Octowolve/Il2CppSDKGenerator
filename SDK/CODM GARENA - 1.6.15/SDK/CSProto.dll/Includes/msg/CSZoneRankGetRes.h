#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSZoneRankGetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSZoneRankGetRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _page_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_list() {
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
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B757C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSZoneRankGetRes*, int32_t))(Il2CppBase() + 0x51B7584))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B758C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSZoneRankGetRes*, int32_t))(Il2CppBase() + 0x51B7594))(this, value);
	}
	template <typename T = int32_t> T get_page_count() {
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B759C))(this);
	}
	template <typename T = void> T set_page_count(int32_t value) {
		return ((T (*)(CSZoneRankGetRes*, int32_t))(Il2CppBase() + 0x51B75A4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_list() {
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B75AC))(this);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B75B4))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(CSZoneRankGetRes*, uintptr_t))(Il2CppBase() + 0x51B75BC))(this, value);
	}
	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSZoneRankGetRes*))(Il2CppBase() + 0x51B75C4))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSZoneRankGetRes*, int32_t))(Il2CppBase() + 0x51B75CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSZoneRankGetRes*, bool))(Il2CppBase() + 0x51B75D4))(this, createIfMissing);
	}

};

}
