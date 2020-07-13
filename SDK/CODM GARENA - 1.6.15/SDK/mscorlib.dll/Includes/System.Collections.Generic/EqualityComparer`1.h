#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class EqualityComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "EqualityComparer`1"));
	}

	template <typename T = void*> static T& _default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T System_Collections_IEqualityComparer_GetHashCode(uintptr_t obj) {
		return ((T (*)(EqualityComparer1*, uintptr_t))(Il2CppBase() + 0x4F50530))(this, obj);
	}
	template <typename T = bool> T System_Collections_IEqualityComparer_Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(EqualityComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F50590))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(EqualityComparer1*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(EqualityComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = void*> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F50620))(0);
	}

};

}
