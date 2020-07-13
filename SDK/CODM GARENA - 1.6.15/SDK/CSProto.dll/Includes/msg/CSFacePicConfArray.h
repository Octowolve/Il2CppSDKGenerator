#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSFacePicConfArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSFacePicConfArray"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _conf_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_conf_list() {
		return ((T (*)(CSFacePicConfArray*))(Il2CppBase() + 0x51D1DB0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSFacePicConfArray*, bool))(Il2CppBase() + 0x51D1DB8))(this, createIfMissing);
	}

};

}
