#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenFOV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenFOV"));
	}

	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEndToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_cachedCamera() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4251F0C))(this);
	}
	template <typename T = float> T get_fov() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4251FF4))(this);
	}
	template <typename T = void> T set_fov(float value) {
		return ((T (*)(TweenFOV*, float))(Il2CppBase() + 0x4252024))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4251FF8))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenFOV*, float))(Il2CppBase() + 0x4252028))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenFOV*, float, bool))(Il2CppBase() + 0x425205C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float to) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4252144))(0, go, duration, to);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x425229C))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4252344))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x42523EC))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4252494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x425253C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenFOV*))(Il2CppBase() + 0x4252544))(this);
	}

};

}
