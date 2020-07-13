#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class ProtoContractAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "ProtoContractAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ProtoContractAttribute*, Il2CppString*))(Il2CppBase() + 0x506958C))(this, value);
	}

};

}
