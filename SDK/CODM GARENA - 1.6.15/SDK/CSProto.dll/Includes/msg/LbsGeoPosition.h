#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LbsGeoPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LbsGeoPosition"));
	}

	template <typename T = int32_t> T& _latitude_e6() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _longitude_e6() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_latitude_e6() {
		return ((T (*)(LbsGeoPosition*))(Il2CppBase() + 0x4EA2688))(this);
	}
	template <typename T = void> T set_latitude_e6(int32_t value) {
		return ((T (*)(LbsGeoPosition*, int32_t))(Il2CppBase() + 0x4EA2690))(this, value);
	}
	template <typename T = int32_t> T get_longitude_e6() {
		return ((T (*)(LbsGeoPosition*))(Il2CppBase() + 0x4EA2698))(this);
	}
	template <typename T = void> T set_longitude_e6(int32_t value) {
		return ((T (*)(LbsGeoPosition*, int32_t))(Il2CppBase() + 0x4EA26A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LbsGeoPosition*, bool))(Il2CppBase() + 0x4EA26A8))(this, createIfMissing);
	}

};

}
