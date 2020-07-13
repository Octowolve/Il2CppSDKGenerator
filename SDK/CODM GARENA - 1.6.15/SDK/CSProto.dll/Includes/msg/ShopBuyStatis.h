#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopBuyStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopBuyStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _cost_diamond() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _buy_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(ShopBuyStatis*))(Il2CppBase() + 0x5072748))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(ShopBuyStatis*, uint32_t))(Il2CppBase() + 0x5072750))(this, value);
	}
	template <typename T = uint32_t> T get_cost_diamond() {
		return ((T (*)(ShopBuyStatis*))(Il2CppBase() + 0x5072758))(this);
	}
	template <typename T = void> T set_cost_diamond(uint32_t value) {
		return ((T (*)(ShopBuyStatis*, uint32_t))(Il2CppBase() + 0x5072760))(this, value);
	}
	template <typename T = uint32_t> T get_buy_times() {
		return ((T (*)(ShopBuyStatis*))(Il2CppBase() + 0x5072768))(this);
	}
	template <typename T = void> T set_buy_times(uint32_t value) {
		return ((T (*)(ShopBuyStatis*, uint32_t))(Il2CppBase() + 0x5072770))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopBuyStatis*, bool))(Il2CppBase() + 0x5072778))(this, createIfMissing);
	}

};

}
