#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RankedMatchTypeCountInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RankedMatchTypeCountInfo"));
	}

	template <typename T = int32_t> T& _ranked_match_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _use_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_ranked_match_type() {
		return ((T (*)(RankedMatchTypeCountInfo*))(Il2CppBase() + 0x50703F8))(this);
	}
	template <typename T = void> T set_ranked_match_type(int32_t value) {
		return ((T (*)(RankedMatchTypeCountInfo*, int32_t))(Il2CppBase() + 0x5070400))(this, value);
	}
	template <typename T = int32_t> T get_use_count() {
		return ((T (*)(RankedMatchTypeCountInfo*))(Il2CppBase() + 0x5070408))(this);
	}
	template <typename T = void> T set_use_count(int32_t value) {
		return ((T (*)(RankedMatchTypeCountInfo*, int32_t))(Il2CppBase() + 0x5070410))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RankedMatchTypeCountInfo*, bool))(Il2CppBase() + 0x5070418))(this, createIfMissing);
	}

};

}
