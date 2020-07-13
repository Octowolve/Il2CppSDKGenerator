#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopRefreshReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopRefreshReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _refresh_times_today() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSShopRefreshReq*))(Il2CppBase() + 0x51E2828))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSShopRefreshReq*, int32_t))(Il2CppBase() + 0x51E2830))(this, value);
	}
	template <typename T = int32_t> T get_refresh_times_today() {
		return ((T (*)(CSShopRefreshReq*))(Il2CppBase() + 0x51E2838))(this);
	}
	template <typename T = void> T set_refresh_times_today(int32_t value) {
		return ((T (*)(CSShopRefreshReq*, int32_t))(Il2CppBase() + 0x51E2840))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopRefreshReq*, bool))(Il2CppBase() + 0x51E2848))(this, createIfMissing);
	}

};

}
