#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenProgressBar"));
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
	template <typename T = uintptr_t> T& mProgressBar() {
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
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x4255CB8))(this);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x4255D84))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenProgressBar*, float))(Il2CppBase() + 0x4255E78))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenProgressBar*, float, bool))(Il2CppBase() + 0x4255F6C))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float fill) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x425609C))(0, go, duration, fill);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x42561F4))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x425629C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x4256344))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenProgressBar*))(Il2CppBase() + 0x425634C))(this);
	}

};

}
