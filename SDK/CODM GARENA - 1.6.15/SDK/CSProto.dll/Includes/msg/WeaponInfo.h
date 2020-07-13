#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WeaponInfo"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _weapon_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(WeaponInfo*))(Il2CppBase() + 0x51AADE0))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(WeaponInfo*, int32_t))(Il2CppBase() + 0x51AADE8))(this, value);
	}
	template <typename T = int32_t> T get_weapon_num() {
		return ((T (*)(WeaponInfo*))(Il2CppBase() + 0x51AADF0))(this);
	}
	template <typename T = void> T set_weapon_num(int32_t value) {
		return ((T (*)(WeaponInfo*, int32_t))(Il2CppBase() + 0x51AADF8))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(WeaponInfo*))(Il2CppBase() + 0x51AAE00))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(WeaponInfo*, int32_t))(Il2CppBase() + 0x51AAE08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WeaponInfo*, bool))(Il2CppBase() + 0x51AAE10))(this, createIfMissing);
	}

};

}
