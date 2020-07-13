#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraShakeVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraShakeVolume"));
	}

	template <typename T = float> T& shakeIntensity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& shakeDuration() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& stopOnExit() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CameraShakeVolume*))(Il2CppBase() + 0x419302C))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(CameraShakeVolume*, uintptr_t, bool))(Il2CppBase() + 0x41930E0))(this, p, enter);
	}

};

}
