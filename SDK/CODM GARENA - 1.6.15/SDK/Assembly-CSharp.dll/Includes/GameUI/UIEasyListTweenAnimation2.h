#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIEasyListTweenAnimation2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIEasyListTweenAnimation2"));
	}

	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& delayRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& virtualParent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIEasyListTweenAnimation2*))(Il2CppBase() + 0x3AD6AE4))(this);
	}
	template <typename T = void> T ShowAnimation(float delayTime, bool helpEnable) {
		return ((T (*)(UIEasyListTweenAnimation2*, float, bool))(Il2CppBase() + 0x3AD6E08))(this, delayTime, helpEnable);
	}
	template <typename T = Il2CppVector3> T GetLocalPosition() {
		return ((T (*)(UIEasyListTweenAnimation2*))(Il2CppBase() + 0x3AD7074))(this);
	}

};

}
