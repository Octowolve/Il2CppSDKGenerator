#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class Comparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "Comparer`1"));
	}

	template <typename T = void*> static T& _default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T System_Collections_IComparer_Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(Comparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EF6DE4))(this, x, y);
	}
	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(Comparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = void*> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4EF6F74))(0);
	}

};

}
