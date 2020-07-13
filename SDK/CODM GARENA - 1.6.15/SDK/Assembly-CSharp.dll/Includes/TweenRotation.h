#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenRotation"));
	}

	template <typename T = Il2CppVector3> T& from() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& quaternionLerp() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x70);
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
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x42563F8))(this);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x42564C8))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(TweenRotation*, Il2CppQuaternion))(Il2CppBase() + 0x4256514))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_value() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x42564D8))(this);
	}
	template <typename T = void> T set_value(Il2CppQuaternion value) {
		return ((T (*)(TweenRotation*, Il2CppQuaternion))(Il2CppBase() + 0x4256534))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenRotation*, float, bool))(Il2CppBase() + 0x4256588))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, Il2CppQuaternion rot) {
		return ((T (*)(void *, uintptr_t, float, Il2CppQuaternion))(Il2CppBase() + 0x42567CC))(0, go, duration, rot);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256990))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256A7C))(this);
	}
	template <typename T = void> T SetCurrentValueToStart() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256B68))(this);
	}
	template <typename T = void> T SetCurrentValueToEnd() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256C48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256D28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenRotation*))(Il2CppBase() + 0x4256D30))(this);
	}

};

}
