#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetHideGamerecordReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetHideGamerecordReq"));
	}

	template <typename T = bool> T& _hide_gamerecord() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_hide_gamerecord() {
		return ((T (*)(CSSetHideGamerecordReq*))(Il2CppBase() + 0x51E1930))(this);
	}
	template <typename T = void> T set_hide_gamerecord(bool value) {
		return ((T (*)(CSSetHideGamerecordReq*, bool))(Il2CppBase() + 0x51E1938))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetHideGamerecordReq*, bool))(Il2CppBase() + 0x51E1940))(this, createIfMissing);
	}

};

}
