#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSpatialAudioEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSpatialAudioEmitter"));
	}

	template <typename T = uintptr_t> T& reflectAuxBus() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& reflectionMaxPathLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& reflectionsAuxBusGain() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& reflectionsOrder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& roomReverbAuxBusGain() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& AutoRegistion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AkTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mIsRegistered() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AkSpatialAudioEmitter*))(Il2CppBase() + 0x22A78E0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkSpatialAudioEmitter*))(Il2CppBase() + 0x22A7A24))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkSpatialAudioEmitter*))(Il2CppBase() + 0x22A7BC0))(this);
	}
	template <typename T = void> T RegisterManually() {
		return ((T (*)(AkSpatialAudioEmitter*))(Il2CppBase() + 0x22A7A34))(this);
	}
	template <typename T = void> T UnRegisterManually() {
		return ((T (*)(AkSpatialAudioEmitter*))(Il2CppBase() + 0x22A7BD0))(this);
	}
	template <typename T = void> T ApplySettingsFrom(uintptr_t pTemplate) {
		return ((T (*)(AkSpatialAudioEmitter*, uintptr_t))(Il2CppBase() + 0x22A7C94))(this, pTemplate);
	}

};

}
