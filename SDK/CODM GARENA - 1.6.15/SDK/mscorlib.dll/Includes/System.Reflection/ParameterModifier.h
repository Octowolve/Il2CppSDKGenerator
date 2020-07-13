#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ParameterModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ParameterModifier"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _byref() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
