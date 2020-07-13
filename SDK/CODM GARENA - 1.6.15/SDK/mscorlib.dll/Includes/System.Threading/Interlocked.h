#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Interlocked
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "Interlocked"));
	}


	template <typename T = int32_t> static T CompareExchange(uintptr_t location1, int32_t value, int32_t comparand) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4D88630))(0, location1, value, comparand);
	}
	template <typename T = uintptr_t> static T CompareExchange_1(uintptr_t location1, uintptr_t value, uintptr_t comparand) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D88640))(0, location1, value, comparand);
	}
	template <typename T = float> static T CompareExchange_2(uintptr_t location1, float value, float comparand) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4D88650))(0, location1, value, comparand);
	}
	template <typename T = int32_t> static T Decrement(uintptr_t location) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88660))(0, location);
	}
	template <typename T = int32_t> static T Increment(uintptr_t location) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88668))(0, location);
	}
	template <typename T = int32_t> static T Exchange(uintptr_t location1, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4D88670))(0, location1, value);
	}
	template <typename T = uintptr_t> static T CompareExchange_3(uintptr_t location1, uintptr_t value, uintptr_t comparand) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, location1, value, comparand);
	}

};

}
