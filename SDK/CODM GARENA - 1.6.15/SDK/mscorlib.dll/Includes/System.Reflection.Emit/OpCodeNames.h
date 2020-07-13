#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class OpCodeNames
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "OpCodeNames"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& names() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
