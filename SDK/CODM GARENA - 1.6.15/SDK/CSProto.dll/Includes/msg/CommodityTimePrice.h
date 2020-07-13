#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CommodityTimePrice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CommodityTimePrice"));
	}

	template <typename T = int32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_time() {
		return ((T (*)(CommodityTimePrice*))(Il2CppBase() + 0x516EE90))(this);
	}
	template <typename T = void> T set_time(int32_t value) {
		return ((T (*)(CommodityTimePrice*, int32_t))(Il2CppBase() + 0x516EE98))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(CommodityTimePrice*))(Il2CppBase() + 0x516EEA0))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(CommodityTimePrice*, int32_t))(Il2CppBase() + 0x516EEA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CommodityTimePrice*, bool))(Il2CppBase() + 0x516EEB0))(this, createIfMissing);
	}

};

}
