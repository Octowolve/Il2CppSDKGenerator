#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MulticastDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MulticastDelegate"));
	}

	template <typename T = uintptr_t> T& prev() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& kpm_next() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MulticastDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45549F0))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(MulticastDelegate*, uintptr_t))(Il2CppBase() + 0x4554A10))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MulticastDelegate*))(Il2CppBase() + 0x4554B14))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInvocationList() {
		return ((T (*)(MulticastDelegate*))(Il2CppBase() + 0x4554B1C))(this);
	}
	template <typename T = uintptr_t> T CombineImpl(uintptr_t follow) {
		return ((T (*)(MulticastDelegate*, uintptr_t))(Il2CppBase() + 0x4554DDC))(this, follow);
	}
	template <typename T = bool> T BaseEquals(uintptr_t value) {
		return ((T (*)(MulticastDelegate*, uintptr_t))(Il2CppBase() + 0x4555058))(this, value);
	}
	template <typename T = uintptr_t> static T KPM(uintptr_t needle, uintptr_t haystack, uintptr_t* tail) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4555060))(0, needle, haystack, tail);
	}
	template <typename T = uintptr_t> T RemoveImpl(uintptr_t value) {
		return ((T (*)(MulticastDelegate*, uintptr_t))(Il2CppBase() + 0x45551C4))(this, value);
	}

};

}
