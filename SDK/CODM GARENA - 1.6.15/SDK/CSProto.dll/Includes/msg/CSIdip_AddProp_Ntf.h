#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSIdipAddPropNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSIdip_AddProp_Ntf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSIdipAddPropNtf*))(Il2CppBase() + 0x51DC968))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSIdipAddPropNtf*, bool))(Il2CppBase() + 0x51DC970))(this, createIfMissing);
	}

};

}
