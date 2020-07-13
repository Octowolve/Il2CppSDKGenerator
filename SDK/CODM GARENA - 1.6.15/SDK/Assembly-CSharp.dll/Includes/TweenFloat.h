#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenFloat"));
	}

	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_value() {
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

	template <typename T = float> T get_value() {
		return ((T (*)(TweenFloat*))(Il2CppBase() + 0x4251A74))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenFloat*, float))(Il2CppBase() + 0x4251A7C))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenFloat*, float, bool))(Il2CppBase() + 0x4251A84))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float value, float delay) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x4251BA4))(0, go, duration, value, delay);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenFloat*))(Il2CppBase() + 0x4251D00))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenFloat*))(Il2CppBase() + 0x4251DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenFloat*))(Il2CppBase() + 0x4251E48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenFloat*))(Il2CppBase() + 0x4251E50))(this);
	}

};

}
