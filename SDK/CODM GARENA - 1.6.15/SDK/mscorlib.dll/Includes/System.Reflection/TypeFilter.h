#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class TypeFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "TypeFilter"));
	}


	template <typename T = bool> T Invoke(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(TypeFilter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDA3BC))(this, m, filterCriteria);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t m, uintptr_t filterCriteria, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TypeFilter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDA478))(this, m, filterCriteria, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(TypeFilter*, uintptr_t))(Il2CppBase() + 0x4FDA4B0))(this, result);
	}

};

}
