#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoGenericMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoGenericMethod"));
	}


	template <typename T = uintptr_t> T get_ReflectedType() {
		return ((T (*)(MonoGenericMethod*))(Il2CppBase() + 0x4FD540C))(this);
	}

};

}
