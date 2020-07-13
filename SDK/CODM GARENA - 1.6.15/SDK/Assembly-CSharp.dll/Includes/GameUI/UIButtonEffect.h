#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIButtonEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIButtonEffect"));
	}

	template <typename T = uintptr_t> T& TweenTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& kDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kScaleTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kAlphaTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> T& mScaleFrom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& mScaleTo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mAlphaFrom() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mAlphaTo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTweenScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Capture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIButtonEffect*))(Il2CppBase() + 0x29D0494))(this);
	}
	template <typename T = void> T Capture() {
		return ((T (*)(UIButtonEffect*))(Il2CppBase() + 0x29D05D0))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIButtonEffect*, bool))(Il2CppBase() + 0x29D0874))(this, isPressed);
	}

};

}
