#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIOutFadeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIOutFadeEffect"));
	}

	template <typename T = uintptr_t> static T& AlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& tweenAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T ResetFadeOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B00F88))(0);
	}
	template <typename T = uintptr_t> static T GetCurrent() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B01174))(0);
	}
	template <typename T = void> static T PlayFadeOut(uintptr_t gObj, uintptr_t onFinish) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B01334))(0, gObj, onFinish);
	}

};

}
