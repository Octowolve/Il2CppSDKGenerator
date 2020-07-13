#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenFill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenFill"));
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
	template <typename T = uintptr_t> T& mSprite() {
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
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x425125C))(this);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x4251328))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(TweenFill*, float))(Il2CppBase() + 0x4251428))(this, value);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenFill*, float, bool))(Il2CppBase() + 0x42515E0))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float fill) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4251710))(0, go, duration, fill);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x4251868))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x4251910))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetStartToCurrentValue() {
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x42519B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetEndToCurrentValue() {
		return ((T (*)(TweenFill*))(Il2CppBase() + 0x42519C0))(this);
	}

};

}
