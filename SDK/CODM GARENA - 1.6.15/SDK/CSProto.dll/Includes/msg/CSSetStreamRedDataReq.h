#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetStreamRedDataReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetStreamRedDataReq"));
	}

	template <typename T = bool> T& _need_resp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_need_resp() {
		return ((T (*)(CSSetStreamRedDataReq*))(Il2CppBase() + 0x51E1E54))(this);
	}
	template <typename T = void> T set_need_resp(bool value) {
		return ((T (*)(CSSetStreamRedDataReq*, bool))(Il2CppBase() + 0x51E1E5C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetStreamRedDataReq*, bool))(Il2CppBase() + 0x51E1E64))(this, createIfMissing);
	}

};

}
