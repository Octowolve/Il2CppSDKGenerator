#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSpatialAudioInitSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSpatialAudioInitSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2278440))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSpatialAudioInitSettings*, uintptr_t))(Il2CppBase() + 0x22A7DB8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A7DE4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A7E4C))(this);
	}
	template <typename T = void> T set_uPoolID(int32_t value) {
		return ((T (*)(AkSpatialAudioInitSettings*, int32_t))(Il2CppBase() + 0x22A7FCC))(this, value);
	}
	template <typename T = int32_t> T get_uPoolID() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A8078))(this);
	}
	template <typename T = void> T set_uPoolSize(uint32_t value) {
		return ((T (*)(AkSpatialAudioInitSettings*, uint32_t))(Il2CppBase() + 0x227F1E0))(this, value);
	}
	template <typename T = uint32_t> T get_uPoolSize() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A811C))(this);
	}
	template <typename T = void> T set_uMaxSoundPropagationDepth(uint32_t value) {
		return ((T (*)(AkSpatialAudioInitSettings*, uint32_t))(Il2CppBase() + 0x227F28C))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxSoundPropagationDepth() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A81C0))(this);
	}
	template <typename T = void> T set_uDiffractionFlags(uint32_t value) {
		return ((T (*)(AkSpatialAudioInitSettings*, uint32_t))(Il2CppBase() + 0x227F338))(this, value);
	}
	template <typename T = uint32_t> T get_uDiffractionFlags() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A8264))(this);
	}
	template <typename T = void> T set_fDiffractionShadowAttenFactor(float value) {
		return ((T (*)(AkSpatialAudioInitSettings*, float))(Il2CppBase() + 0x227F3E4))(this, value);
	}
	template <typename T = float> T get_fDiffractionShadowAttenFactor() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A8308))(this);
	}
	template <typename T = void> T set_fDiffractionShadowDegrees(float value) {
		return ((T (*)(AkSpatialAudioInitSettings*, float))(Il2CppBase() + 0x22A83AC))(this, value);
	}
	template <typename T = float> T get_fDiffractionShadowDegrees() {
		return ((T (*)(AkSpatialAudioInitSettings*))(Il2CppBase() + 0x22A8458))(this);
	}

};

}
