#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenColor"));
	}

	template <typename T = uintptr_t> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mCached() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mLight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mSr() {
		return *(T*)((uintptr_t)this + 0x84);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Cache() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x42503E4))(this);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x425068C))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(TweenColor*, uintptr_t))(Il2CppBase() + 0x42508E8))(this, value);
	}
	template <typename T = uintptr_t> T get_value() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x425069C))(this);
	}
	template <typename T = void> T set_value(uintptr_t value) {
		return ((T (*)(TweenColor*, uintptr_t))(Il2CppBase() + 0x4250908))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenColor*, float, bool))(Il2CppBase() + 0x4250BDC))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x4250CFC))(0, go, duration, color);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x4250E8C))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x4250F54))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x425101C))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x42510DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x425119C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenColor*))(Il2CppBase() + 0x42511A4))(this);
	}

};

}
