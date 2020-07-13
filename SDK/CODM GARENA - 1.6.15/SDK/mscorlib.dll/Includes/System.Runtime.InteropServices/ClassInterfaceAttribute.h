#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ClassInterfaceAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "ClassInterfaceAttribute"));
	}

	template <typename T = uintptr_t> T& ciType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
