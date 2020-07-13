#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetConfReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetConfReq"));
	}

	template <typename T = int32_t> T& _conf_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_conf_id() {
		return ((T (*)(CSGetConfReq*))(Il2CppBase() + 0x5215EC8))(this);
	}
	template <typename T = void> T set_conf_id(int32_t value) {
		return ((T (*)(CSGetConfReq*, int32_t))(Il2CppBase() + 0x5215ED0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetConfReq*, bool))(Il2CppBase() + 0x5215ED8))(this, createIfMissing);
	}

};

}
