#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopGetBoxContentReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopGetBoxContentReq"));
	}

	template <typename T = int32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_box_id() {
		return ((T (*)(CSShopGetBoxContentReq*))(Il2CppBase() + 0x51E2248))(this);
	}
	template <typename T = void> T set_box_id(int32_t value) {
		return ((T (*)(CSShopGetBoxContentReq*, int32_t))(Il2CppBase() + 0x51E2250))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopGetBoxContentReq*, bool))(Il2CppBase() + 0x51E2258))(this, createIfMissing);
	}

};

}
