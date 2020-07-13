#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Comparison1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Comparison`1"));
	}


	template <typename T = int32_t> T Invoke(uintptr_t x, uintptr_t y) {
		return ((T (*)(Comparison1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5151324))(this, x, y);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t x, uintptr_t y, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Comparison1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x51513E8))(this, x, y, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Comparison1*, uintptr_t))(Il2CppBase() + 0x5151420))(this, result);
	}

};

}
