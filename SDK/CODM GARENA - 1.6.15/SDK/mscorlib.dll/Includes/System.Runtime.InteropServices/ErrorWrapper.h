#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ErrorWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "ErrorWrapper"));
	}

	template <typename T = int32_t> T& errorCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
