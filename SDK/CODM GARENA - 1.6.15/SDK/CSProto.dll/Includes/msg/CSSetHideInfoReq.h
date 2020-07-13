#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetHideInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetHideInfoReq"));
	}

	template <typename T = bool> T& _hide_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_hide_info() {
		return ((T (*)(CSSetHideInfoReq*))(Il2CppBase() + 0x51E1988))(this);
	}
	template <typename T = void> T set_hide_info(bool value) {
		return ((T (*)(CSSetHideInfoReq*, bool))(Il2CppBase() + 0x51E1990))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetHideInfoReq*, bool))(Il2CppBase() + 0x51E1998))(this, createIfMissing);
	}

};

}
