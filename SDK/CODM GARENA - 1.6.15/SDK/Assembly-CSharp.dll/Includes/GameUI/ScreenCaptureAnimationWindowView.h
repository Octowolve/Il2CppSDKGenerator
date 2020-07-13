#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenCaptureAnimationWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenCaptureAnimationWindowView"));
	}

	template <typename T = uintptr_t> T& maskContainer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& maskTween() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& tweenFinishCallback() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweeenFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnTweeenFinishCallback() {
		return ((T (*)(ScreenCaptureAnimationWindowView*))(Il2CppBase() + 0x4476550))(this);
	}

};

}
