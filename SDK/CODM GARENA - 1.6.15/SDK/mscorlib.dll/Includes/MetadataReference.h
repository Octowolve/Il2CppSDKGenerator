#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetadataReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "MetadataReference"));
	}

	template <typename T = uintptr_t> T& Metadata() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& ObjectID() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
