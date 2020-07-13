#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OTODetailInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OTODetailInfo"));
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
		return ((T (*)(OTODetailInfo*))(Il2CppBase() + 0x4EA5C60))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(OTODetailInfo*, uint32_t))(Il2CppBase() + 0x4EA5C68))(this, value);
	}
	template <typename T = uint32_t> T get_special_item_id() {
		return ((T (*)(OTODetailInfo*))(Il2CppBase() + 0x4EA5C70))(this);
	}
	template <typename T = void> T set_special_item_id(uint32_t value) {
		return ((T (*)(OTODetailInfo*, uint32_t))(Il2CppBase() + 0x4EA5C78))(this, value);
	}
	template <typename T = uint32_t> T get_times() {
		return ((T (*)(OTODetailInfo*))(Il2CppBase() + 0x4EA5C80))(this);
	}
	template <typename T = void> T set_times(uint32_t value) {
		return ((T (*)(OTODetailInfo*, uint32_t))(Il2CppBase() + 0x4EA5C88))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(OTODetailInfo*))(Il2CppBase() + 0x4EA5C90))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(OTODetailInfo*, int32_t))(Il2CppBase() + 0x4EA5C98))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(OTODetailInfo*))(Il2CppBase() + 0x4EA5CA0))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(OTODetailInfo*, int32_t))(Il2CppBase() + 0x4EA5CA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OTODetailInfo*, bool))(Il2CppBase() + 0x4EA5CB0))(this, createIfMissing);
	}

};

}
