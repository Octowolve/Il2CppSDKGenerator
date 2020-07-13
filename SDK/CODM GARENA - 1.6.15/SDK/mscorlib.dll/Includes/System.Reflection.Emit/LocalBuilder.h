#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class LocalBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "LocalBuilder"));
	}

	template <typename T = uintptr_t> T& ilgen() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
