#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class UnmanagedFunctionPointerAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute"));
	}

	template <typename T = uintptr_t> T& call_conv() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
