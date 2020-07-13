#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tPitchBend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tPitchBend"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x490941C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tPitchBend*, uintptr_t))(Il2CppBase() + 0x490C9D8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tPitchBend*))(Il2CppBase() + 0x490CA04))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tPitchBend*))(Il2CppBase() + 0x490CA6C))(this);
	}
	template <typename T = void> T set_byValueLsb(unsigned char value) {
		return ((T (*)(tPitchBend*, unsigned char))(Il2CppBase() + 0x490CBF4))(this, value);
	}
	template <typename T = unsigned char> T get_byValueLsb() {
		return ((T (*)(tPitchBend*))(Il2CppBase() + 0x490CCA8))(this);
	}
	template <typename T = void> T set_byValueMsb(unsigned char value) {
		return ((T (*)(tPitchBend*, unsigned char))(Il2CppBase() + 0x490CD54))(this, value);
	}
	template <typename T = unsigned char> T get_byValueMsb() {
		return ((T (*)(tPitchBend*))(Il2CppBase() + 0x490CE08))(this);
	}

};

}
