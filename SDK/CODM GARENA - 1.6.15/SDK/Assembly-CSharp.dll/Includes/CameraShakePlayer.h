#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraShakePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakePlayer"));
	}

	template <typename T = uintptr_t> T& cameraShakeParam() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Play() {
		return ((T (*)(CameraShakePlayer*))(Il2CppBase() + 0x53191C8))(this);
	}

};

}
