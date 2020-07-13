#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenAlpha
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenAlpha"));
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
	template <typename T = uintptr_t> T& mRect() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mSr() {
		return *(T*)((uintptr_t)this + 0x68);
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

	template <typename T = float> T get_alpha() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424F108))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(TweenAlpha*, float))(Il2CppBase() + 0x424F2F8))(this, value);
	}
	template <typename T = void> T Cache() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424F534))(this);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424F10C))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenAlpha*, float))(Il2CppBase() + 0x424F2FC))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenAlpha*, float, bool))(Il2CppBase() + 0x424F7C4))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float alpha, float delay) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x424F8F4))(0, go, duration, alpha, delay);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424FA54))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424FAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424FBA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenAlpha*))(Il2CppBase() + 0x424FBAC))(this);
	}

};

}
