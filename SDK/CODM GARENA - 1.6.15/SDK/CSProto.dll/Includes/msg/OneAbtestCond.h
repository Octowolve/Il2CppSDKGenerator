#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OneAbtestCond
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OneAbtestCond"));
	}

	template <typename T = uint32_t> T& _abtest_cond_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _abtest_cond_sub_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _abtest_cond_sub_type2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _abtest_cond_value1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _abtest_cond_value2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _abtest_cond_value3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _abtest_cond_value4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_abtest_cond_type() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5834))(this);
	}
	template <typename T = void> T set_abtest_cond_type(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA583C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_sub_type() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5844))(this);
	}
	template <typename T = void> T set_abtest_cond_sub_type(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA584C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_sub_type2() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5854))(this);
	}
	template <typename T = void> T set_abtest_cond_sub_type2(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA585C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_value1() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5864))(this);
	}
	template <typename T = void> T set_abtest_cond_value1(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA586C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_value2() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5874))(this);
	}
	template <typename T = void> T set_abtest_cond_value2(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA587C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_value3() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5884))(this);
	}
	template <typename T = void> T set_abtest_cond_value3(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA588C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_value4() {
		return ((T (*)(OneAbtestCond*))(Il2CppBase() + 0x4EA5894))(this);
	}
	template <typename T = void> T set_abtest_cond_value4(uint32_t value) {
		return ((T (*)(OneAbtestCond*, uint32_t))(Il2CppBase() + 0x4EA589C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OneAbtestCond*, bool))(Il2CppBase() + 0x4EA58A4))(this, createIfMissing);
	}

};

}
