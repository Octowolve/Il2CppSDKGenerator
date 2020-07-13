#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OTOinfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OTOinfo"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _special_item_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(OTOinfo*))(Il2CppBase() + 0x4EA5CCC))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(OTOinfo*, uint32_t))(Il2CppBase() + 0x4EA5CD4))(this, value);
	}
	template <typename T = uint32_t> T get_special_item_id() {
		return ((T (*)(OTOinfo*))(Il2CppBase() + 0x4EA5CDC))(this);
	}
	template <typename T = void> T set_special_item_id(uint32_t value) {
		return ((T (*)(OTOinfo*, uint32_t))(Il2CppBase() + 0x4EA5CE4))(this, value);
	}
	template <typename T = uint32_t> T get_times() {
		return ((T (*)(OTOinfo*))(Il2CppBase() + 0x4EA5CEC))(this);
	}
	template <typename T = void> T set_times(uint32_t value) {
		return ((T (*)(OTOinfo*, uint32_t))(Il2CppBase() + 0x4EA5CF4))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(OTOinfo*))(Il2CppBase() + 0x4EA5CFC))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(OTOinfo*, int32_t))(Il2CppBase() + 0x4EA5D04))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(OTOinfo*))(Il2CppBase() + 0x4EA5D0C))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(OTOinfo*, int32_t))(Il2CppBase() + 0x4EA5D14))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OTOinfo*, bool))(Il2CppBase() + 0x4EA5D1C))(this, createIfMissing);
	}

};

}
