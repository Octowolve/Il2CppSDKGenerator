#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneRenderingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneRenderingInfo"));
	}

	template <typename T = bool> T& fog() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fogColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& fogMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fogDensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fogStartDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fogEndDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ambientLight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ambientSkyColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ambientEquatorColor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& ambientGroundColor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ambientIntensity() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& ambientMode() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromRenderSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveToRenderSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T LoadFromRenderSettings() {
		return ((T (*)(SceneRenderingInfo*))(Il2CppBase() + 0x3BFEEE0))(this);
	}
	template <typename T = void> T SaveToRenderSettings() {
		return ((T (*)(SceneRenderingInfo*))(Il2CppBase() + 0x3BFF0A4))(this);
	}

};

}
