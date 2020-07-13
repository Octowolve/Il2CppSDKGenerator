#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class InvalidOperationException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "InvalidOperationException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
