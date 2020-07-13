#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UseVehicleWeaponStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UseVehicleWeaponStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _kill_dist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _kill_player_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _kill_vehicle_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(UseVehicleWeaponStatis*))(Il2CppBase() + 0x51AACC0))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(UseVehicleWeaponStatis*, uint32_t))(Il2CppBase() + 0x51AACC8))(this, value);
	}
	template <typename T = uint32_t> T get_kill_dist() {
		return ((T (*)(UseVehicleWeaponStatis*))(Il2CppBase() + 0x51AACD0))(this);
	}
	template <typename T = void> T set_kill_dist(uint32_t value) {
		return ((T (*)(UseVehicleWeaponStatis*, uint32_t))(Il2CppBase() + 0x51AACD8))(this, value);
	}
	template <typename T = uint32_t> T get_kill_player_num() {
		return ((T (*)(UseVehicleWeaponStatis*))(Il2CppBase() + 0x51AACE0))(this);
	}
	template <typename T = void> T set_kill_player_num(uint32_t value) {
		return ((T (*)(UseVehicleWeaponStatis*, uint32_t))(Il2CppBase() + 0x51AACE8))(this, value);
	}
	template <typename T = uint32_t> T get_kill_vehicle_num() {
		return ((T (*)(UseVehicleWeaponStatis*))(Il2CppBase() + 0x51AACF0))(this);
	}
	template <typename T = void> T set_kill_vehicle_num(uint32_t value) {
		return ((T (*)(UseVehicleWeaponStatis*, uint32_t))(Il2CppBase() + 0x51AACF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UseVehicleWeaponStatis*, bool))(Il2CppBase() + 0x51AAD00))(this, createIfMissing);
	}

};

}
