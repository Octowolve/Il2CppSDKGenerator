#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResolveEventHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ResolveEventHolder"));
	}

	template <typename T = uintptr_t> T& ModuleResolve() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
