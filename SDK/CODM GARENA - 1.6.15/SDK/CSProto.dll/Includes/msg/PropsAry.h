#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropsAry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropsAry"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(PropsAry*))(Il2CppBase() + 0x506EEB0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropsAry*, bool))(Il2CppBase() + 0x506EEB8))(this, createIfMissing);
	}

};

}
