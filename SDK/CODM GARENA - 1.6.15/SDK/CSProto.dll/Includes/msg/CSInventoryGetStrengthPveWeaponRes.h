#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetStrengthPveWeaponRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetStrengthPveWeaponRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryGetStrengthPveWeaponRes*))(Il2CppBase() + 0x5138098))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryGetStrengthPveWeaponRes*, int32_t))(Il2CppBase() + 0x51380A0))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSInventoryGetStrengthPveWeaponRes*))(Il2CppBase() + 0x51380A8))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSInventoryGetStrengthPveWeaponRes*, int32_t))(Il2CppBase() + 0x51380B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetStrengthPveWeaponRes*, bool))(Il2CppBase() + 0x51380B8))(this, createIfMissing);
	}

};

}
