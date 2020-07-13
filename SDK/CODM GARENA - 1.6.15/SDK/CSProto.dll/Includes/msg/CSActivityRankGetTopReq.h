#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityRankGetTopReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityRankGetTopReq"));
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
		return ((T (*)(CSActivityRankGetTopReq*))(Il2CppBase() + 0x5170E74))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSActivityRankGetTopReq*, int32_t))(Il2CppBase() + 0x5170E7C))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSActivityRankGetTopReq*))(Il2CppBase() + 0x5170E84))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSActivityRankGetTopReq*, int32_t))(Il2CppBase() + 0x5170E8C))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSActivityRankGetTopReq*))(Il2CppBase() + 0x5170E94))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSActivityRankGetTopReq*, int32_t))(Il2CppBase() + 0x5170E9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityRankGetTopReq*, bool))(Il2CppBase() + 0x5170EA4))(this, createIfMissing);
	}

};

}
