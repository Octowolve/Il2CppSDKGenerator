#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PrizeConfig"));
	}

	template <typename T = int32_t> T& _add_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _add_gold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _box_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _prize_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _add_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_add_exp() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFAC))(this);
	}
	template <typename T = void> T set_add_exp(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506DFB4))(this, value);
	}
	template <typename T = int32_t> T get_add_gold() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFBC))(this);
	}
	template <typename T = void> T set_add_gold(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506DFC4))(this, value);
	}
	template <typename T = int32_t> T get_box_id() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFCC))(this);
	}
	template <typename T = void> T set_box_id(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506DFD4))(this, value);
	}
	template <typename T = int32_t> T get_box_num() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFDC))(this);
	}
	template <typename T = void> T set_box_num(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506DFE4))(this, value);
	}
	template <typename T = int32_t> T get_prize_num() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFEC))(this);
	}
	template <typename T = void> T set_prize_num(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506DFF4))(this, value);
	}
	template <typename T = int32_t> T get_add_apvp_gold() {
		return ((T (*)(PrizeConfig*))(Il2CppBase() + 0x506DFFC))(this);
	}
	template <typename T = void> T set_add_apvp_gold(int32_t value) {
		return ((T (*)(PrizeConfig*, int32_t))(Il2CppBase() + 0x506E004))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PrizeConfig*, bool))(Il2CppBase() + 0x506E00C))(this, createIfMissing);
	}

};

}
