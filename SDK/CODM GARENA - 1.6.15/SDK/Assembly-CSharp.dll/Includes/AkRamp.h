#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkRamp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkRamp"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491B820))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkRamp*, uintptr_t))(Il2CppBase() + 0x491B8B4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkRamp*))(Il2CppBase() + 0x491B8E0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkRamp*))(Il2CppBase() + 0x491B948))(this);
	}
	template <typename T = void> T set_fPrev(float value) {
		return ((T (*)(AkRamp*, float))(Il2CppBase() + 0x491BAD0))(this, value);
	}
	template <typename T = float> T get_fPrev() {
		return ((T (*)(AkRamp*))(Il2CppBase() + 0x491BB84))(this);
	}
	template <typename T = void> T set_fNext(float value) {
		return ((T (*)(AkRamp*, float))(Il2CppBase() + 0x491BC30))(this, value);
	}
	template <typename T = float> T get_fNext() {
		return ((T (*)(AkRamp*))(Il2CppBase() + 0x491BCE4))(this);
	}

};

}
