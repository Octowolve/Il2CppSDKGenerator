#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoGenericCMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoGenericCMethod"));
	}


	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoGenericCMethod*))(Il2CppBase() + 0x4FD535C))(this);
	}

};

}
