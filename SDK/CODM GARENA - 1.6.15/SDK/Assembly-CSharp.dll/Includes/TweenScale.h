#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenScale"));
	}

	template <typename T = Il2CppVector3> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& updateTable() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mTable() {
		return *(T*)((uintptr_t)this + 0x74);
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

	template <typename T = uintptr_t> T get_cachedTransform() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4256E24))(this);
	}
	template <typename T = Il2CppVector3> T get_value() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4256EF4))(this);
	}
	template <typename T = void> T set_value(Il2CppVector3 value) {
		return ((T (*)(TweenScale*, Il2CppVector3))(Il2CppBase() + 0x4256F30))(this, value);
	}
	template <typename T = Il2CppVector3> T get_scale() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4256F80))(this);
	}
	template <typename T = void> T set_scale(Il2CppVector3 value) {
		return ((T (*)(TweenScale*, Il2CppVector3))(Il2CppBase() + 0x4256F90))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenScale*, float, bool))(Il2CppBase() + 0x4256FA8))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, Il2CppVector3 scale) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x425724C))(0, go, duration, scale);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x42573C0))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4257484))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4257548))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x4257600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x42576B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenScale*))(Il2CppBase() + 0x42576C0))(this);
	}

};

}
