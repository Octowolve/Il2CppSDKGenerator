#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenBlur
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenBlur"));
	}

	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mCached() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& blurUtil() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEndToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Cache() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x424FC58))(this);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x424FD24))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenBlur*, float))(Il2CppBase() + 0x424FE1C))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenBlur*, float, bool))(Il2CppBase() + 0x424FF0C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float fill) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x425003C))(0, go, duration, fill);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x4250194))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x425023C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x42502E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenBlur*))(Il2CppBase() + 0x42502EC))(this);
	}

};

}
