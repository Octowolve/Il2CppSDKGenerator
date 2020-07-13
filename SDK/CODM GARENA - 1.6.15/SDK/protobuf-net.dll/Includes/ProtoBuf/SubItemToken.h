#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class SubItemToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "SubItemToken"));
	}

	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
