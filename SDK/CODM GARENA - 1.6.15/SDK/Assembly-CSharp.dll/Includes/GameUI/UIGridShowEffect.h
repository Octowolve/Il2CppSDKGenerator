#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIGridShowEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIGridShowEffect"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& kDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kAlphaLazy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& kAlphaDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& kPosLazy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& kPosDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& kScaleDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector3> static T& kLowPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppVector3> static T& kLowScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppVector3> static T& kHighPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppVector3> static T& kHighScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> T& mTwScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mTwAlpha() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mTwPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mActive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIGridShowEffect*))(Il2CppBase() + 0x3AE95E4))(this);
	}
	template <typename T = void> T CreateTween() {
		return ((T (*)(UIGridShowEffect*))(Il2CppBase() + 0x3AE96B8))(this);
	}
	template <typename T = void> T ConfigureTween(bool high, float delay) {
		return ((T (*)(UIGridShowEffect*, bool, float))(Il2CppBase() + 0x3AE99D8))(this, high, delay);
	}
	template <typename T = void> T Play(bool forward, bool high, float delay) {
		return ((T (*)(UIGridShowEffect*, bool, bool, float))(Il2CppBase() + 0x3AE9DEC))(this, forward, high, delay);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(UIGridShowEffect*))(Il2CppBase() + 0x3AEA124))(this);
	}

};

}
