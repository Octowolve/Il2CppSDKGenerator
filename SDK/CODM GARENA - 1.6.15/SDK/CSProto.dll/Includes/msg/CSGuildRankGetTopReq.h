#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildRankGetTopReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuildRankGetTopReq"));
	}

	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _number_per_page() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSGuildRankGetTopReq*))(Il2CppBase() + 0x51DC5E4))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSGuildRankGetTopReq*, int32_t))(Il2CppBase() + 0x51DC5EC))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGuildRankGetTopReq*))(Il2CppBase() + 0x51DC5F4))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGuildRankGetTopReq*, int32_t))(Il2CppBase() + 0x51DC5FC))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSGuildRankGetTopReq*))(Il2CppBase() + 0x51DC604))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSGuildRankGetTopReq*, int32_t))(Il2CppBase() + 0x51DC60C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildRankGetTopReq*, bool))(Il2CppBase() + 0x51DC614))(this, createIfMissing);
	}

};

}
