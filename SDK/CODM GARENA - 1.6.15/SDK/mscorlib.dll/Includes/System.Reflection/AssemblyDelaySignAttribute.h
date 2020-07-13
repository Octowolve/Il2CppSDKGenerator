#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class AssemblyDelaySignAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "AssemblyDelaySignAttribute"));
	}

	template <typename T = bool> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
