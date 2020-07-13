#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenOrthoSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenOrthoSize"));
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

	template <typename T = uintptr_t> T get_cachedCamera() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254B1C))(this);
	}
	template <typename T = float> T get_orthoSize() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254C04))(this);
	}
	template <typename T = void> T set_orthoSize(float value) {
		return ((T (*)(TweenOrthoSize*, float))(Il2CppBase() + 0x4254C34))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254C08))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenOrthoSize*, float))(Il2CppBase() + 0x4254C38))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenOrthoSize*, float, bool))(Il2CppBase() + 0x4254C6C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float to) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4254D54))(0, go, duration, to);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254EAC))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254F54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4254FFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenOrthoSize*))(Il2CppBase() + 0x4255004))(this);
	}

};

}
