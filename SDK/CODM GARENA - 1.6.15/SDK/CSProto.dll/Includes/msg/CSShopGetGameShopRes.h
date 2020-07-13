#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopGetGameShopRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopGetGameShopRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _clan_shop_cfgs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _apvp_shop_cfgs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _spvp_shop_cfgs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSShopGetGameShopRes*))(Il2CppBase() + 0x51E243C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSShopGetGameShopRes*, int32_t))(Il2CppBase() + 0x51E2444))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_clan_shop_cfgs() {
		return ((T (*)(CSShopGetGameShopRes*))(Il2CppBase() + 0x51E244C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_apvp_shop_cfgs() {
		return ((T (*)(CSShopGetGameShopRes*))(Il2CppBase() + 0x51E2454))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_spvp_shop_cfgs() {
		return ((T (*)(CSShopGetGameShopRes*))(Il2CppBase() + 0x51E245C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopGetGameShopRes*, bool))(Il2CppBase() + 0x51E2464))(this, createIfMissing);
	}

};

}
