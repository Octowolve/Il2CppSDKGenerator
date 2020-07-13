#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenVolume"));
	}

	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mSource() {
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

	template <typename T = uintptr_t> T get_audioSource() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x4258104))(this);
	}
	template <typename T = float> T get_volume() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x4258304))(this);
	}
	template <typename T = void> T set_volume(float value) {
		return ((T (*)(TweenVolume*, float))(Il2CppBase() + 0x42583F0))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x4258308))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenVolume*, float))(Il2CppBase() + 0x42583F4))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenVolume*, float, bool))(Il2CppBase() + 0x42584DC))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float targetVolume) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4258610))(0, go, duration, targetVolume);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x4258770))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x4258818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x42588C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenVolume*))(Il2CppBase() + 0x42588C8))(this);
	}

};

}
