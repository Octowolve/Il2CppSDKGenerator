#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundPathInfoProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundPathInfoProxy"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A5C30))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSoundPathInfoProxy*, uintptr_t))(Il2CppBase() + 0x22A5CC4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSoundPathInfoProxy*))(Il2CppBase() + 0x22A5D88))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSoundPathInfoProxy*))(Il2CppBase() + 0x22A5DE8))(this);
	}
	template <typename T = int32_t> static T GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A5F70))(0);
	}
	template <typename T = uintptr_t> T GetReflectionPoint(uint32_t idx) {
		return ((T (*)(AkSoundPathInfoProxy*, uint32_t))(Il2CppBase() + 0x22A6008))(this, idx);
	}
	template <typename T = uintptr_t> T GetTriangle(uint32_t idx) {
		return ((T (*)(AkSoundPathInfoProxy*, uint32_t))(Il2CppBase() + 0x22A6134))(this, idx);
	}

};

}
