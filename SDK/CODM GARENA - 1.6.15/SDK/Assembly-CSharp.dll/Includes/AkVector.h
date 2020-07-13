#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkVector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkVector"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227BE6C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkVector*, uintptr_t))(Il2CppBase() + 0x22B3654))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B3680))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B36E8))(this);
	}
	template <typename T = void> T Zero() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B3868))(this);
	}
	template <typename T = void> T set_X(float value) {
		return ((T (*)(AkVector*, float))(Il2CppBase() + 0x22AA858))(this, value);
	}
	template <typename T = float> T get_X() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B390C))(this);
	}
	template <typename T = void> T set_Y(float value) {
		return ((T (*)(AkVector*, float))(Il2CppBase() + 0x22AA904))(this, value);
	}
	template <typename T = float> T get_Y() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B39B0))(this);
	}
	template <typename T = void> T set_Z(float value) {
		return ((T (*)(AkVector*, float))(Il2CppBase() + 0x22AA9B0))(this, value);
	}
	template <typename T = float> T get_Z() {
		return ((T (*)(AkVector*))(Il2CppBase() + 0x22B3A54))(this);
	}

};

}
