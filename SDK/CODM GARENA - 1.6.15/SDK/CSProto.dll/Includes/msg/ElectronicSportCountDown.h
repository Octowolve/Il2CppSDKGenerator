#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ElectronicSportCountDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ElectronicSportCountDown"));
	}

	template <typename T = uint32_t> T& _ustart_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _uend_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_ustart_time() {
		return ((T (*)(ElectronicSportCountDown*))(Il2CppBase() + 0x52269F0))(this);
	}
	template <typename T = void> T set_ustart_time(uint32_t value) {
		return ((T (*)(ElectronicSportCountDown*, uint32_t))(Il2CppBase() + 0x52269F8))(this, value);
	}
	template <typename T = uint32_t> T get_uend_time() {
		return ((T (*)(ElectronicSportCountDown*))(Il2CppBase() + 0x5226A00))(this);
	}
	template <typename T = void> T set_uend_time(uint32_t value) {
		return ((T (*)(ElectronicSportCountDown*, uint32_t))(Il2CppBase() + 0x5226A08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ElectronicSportCountDown*, bool))(Il2CppBase() + 0x5226A10))(this, createIfMissing);
	}

};

}
