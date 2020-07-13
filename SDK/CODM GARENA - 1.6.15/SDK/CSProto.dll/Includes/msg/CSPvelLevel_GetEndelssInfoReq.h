#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPvelLevelGetEndelssInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPvelLevel_GetEndelssInfoReq"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPvelLevelGetEndelssInfoReq*, bool))(Il2CppBase() + 0x51DFDD4))(this, createIfMissing);
	}

};

}
