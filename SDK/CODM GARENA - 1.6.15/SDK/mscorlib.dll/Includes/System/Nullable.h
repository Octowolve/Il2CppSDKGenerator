#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Nullable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Nullable"));
	}


	template <typename T = uintptr_t> static T GetUnderlyingType(uintptr_t nullableType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455562C))(0, nullableType);
	}

};

}
