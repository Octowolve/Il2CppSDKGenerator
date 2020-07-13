#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodRainCameraController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodRainCameraController"));
	}

	template <typename T = uintptr_t> T& FrameBloodCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SplatterBloodCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FrameEffectInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Smooth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& timeElapsed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& currentAlpha() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& oldAlpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& lerpStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lerpTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hpHigh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& hpMid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& hpLow() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Attack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLerpTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Attack(float damage) {
		return ((T (*)(BloodRainCameraController*, float))(Il2CppBase() + 0x35BD4C4))(this, damage);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BloodRainCameraController*))(Il2CppBase() + 0x35BD604))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BloodRainCameraController*))(Il2CppBase() + 0x35BD78C))(this);
	}
	template <typename T = float> T LerpTime(float lerpTime) {
		return ((T (*)(BloodRainCameraController*, float))(Il2CppBase() + 0x35BDA14))(this, lerpTime);
	}
	template <typename T = void> T ResetLerpTime() {
		return ((T (*)(BloodRainCameraController*))(Il2CppBase() + 0x35BD6E8))(this);
	}

};

}
