#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class AssemblyKeyFileAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "AssemblyKeyFileAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
