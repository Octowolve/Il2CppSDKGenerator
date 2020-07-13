#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BonusPrivilegeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BonusPrivilegeData"));
	}

	template <typename T = int32_t> T& _time_zone() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _exp_bonus() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _gold_bonus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _drop_bonus() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_time_zone() {
		return ((T (*)(BonusPrivilegeData*))(Il2CppBase() + 0x510D4AC))(this);
	}
	template <typename T = void> T set_time_zone(int32_t value) {
		return ((T (*)(BonusPrivilegeData*, int32_t))(Il2CppBase() + 0x510D4B4))(this, value);
	}
	template <typename T = int32_t> T get_exp_bonus() {
		return ((T (*)(BonusPrivilegeData*))(Il2CppBase() + 0x510D4BC))(this);
	}
	template <typename T = void> T set_exp_bonus(int32_t value) {
		return ((T (*)(BonusPrivilegeData*, int32_t))(Il2CppBase() + 0x510D4C4))(this, value);
	}
	template <typename T = int32_t> T get_gold_bonus() {
		return ((T (*)(BonusPrivilegeData*))(Il2CppBase() + 0x510D4CC))(this);
	}
	template <typename T = void> T set_gold_bonus(int32_t value) {
		return ((T (*)(BonusPrivilegeData*, int32_t))(Il2CppBase() + 0x510D4D4))(this, value);
	}
	template <typename T = int32_t> T get_drop_bonus() {
		return ((T (*)(BonusPrivilegeData*))(Il2CppBase() + 0x510D4DC))(this);
	}
	template <typename T = void> T set_drop_bonus(int32_t value) {
		return ((T (*)(BonusPrivilegeData*, int32_t))(Il2CppBase() + 0x510D4E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BonusPrivilegeData*, bool))(Il2CppBase() + 0x510D4EC))(this, createIfMissing);
	}

};

}
