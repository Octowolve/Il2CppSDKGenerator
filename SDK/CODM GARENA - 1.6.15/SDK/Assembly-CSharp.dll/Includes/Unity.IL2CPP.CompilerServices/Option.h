#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Unity.IL2CPP.CompilerServices {

class Option
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IL2CPP.CompilerServices", "Option"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& NullChecks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ArrayBoundsChecks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DivideByZeroChecks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
