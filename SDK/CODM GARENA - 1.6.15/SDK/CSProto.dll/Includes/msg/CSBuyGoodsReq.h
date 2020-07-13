#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBuyGoodsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBuyGoodsReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _quantity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _provide_midas_appid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_product_id() {
		return ((T (*)(CSBuyGoodsReq*))(Il2CppBase() + 0x51E58B0))(this);
	}
	template <typename T = void> T set_product_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSBuyGoodsReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E58B8))(this, value);
	}
	template <typename T = int32_t> T get_quantity() {
		return ((T (*)(CSBuyGoodsReq*))(Il2CppBase() + 0x51E58C0))(this);
	}
	template <typename T = void> T set_quantity(int32_t value) {
		return ((T (*)(CSBuyGoodsReq*, int32_t))(Il2CppBase() + 0x51E58C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_provide_midas_appid() {
		return ((T (*)(CSBuyGoodsReq*))(Il2CppBase() + 0x51E58D0))(this);
	}
	template <typename T = void> T set_provide_midas_appid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSBuyGoodsReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E58D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBuyGoodsReq*, bool))(Il2CppBase() + 0x51E58E0))(this, createIfMissing);
	}

};

}
