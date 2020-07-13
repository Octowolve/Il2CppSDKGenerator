#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class TypeLibImportClassAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "TypeLibImportClassAttribute"));
	}

	template <typename T = Il2CppString*> T& _importClass() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
