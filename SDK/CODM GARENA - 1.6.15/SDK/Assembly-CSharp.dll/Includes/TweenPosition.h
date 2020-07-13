#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenPosition"));
	}

	template <typename T = Il2CppVector3> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& worldSpace() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mRect() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEndToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentValueToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_cachedTransform() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x42550B0))(this);
	}
	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255180))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(TweenPosition*, Il2CppVector3))(Il2CppBase() + 0x4255218))(this, value);
	}
	template <typename T = Il2CppVector3> T get_value() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255190))(this);
	}
	template <typename T = void> T set_value(Il2CppVector3 value) {
		return ((T (*)(TweenPosition*, Il2CppVector3))(Il2CppBase() + 0x4255230))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x42553E4))(this);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenPosition*, float, bool))(Il2CppBase() + 0x42554A8))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, Il2CppVector3 pos) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x4255600))(0, go, duration, pos);
	}
	template <typename T = uintptr_t> static T Begin_1(uintptr_t go, float duration, Il2CppVector3 pos, bool worldSpace) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, bool))(Il2CppBase() + 0x4255774))(0, go, duration, pos, worldSpace);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255900))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x42559C4))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255A88))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255BF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenPosition*))(Il2CppBase() + 0x4255C00))(this);
	}

};

}
