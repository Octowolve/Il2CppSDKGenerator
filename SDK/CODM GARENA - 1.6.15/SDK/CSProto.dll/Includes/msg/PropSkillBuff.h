#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropSkillBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropSkillBuff"));
	}

	template <typename T = int32_t> T& _buff_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buff_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _immediate_effect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_buff_type() {
		return ((T (*)(PropSkillBuff*))(Il2CppBase() + 0x506EED4))(this);
	}
	template <typename T = void> T set_buff_type(int32_t value) {
		return ((T (*)(PropSkillBuff*, int32_t))(Il2CppBase() + 0x506EEDC))(this, value);
	}
	template <typename T = int32_t> T get_buff_value() {
		return ((T (*)(PropSkillBuff*))(Il2CppBase() + 0x506EEE4))(this);
	}
	template <typename T = void> T set_buff_value(int32_t value) {
		return ((T (*)(PropSkillBuff*, int32_t))(Il2CppBase() + 0x506EEEC))(this, value);
	}
	template <typename T = bool> T get_immediate_effect() {
		return ((T (*)(PropSkillBuff*))(Il2CppBase() + 0x506EEF4))(this);
	}
	template <typename T = void> T set_immediate_effect(bool value) {
		return ((T (*)(PropSkillBuff*, bool))(Il2CppBase() + 0x506EEFC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropSkillBuff*, bool))(Il2CppBase() + 0x506EF04))(this, createIfMissing);
	}

};

}
