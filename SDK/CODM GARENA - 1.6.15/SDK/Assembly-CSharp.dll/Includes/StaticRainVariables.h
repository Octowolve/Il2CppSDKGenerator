#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticRainVariables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StaticRainVariables"));
	}

	template <typename T = bool> T& AutoStart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& FullScreen() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& OverlayColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OverlayTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& FadeinCurve() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SizeX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& SizeY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& SpawnOffsetX() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& SpawnOffsetY() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DistortionValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& ReliefValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Blur() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Darkness() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
