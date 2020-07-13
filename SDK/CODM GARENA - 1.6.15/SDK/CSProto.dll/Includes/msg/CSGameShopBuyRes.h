#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameShopBuyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameShopBuyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGameShopBuyRes*))(Il2CppBase() + 0x51D234C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGameShopBuyRes*, int32_t))(Il2CppBase() + 0x51D2354))(this, value);
	}
	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSGameShopBuyRes*))(Il2CppBase() + 0x51D235C))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSGameShopBuyRes*, uintptr_t))(Il2CppBase() + 0x51D2364))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSGameShopBuyRes*))(Il2CppBase() + 0x51D236C))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSGameShopBuyRes*))(Il2CppBase() + 0x51D2374))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSGameShopBuyRes*, bool))(Il2CppBase() + 0x51D237C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameShopBuyRes*, bool))(Il2CppBase() + 0x51D2384))(this, createIfMissing);
	}

};

}
