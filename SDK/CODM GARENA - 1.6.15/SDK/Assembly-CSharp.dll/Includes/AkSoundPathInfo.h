#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundPathInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundPathInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A4CFC))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSoundPathInfo*, uintptr_t))(Il2CppBase() + 0x22A4D90))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A4DBC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A4E24))(this);
	}
	template <typename T = void> T set_imageSource(uintptr_t value) {
		return ((T (*)(AkSoundPathInfo*, uintptr_t))(Il2CppBase() + 0x22A4FA4))(this, value);
	}
	template <typename T = uintptr_t> T get_imageSource() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A50CC))(this);
	}
	template <typename T = void> T set_numReflections(uint32_t value) {
		return ((T (*)(AkSoundPathInfo*, uint32_t))(Il2CppBase() + 0x22A5218))(this, value);
	}
	template <typename T = uint32_t> T get_numReflections() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A52C4))(this);
	}
	template <typename T = void> T set_occlusionPoint(uintptr_t value) {
		return ((T (*)(AkSoundPathInfo*, uintptr_t))(Il2CppBase() + 0x22A5368))(this, value);
	}
	template <typename T = uintptr_t> T get_occlusionPoint() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A5490))(this);
	}
	template <typename T = void> T set_isOccluded(bool value) {
		return ((T (*)(AkSoundPathInfo*, bool))(Il2CppBase() + 0x22A55B4))(this, value);
	}
	template <typename T = bool> T get_isOccluded() {
		return ((T (*)(AkSoundPathInfo*))(Il2CppBase() + 0x22A5660))(this);
	}

};

}
