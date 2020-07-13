#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ComDefaultInterfaceAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
