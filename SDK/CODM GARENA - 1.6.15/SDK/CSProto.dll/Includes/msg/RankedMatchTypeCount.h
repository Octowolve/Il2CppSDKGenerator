#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RankedMatchTypeCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RankedMatchTypeCount"));
	}

	template <typename T = int32_t> T& _ranked_match_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _day_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _use_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _lower_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _upper_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _factor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_ranked_match_type() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x507037C))(this);
	}
	template <typename T = void> T set_ranked_match_type(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x5070384))(this, value);
	}
	template <typename T = int32_t> T get_day_num() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x507038C))(this);
	}
	template <typename T = void> T set_day_num(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x5070394))(this, value);
	}
	template <typename T = int32_t> T get_use_count() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x507039C))(this);
	}
	template <typename T = void> T set_use_count(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x50703A4))(this, value);
	}
	template <typename T = int32_t> T get_lower_level() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x50703AC))(this);
	}
	template <typename T = void> T set_lower_level(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x50703B4))(this, value);
	}
	template <typename T = int32_t> T get_upper_level() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x50703BC))(this);
	}
	template <typename T = void> T set_upper_level(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x50703C4))(this, value);
	}
	template <typename T = int32_t> T get_factor() {
		return ((T (*)(RankedMatchTypeCount*))(Il2CppBase() + 0x50703CC))(this);
	}
	template <typename T = void> T set_factor(int32_t value) {
		return ((T (*)(RankedMatchTypeCount*, int32_t))(Il2CppBase() + 0x50703D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RankedMatchTypeCount*, bool))(Il2CppBase() + 0x50703DC))(this, createIfMissing);
	}

};

}
