#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class MarshalDirectiveException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "MarshalDirectiveException"));
	}

	template <typename T = int32_t> static T& ErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
