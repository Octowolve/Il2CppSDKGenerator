#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_InfoRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _WeaponPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buy_weaponpoint_times_today() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSWeaponInfoRes*))(Il2CppBase() + 0x51B6AEC))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSWeaponInfoRes*, int32_t))(Il2CppBase() + 0x51B6AF4))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPoint() {
		return ((T (*)(CSWeaponInfoRes*))(Il2CppBase() + 0x51B6AFC))(this);
	}
	template <typename T = void> T set_WeaponPoint(int32_t value) {
		return ((T (*)(CSWeaponInfoRes*, int32_t))(Il2CppBase() + 0x51B6B04))(this, value);
	}
	template <typename T = int32_t> T get_buy_weaponpoint_times_today() {
		return ((T (*)(CSWeaponInfoRes*))(Il2CppBase() + 0x51B6B0C))(this);
	}
	template <typename T = void> T set_buy_weaponpoint_times_today(int32_t value) {
		return ((T (*)(CSWeaponInfoRes*, int32_t))(Il2CppBase() + 0x51B6B14))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponInfoRes*, bool))(Il2CppBase() + 0x51B6B1C))(this, createIfMissing);
	}

};

}
