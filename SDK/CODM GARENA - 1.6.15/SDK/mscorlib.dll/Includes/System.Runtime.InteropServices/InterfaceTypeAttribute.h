#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class InterfaceTypeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "InterfaceTypeAttribute"));
	}

	template <typename T = uintptr_t> T& intType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
