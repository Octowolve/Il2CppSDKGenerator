#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopGetListCookie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopGetListCookie"));
	}

	template <typename T = uint32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_shop_id() {
		return ((T (*)(ShopGetListCookie*))(Il2CppBase() + 0x5072DD0))(this);
	}
	template <typename T = void> T set_shop_id(uint32_t value) {
		return ((T (*)(ShopGetListCookie*, uint32_t))(Il2CppBase() + 0x5072DD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopGetListCookie*, bool))(Il2CppBase() + 0x5072DE0))(this, createIfMissing);
	}

};

}
