#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ProfessionChipStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ProfessionChipStatis"));
	}

	template <typename T = uint32_t> T& _chip_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _use_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _choose_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _total_kills() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _effect_param1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _effect_param2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _effect_param3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _uplevel_times() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_chip_id() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E120))(this);
	}
	template <typename T = void> T set_chip_id(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E128))(this, value);
	}
	template <typename T = uint32_t> T get_use_times() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E130))(this);
	}
	template <typename T = void> T set_use_times(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E138))(this, value);
	}
	template <typename T = uint32_t> T get_choose_times() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E140))(this);
	}
	template <typename T = void> T set_choose_times(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E148))(this, value);
	}
	template <typename T = uint32_t> T get_total_kills() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E150))(this);
	}
	template <typename T = void> T set_total_kills(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E158))(this, value);
	}
	template <typename T = uint32_t> T get_effect_param1() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E160))(this);
	}
	template <typename T = void> T set_effect_param1(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E168))(this, value);
	}
	template <typename T = uint32_t> T get_effect_param2() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E170))(this);
	}
	template <typename T = void> T set_effect_param2(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E178))(this, value);
	}
	template <typename T = uint32_t> T get_effect_param3() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E180))(this);
	}
	template <typename T = void> T set_effect_param3(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E188))(this, value);
	}
	template <typename T = uint32_t> T get_uplevel_times() {
		return ((T (*)(ProfessionChipStatis*))(Il2CppBase() + 0x506E190))(this);
	}
	template <typename T = void> T set_uplevel_times(uint32_t value) {
		return ((T (*)(ProfessionChipStatis*, uint32_t))(Il2CppBase() + 0x506E198))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ProfessionChipStatis*, bool))(Il2CppBase() + 0x506E1A0))(this, createIfMissing);
	}

};

}
