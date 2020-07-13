#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopRefreshRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopRefreshRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _mall() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSShopRefreshRes*))(Il2CppBase() + 0x51E2864))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSShopRefreshRes*, int32_t))(Il2CppBase() + 0x51E286C))(this, value);
	}
	template <typename T = uintptr_t> T get_mall() {
		return ((T (*)(CSShopRefreshRes*))(Il2CppBase() + 0x51E2874))(this);
	}
	template <typename T = void> T set_mall(uintptr_t value) {
		return ((T (*)(CSShopRefreshRes*, uintptr_t))(Il2CppBase() + 0x51E287C))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSShopRefreshRes*))(Il2CppBase() + 0x51E2884))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSShopRefreshRes*, uintptr_t))(Il2CppBase() + 0x51E288C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopRefreshRes*, bool))(Il2CppBase() + 0x51E2894))(this, createIfMissing);
	}

};

}
