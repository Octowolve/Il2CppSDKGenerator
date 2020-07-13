#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkObstructionOcclusionValues
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkObstructionOcclusionValues"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491242C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkObstructionOcclusionValues*, uintptr_t))(Il2CppBase() + 0x49124C0))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkObstructionOcclusionValues*))(Il2CppBase() + 0x49124EC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkObstructionOcclusionValues*))(Il2CppBase() + 0x4912554))(this);
	}
	template <typename T = void> T set_occlusion(float value) {
		return ((T (*)(AkObstructionOcclusionValues*, float))(Il2CppBase() + 0x49126DC))(this, value);
	}
	template <typename T = float> T get_occlusion() {
		return ((T (*)(AkObstructionOcclusionValues*))(Il2CppBase() + 0x4912790))(this);
	}
	template <typename T = void> T set_obstruction(float value) {
		return ((T (*)(AkObstructionOcclusionValues*, float))(Il2CppBase() + 0x491283C))(this, value);
	}
	template <typename T = float> T get_obstruction() {
		return ((T (*)(AkObstructionOcclusionValues*))(Il2CppBase() + 0x49128F0))(this);
	}

};

}
