#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSOpenBoxReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSOpenBoxReq"));
	}

	template <typename T = uintptr_t> T& _box() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_box() {
		return ((T (*)(CSOpenBoxReq*))(Il2CppBase() + 0x51F0F90))(this);
	}
	template <typename T = void> T set_box(uintptr_t value) {
		return ((T (*)(CSOpenBoxReq*, uintptr_t))(Il2CppBase() + 0x51F0F98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSOpenBoxReq*, bool))(Il2CppBase() + 0x51F0FA0))(this, createIfMissing);
	}

};

}
