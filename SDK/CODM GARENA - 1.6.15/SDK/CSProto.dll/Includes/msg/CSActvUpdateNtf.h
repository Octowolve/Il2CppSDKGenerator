#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvUpdateNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvUpdateNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _actv_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_actv_info() {
		return ((T (*)(CSActvUpdateNtf*))(Il2CppBase() + 0x51E3FF0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvUpdateNtf*, bool))(Il2CppBase() + 0x51E3FF8))(this, createIfMissing);
	}

};

}
