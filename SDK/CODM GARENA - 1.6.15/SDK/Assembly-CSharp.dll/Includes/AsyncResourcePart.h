#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncResourcePart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncResourcePart"));
	}

	template <typename T = int32_t> T& resourceId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& socket() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& isLoaded() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
