#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Predicate1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Predicate`1"));
	}


	template <typename T = bool> T Invoke(uintptr_t obj) {
		return ((T (*)(Predicate1*, uintptr_t))(Il2CppBase() + 0x5112400))(this, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Predicate1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5112498))(this, obj, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(Predicate1*, uintptr_t))(Il2CppBase() + 0x51124C4))(this, result);
	}

};

}
