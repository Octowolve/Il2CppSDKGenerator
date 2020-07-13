#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraResolutionFOVConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraResolutionFOVConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ConfigArray() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T GetFOV(float ratio) {
		return ((T (*)(CameraResolutionFOVConfig*, float))(Il2CppBase() + 0x41921BC))(this, ratio);
	}

};

}
