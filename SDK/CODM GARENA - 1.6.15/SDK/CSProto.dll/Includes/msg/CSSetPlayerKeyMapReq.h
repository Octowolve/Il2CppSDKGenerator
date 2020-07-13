#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetPlayerKeyMapReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetPlayerKeyMapReq"));
	}

	template <typename T = uintptr_t> T& _mappings() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_mappings() {
		return ((T (*)(CSSetPlayerKeyMapReq*))(Il2CppBase() + 0x51E1BAC))(this);
	}
	template <typename T = void> T set_mappings(uintptr_t value) {
		return ((T (*)(CSSetPlayerKeyMapReq*, uintptr_t))(Il2CppBase() + 0x51E1BB4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetPlayerKeyMapReq*, bool))(Il2CppBase() + 0x51E1BBC))(this, createIfMissing);
	}

};

}
