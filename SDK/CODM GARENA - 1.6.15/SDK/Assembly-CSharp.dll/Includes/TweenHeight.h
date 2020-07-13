#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenHeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenHeight"));
	}

	template <typename T = int32_t> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& to() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& updateTable() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mTable() {
		return *(T*)((uintptr_t)this + 0x64);
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

	template <typename T = uintptr_t> T get_cachedWidget() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x42525FC))(this);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x42526E4))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(TweenHeight*, int32_t))(Il2CppBase() + 0x4252714))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x42526E8))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(TweenHeight*, int32_t))(Il2CppBase() + 0x4252718))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenHeight*, float, bool))(Il2CppBase() + 0x425274C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t widget, float duration, int32_t height) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x42529E4))(0, widget, duration, height);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252B50))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252BF8))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252CA0))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252D48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenHeight*))(Il2CppBase() + 0x4252DF8))(this);
	}

};

}
