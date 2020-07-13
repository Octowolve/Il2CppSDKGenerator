#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopGetReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopGetReq"));
	}

	template <typename T = int32_t> T& _languagecode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cookie() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _update_reddot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _target_shop_ids() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_languagecode() {
		return ((T (*)(CSShopGetReq*))(Il2CppBase() + 0x51E2524))(this);
	}
	template <typename T = void> T set_languagecode(int32_t value) {
		return ((T (*)(CSShopGetReq*, int32_t))(Il2CppBase() + 0x51E252C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cookie() {
		return ((T (*)(CSShopGetReq*))(Il2CppBase() + 0x51E2534))(this);
	}
	template <typename T = void> T set_cookie(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSShopGetReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E253C))(this, value);
	}
	template <typename T = bool> T get_update_reddot() {
		return ((T (*)(CSShopGetReq*))(Il2CppBase() + 0x51E2544))(this);
	}
	template <typename T = void> T set_update_reddot(bool value) {
		return ((T (*)(CSShopGetReq*, bool))(Il2CppBase() + 0x51E254C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_target_shop_ids() {
		return ((T (*)(CSShopGetReq*))(Il2CppBase() + 0x51E2554))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopGetReq*, bool))(Il2CppBase() + 0x51E255C))(this, createIfMissing);
	}

};

}
