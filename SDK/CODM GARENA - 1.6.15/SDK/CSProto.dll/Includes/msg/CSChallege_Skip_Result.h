#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallegeSkipResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallege_Skip_Result"));
	}

	template <typename T = int32_t> T& _round_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _score_multiple() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _score_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _gold_multiple() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _gold_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_round_id() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5C8C))(this);
	}
	template <typename T = void> T set_round_id(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5C94))(this, value);
	}
	template <typename T = int32_t> T get_score_multiple() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5C9C))(this);
	}
	template <typename T = void> T set_score_multiple(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5CA4))(this, value);
	}
	template <typename T = int32_t> T get_score_value() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5CAC))(this);
	}
	template <typename T = void> T set_score_value(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5CB4))(this, value);
	}
	template <typename T = int32_t> T get_gold_multiple() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5CBC))(this);
	}
	template <typename T = void> T set_gold_multiple(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5CC4))(this, value);
	}
	template <typename T = int32_t> T get_gold_value() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5CCC))(this);
	}
	template <typename T = void> T set_gold_value(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5CD4))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallegeSkipResult*))(Il2CppBase() + 0x51E5CDC))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallegeSkipResult*, int32_t))(Il2CppBase() + 0x51E5CE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallegeSkipResult*, bool))(Il2CppBase() + 0x51E5CEC))(this, createIfMissing);
	}

};

}
