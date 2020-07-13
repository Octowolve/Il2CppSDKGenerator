#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenWidth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenWidth"));
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
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4258980))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4258A68))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(TweenWidth*, int32_t))(Il2CppBase() + 0x4258A98))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4258A6C))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(TweenWidth*, int32_t))(Il2CppBase() + 0x4258A9C))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenWidth*, float, bool))(Il2CppBase() + 0x4258AD0))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t widget, float duration, int32_t width) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x4258D68))(0, widget, duration, width);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4258ED4))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4258F7C))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4259024))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x42590CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x4259174))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenWidth*))(Il2CppBase() + 0x425917C))(this);
	}

};

}
