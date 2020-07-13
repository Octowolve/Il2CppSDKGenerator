#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UseVehicleStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UseVehicleStatis"));
	}

	template <typename T = uint32_t> T& _vehicle_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _drive_dist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times_hitkill_player_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_statis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_vehicle_type() {
		return ((T (*)(UseVehicleStatis*))(Il2CppBase() + 0x51AAC6C))(this);
	}
	template <typename T = void> T set_vehicle_type(uint32_t value) {
		return ((T (*)(UseVehicleStatis*, uint32_t))(Il2CppBase() + 0x51AAC74))(this, value);
	}
	template <typename T = uint32_t> T get_drive_dist() {
		return ((T (*)(UseVehicleStatis*))(Il2CppBase() + 0x51AAC7C))(this);
	}
	template <typename T = void> T set_drive_dist(uint32_t value) {
		return ((T (*)(UseVehicleStatis*, uint32_t))(Il2CppBase() + 0x51AAC84))(this, value);
	}
	template <typename T = uint32_t> T get_times_hitkill_player_num() {
		return ((T (*)(UseVehicleStatis*))(Il2CppBase() + 0x51AAC8C))(this);
	}
	template <typename T = void> T set_times_hitkill_player_num(uint32_t value) {
		return ((T (*)(UseVehicleStatis*, uint32_t))(Il2CppBase() + 0x51AAC94))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_statis() {
		return ((T (*)(UseVehicleStatis*))(Il2CppBase() + 0x51AAC9C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UseVehicleStatis*, bool))(Il2CppBase() + 0x51AACA4))(this, createIfMissing);
	}

};

}
