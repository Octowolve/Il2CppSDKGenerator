#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSpatialAudioListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSpatialAudioListener"));
	}

	template <typename T = uintptr_t> static T& s_SpatialAudioListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& spatialAudioListeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& AkAudioListener() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> static T get_TheSpatialAudioListener() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A8500))(0);
	}
	template <typename T = uintptr_t> static T get_SpatialAudioListeners() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A8670))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkSpatialAudioListener*))(Il2CppBase() + 0x22A8720))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkSpatialAudioListener*))(Il2CppBase() + 0x22A87A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkSpatialAudioListener*))(Il2CppBase() + 0x22A89B8))(this);
	}

};

}
