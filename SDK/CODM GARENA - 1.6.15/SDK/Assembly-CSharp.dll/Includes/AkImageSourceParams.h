#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkImageSourceParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkImageSourceParams"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4901D78))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkImageSourceParams*, uintptr_t))(Il2CppBase() + 0x4901E0C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkImageSourceParams*))(Il2CppBase() + 0x4901E38))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkImageSourceParams*))(Il2CppBase() + 0x4901EA0))(this);
	}
	template <typename T = void> T set_sourcePosition(uintptr_t value) {
		return ((T (*)(AkImageSourceParams*, uintptr_t))(Il2CppBase() + 0x4902028))(this, value);
	}
	template <typename T = uintptr_t> T get_sourcePosition() {
		return ((T (*)(AkImageSourceParams*))(Il2CppBase() + 0x49020F0))(this);
	}
	template <typename T = void> T set_fDistanceScalingFactor(float value) {
		return ((T (*)(AkImageSourceParams*, float))(Il2CppBase() + 0x4902218))(this, value);
	}
	template <typename T = float> T get_fDistanceScalingFactor() {
		return ((T (*)(AkImageSourceParams*))(Il2CppBase() + 0x49022CC))(this);
	}
	template <typename T = void> T set_fLevel(float value) {
		return ((T (*)(AkImageSourceParams*, float))(Il2CppBase() + 0x4902378))(this, value);
	}
	template <typename T = float> T get_fLevel() {
		return ((T (*)(AkImageSourceParams*))(Il2CppBase() + 0x490242C))(this);
	}

};

}
