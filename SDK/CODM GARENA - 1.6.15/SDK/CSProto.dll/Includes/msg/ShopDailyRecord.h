#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopDailyRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopDailyRecord"));
	}

	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _last_bought_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _bought_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(ShopDailyRecord*))(Il2CppBase() + 0x5072D84))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(ShopDailyRecord*, int32_t))(Il2CppBase() + 0x5072D8C))(this, value);
	}
	template <typename T = uint32_t> T get_last_bought_time() {
		return ((T (*)(ShopDailyRecord*))(Il2CppBase() + 0x5072D94))(this);
	}
	template <typename T = void> T set_last_bought_time(uint32_t value) {
		return ((T (*)(ShopDailyRecord*, uint32_t))(Il2CppBase() + 0x5072D9C))(this, value);
	}
	template <typename T = int32_t> T get_bought_num() {
		return ((T (*)(ShopDailyRecord*))(Il2CppBase() + 0x5072DA4))(this);
	}
	template <typename T = void> T set_bought_num(int32_t value) {
		return ((T (*)(ShopDailyRecord*, int32_t))(Il2CppBase() + 0x5072DAC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopDailyRecord*, bool))(Il2CppBase() + 0x5072DB4))(this, createIfMissing);
	}

};

}
