#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Converter2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Converter`2"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t input) {
		return ((T (*)(Converter2*, uintptr_t))(Il2CppBase() + 0x5156D2C))(this, input);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t input, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Converter2*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5156DC4))(this, input, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Converter2*, uintptr_t))(Il2CppBase() + 0x5156DF0))(this, result);
	}

};

}
