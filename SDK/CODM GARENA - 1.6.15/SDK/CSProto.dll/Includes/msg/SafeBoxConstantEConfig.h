#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBoxConstantEConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBoxConstantEConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _constante_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_constante_list() {
		return ((T (*)(SafeBoxConstantEConfig*))(Il2CppBase() + 0x50723E8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBoxConstantEConfig*, bool))(Il2CppBase() + 0x50723F0))(this, createIfMissing);
	}

};

}
