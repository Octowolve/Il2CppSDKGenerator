#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class CaseInsensitiveHashCodeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "CaseInsensitiveHashCodeProvider"));
	}

	template <typename T = uintptr_t> static T& singletonInvariant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& singleton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& sync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_text() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x3636F78))(0);
	}
	template <typename T = bool> static T AreEqual(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3636C04))(0, a, b);
	}
	template <typename T = bool> static T AreEqual_1(uintptr_t info, uintptr_t culture) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36373EC))(0, info, culture);
	}
	template <typename T = uintptr_t> static T get_DefaultInvariant() {
		return ((T (*)(void *))(Il2CppBase() + 0x36374E0))(0);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(CaseInsensitiveHashCodeProvider*, uintptr_t))(Il2CppBase() + 0x3637590))(this, obj);
	}

};

}
