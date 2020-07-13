#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopGetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopGetRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _shop_cfgs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _max_buy_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bought_limit_goods() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_end() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cookie() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _update_reddot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_specify_shop_ids() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2650))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSShopGetRes*, int32_t))(Il2CppBase() + 0x51E2658))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_shop_cfgs() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2660))(this);
	}
	template <typename T = uint32_t> T get_max_buy_num() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2668))(this);
	}
	template <typename T = void> T set_max_buy_num(uint32_t value) {
		return ((T (*)(CSShopGetRes*, uint32_t))(Il2CppBase() + 0x51E2670))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bought_limit_goods() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2678))(this);
	}
	template <typename T = bool> T get_is_end() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2680))(this);
	}
	template <typename T = void> T set_is_end(bool value) {
		return ((T (*)(CSShopGetRes*, bool))(Il2CppBase() + 0x51E2688))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cookie() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E2690))(this);
	}
	template <typename T = void> T set_cookie(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSShopGetRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E2698))(this, value);
	}
	template <typename T = bool> T get_update_reddot() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E26A0))(this);
	}
	template <typename T = void> T set_update_reddot(bool value) {
		return ((T (*)(CSShopGetRes*, bool))(Il2CppBase() + 0x51E26A8))(this, value);
	}
	template <typename T = bool> T get_is_specify_shop_ids() {
		return ((T (*)(CSShopGetRes*))(Il2CppBase() + 0x51E26B0))(this);
	}
	template <typename T = void> T set_is_specify_shop_ids(bool value) {
		return ((T (*)(CSShopGetRes*, bool))(Il2CppBase() + 0x51E26B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopGetRes*, bool))(Il2CppBase() + 0x51E26C0))(this, createIfMissing);
	}

};

}
