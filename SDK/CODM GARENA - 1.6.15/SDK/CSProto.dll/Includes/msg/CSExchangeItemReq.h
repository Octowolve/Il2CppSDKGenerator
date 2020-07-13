#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSExchangeItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSExchangeItemReq"));
	}

	template <typename T = int32_t> T& _shopid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _exchange_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_shopid() {
		return ((T (*)(CSExchangeItemReq*))(Il2CppBase() + 0x51D17E4))(this);
	}
	template <typename T = void> T set_shopid(int32_t value) {
		return ((T (*)(CSExchangeItemReq*, int32_t))(Il2CppBase() + 0x51D17EC))(this, value);
	}
	template <typename T = uint32_t> T get_exchange_num() {
		return ((T (*)(CSExchangeItemReq*))(Il2CppBase() + 0x51D17F4))(this);
	}
	template <typename T = void> T set_exchange_num(uint32_t value) {
		return ((T (*)(CSExchangeItemReq*, uint32_t))(Il2CppBase() + 0x51D17FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSExchangeItemReq*, bool))(Il2CppBase() + 0x51D1804))(this, createIfMissing);
	}

};

}
