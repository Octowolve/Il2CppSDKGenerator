#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimEventCamShake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimEventCamShake"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& maxIntensity() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& attenStartRange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& shakeCenter() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
