#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class StatisPrizeDetailInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "StatisPrizeDetailInfo"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& _add_exp_scale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& _add_gold_scale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(StatisPrizeDetailInfo*))(Il2CppBase() + 0x51A9978))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(StatisPrizeDetailInfo*, uint32_t))(Il2CppBase() + 0x51A9980))(this, value);
	}
	template <typename T = float> T get_add_exp_scale() {
		return ((T (*)(StatisPrizeDetailInfo*))(Il2CppBase() + 0x51A9988))(this);
	}
	template <typename T = void> T set_add_exp_scale(float value) {
		return ((T (*)(StatisPrizeDetailInfo*, float))(Il2CppBase() + 0x51A9990))(this, value);
	}
	template <typename T = float> T get_add_gold_scale() {
		return ((T (*)(StatisPrizeDetailInfo*))(Il2CppBase() + 0x51A9998))(this);
	}
	template <typename T = void> T set_add_gold_scale(float value) {
		return ((T (*)(StatisPrizeDetailInfo*, float))(Il2CppBase() + 0x51A99A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(StatisPrizeDetailInfo*, bool))(Il2CppBase() + 0x51A99A8))(this, createIfMissing);
	}

};

}
