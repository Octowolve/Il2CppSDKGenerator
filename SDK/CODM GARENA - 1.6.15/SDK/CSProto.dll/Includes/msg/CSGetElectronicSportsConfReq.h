#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetElectronicSportsConfReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetElectronicSportsConfReq"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetElectronicSportsConfReq*, bool))(Il2CppBase() + 0x5215F88))(this, createIfMissing);
	}

};

}
