#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExchangeShopRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExchangeShopRecord"));
	}

	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _expaire_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _exchange_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(ExchangeShopRecord*))(Il2CppBase() + 0x52271E4))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(ExchangeShopRecord*, int32_t))(Il2CppBase() + 0x52271EC))(this, value);
	}
	template <typename T = uint32_t> T get_expaire_time() {
		return ((T (*)(ExchangeShopRecord*))(Il2CppBase() + 0x52271F4))(this);
	}
	template <typename T = void> T set_expaire_time(uint32_t value) {
		return ((T (*)(ExchangeShopRecord*, uint32_t))(Il2CppBase() + 0x52271FC))(this, value);
	}
	template <typename T = int32_t> T get_exchange_num() {
		return ((T (*)(ExchangeShopRecord*))(Il2CppBase() + 0x5227204))(this);
	}
	template <typename T = void> T set_exchange_num(int32_t value) {
		return ((T (*)(ExchangeShopRecord*, int32_t))(Il2CppBase() + 0x522720C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExchangeShopRecord*, bool))(Il2CppBase() + 0x5227214))(this, createIfMissing);
	}

};

}
