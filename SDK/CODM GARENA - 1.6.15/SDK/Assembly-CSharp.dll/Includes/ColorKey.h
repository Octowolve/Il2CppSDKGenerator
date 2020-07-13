#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColorKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorKey"));
	}

	template <typename T = float> static T& maxBrightness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minBrightness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& maxSaturation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tintColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& brightnessOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& saturation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& minEffectiveLumaRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& maxEffectiveLumaRange() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& runtimeColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRuntimeKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ConstrainValue() {
		return ((T (*)(ColorKey*))(Il2CppBase() + 0x3A4147C))(this);
	}
	template <typename T = uintptr_t> T GetRuntimeKeyValue(bool forceConstrainValue) {
		return ((T (*)(ColorKey*, bool))(Il2CppBase() + 0x3A41D7C))(this, forceConstrainValue);
	}

};

}
