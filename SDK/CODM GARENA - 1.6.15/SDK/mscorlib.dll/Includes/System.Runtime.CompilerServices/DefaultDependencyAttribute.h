#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class DefaultDependencyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "DefaultDependencyAttribute"));
	}

	template <typename T = uintptr_t> T& hint() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
