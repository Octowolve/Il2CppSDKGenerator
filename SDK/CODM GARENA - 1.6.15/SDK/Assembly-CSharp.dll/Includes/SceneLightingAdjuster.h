#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLightingAdjuster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneLightingAdjuster"));
	}

	template <typename T = uintptr_t> T& sceneMainLight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mainlightIntensity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& skyColor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SceneLightingAdjuster*))(Il2CppBase() + 0x3BFCE94))(this);
	}

};

}
