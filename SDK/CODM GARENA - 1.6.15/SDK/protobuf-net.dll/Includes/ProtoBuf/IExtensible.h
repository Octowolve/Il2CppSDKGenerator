#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class IExtensible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "IExtensible"));
	}


	template <typename T = uintptr_t> T GetExtensionObject(bool createIfMissing) {
		return ((T (*)(IExtensible*, bool))(Il2CppBase() + 0x0))(this, createIfMissing);
	}

};

}
