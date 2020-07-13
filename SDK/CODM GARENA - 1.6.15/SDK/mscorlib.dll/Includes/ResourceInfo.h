#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ResourceInfo"));
	}

	template <typename T = int64_t> T& ValuePosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ResourceName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TypeIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
