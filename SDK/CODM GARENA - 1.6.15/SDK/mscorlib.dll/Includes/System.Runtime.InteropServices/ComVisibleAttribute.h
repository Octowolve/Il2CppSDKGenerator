#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ComVisibleAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "ComVisibleAttribute"));
	}

	template <typename T = bool> T& Visible() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
