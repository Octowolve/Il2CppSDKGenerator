#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIEasyListTweenAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIEasyListTweenAnimation"));
	}

	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenPos() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(UIEasyListTweenAnimation*))(Il2CppBase() + 0x3AD63A4))(this);
	}
	template <typename T = void> T ShowAnimation(float delayTime, bool helpEnable) {
		return ((T (*)(UIEasyListTweenAnimation*, float, bool))(Il2CppBase() + 0x3AD66E8))(this, delayTime, helpEnable);
	}
	template <typename T = Il2CppVector3> T GetLocalPosition() {
		return ((T (*)(UIEasyListTweenAnimation*))(Il2CppBase() + 0x3AD6944))(this);
	}

};

}
