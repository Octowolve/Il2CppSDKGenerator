#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceCacheItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ResourceCacheItem"));
	}

	template <typename T = Il2CppString*> T& ResourceName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ResourceValue() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
