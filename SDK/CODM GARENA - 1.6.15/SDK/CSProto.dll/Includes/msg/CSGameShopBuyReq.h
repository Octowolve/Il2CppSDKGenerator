#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameShopBuyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameShopBuyReq"));
	}

	template <typename T = int32_t> T& _shopid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _shop_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_shopid() {
		return ((T (*)(CSGameShopBuyReq*))(Il2CppBase() + 0x51D226C))(this);
	}
	template <typename T = void> T set_shopid(int32_t value) {
		return ((T (*)(CSGameShopBuyReq*, int32_t))(Il2CppBase() + 0x51D2274))(this, value);
	}
	template <typename T = int32_t> T get_shop_type() {
		return ((T (*)(CSGameShopBuyReq*))(Il2CppBase() + 0x51D227C))(this);
	}
	template <typename T = void> T set_shop_type(int32_t value) {
		return ((T (*)(CSGameShopBuyReq*, int32_t))(Il2CppBase() + 0x51D2284))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameShopBuyReq*, bool))(Il2CppBase() + 0x51D228C))(this, createIfMissing);
	}

};

}
