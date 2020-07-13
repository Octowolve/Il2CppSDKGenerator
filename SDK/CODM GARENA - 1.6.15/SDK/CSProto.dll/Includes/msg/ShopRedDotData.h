#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopRedDotData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopRedDotData"));
	}

	template <typename T = uint32_t> T& _shop_tag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _time_out_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _multi_tag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _not_delete_with_tag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_shop_tag() {
		return ((T (*)(ShopRedDotData*))(Il2CppBase() + 0x5073128))(this);
	}
	template <typename T = void> T set_shop_tag(uint32_t value) {
		return ((T (*)(ShopRedDotData*, uint32_t))(Il2CppBase() + 0x5073130))(this, value);
	}
	template <typename T = uint32_t> T get_shop_id() {
		return ((T (*)(ShopRedDotData*))(Il2CppBase() + 0x5073138))(this);
	}
	template <typename T = void> T set_shop_id(uint32_t value) {
		return ((T (*)(ShopRedDotData*, uint32_t))(Il2CppBase() + 0x5073140))(this, value);
	}
	template <typename T = uint32_t> T get_time_out_time() {
		return ((T (*)(ShopRedDotData*))(Il2CppBase() + 0x5073148))(this);
	}
	template <typename T = void> T set_time_out_time(uint32_t value) {
		return ((T (*)(ShopRedDotData*, uint32_t))(Il2CppBase() + 0x5073150))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_multi_tag() {
		return ((T (*)(ShopRedDotData*))(Il2CppBase() + 0x5073158))(this);
	}
	template <typename T = bool> T get_not_delete_with_tag() {
		return ((T (*)(ShopRedDotData*))(Il2CppBase() + 0x5073160))(this);
	}
	template <typename T = void> T set_not_delete_with_tag(bool value) {
		return ((T (*)(ShopRedDotData*, bool))(Il2CppBase() + 0x5073168))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopRedDotData*, bool))(Il2CppBase() + 0x5073170))(this, createIfMissing);
	}

};

}
