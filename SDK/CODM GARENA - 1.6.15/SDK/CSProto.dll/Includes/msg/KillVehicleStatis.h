#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class KillVehicleStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "KillVehicleStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _vehicle_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(KillVehicleStatis*))(Il2CppBase() + 0x50D0D98))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(KillVehicleStatis*, uint32_t))(Il2CppBase() + 0x50D0DA0))(this, value);
	}
	template <typename T = uint32_t> T get_vehicle_type() {
		return ((T (*)(KillVehicleStatis*))(Il2CppBase() + 0x50D0DA8))(this);
	}
	template <typename T = void> T set_vehicle_type(uint32_t value) {
		return ((T (*)(KillVehicleStatis*, uint32_t))(Il2CppBase() + 0x50D0DB0))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(KillVehicleStatis*))(Il2CppBase() + 0x50D0DB8))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(KillVehicleStatis*, uint32_t))(Il2CppBase() + 0x50D0DC0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(KillVehicleStatis*, bool))(Il2CppBase() + 0x50D0DC8))(this, createIfMissing);
	}

};

}
