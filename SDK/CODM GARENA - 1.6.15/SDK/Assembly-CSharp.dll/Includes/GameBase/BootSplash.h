#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BootSplash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BootSplash"));
	}

	template <typename T = uintptr_t> T& mGameFramework() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ActiveWhenSplashFinishLogo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ActiveWhenSplashFinishTips() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mSplashTween_Width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mSplashTween_Squad() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mTempTween() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ObbBrokenObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BackgroundTexture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& BackgroundAdaptor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& SPLASH_FADE_IN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SPLASH_SHOWING_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SPLASH_FADE_OUT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bHelpGameFrameworkLateUpdate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMainCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x373FD10))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x373FDBC))(this);
	}
	template <typename T = void> T InitTween() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x373FF4C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740214))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740338))(this);
	}
	template <typename T = bool> T CheckOBB() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740640))(this);
	}
	template <typename T = uintptr_t> T StartTween() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740754))(this);
	}
	template <typename T = void> T ChangeMainCameraPos() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740A6C))(this);
	}
	template <typename T = void> T FinishSplash() {
		return ((T (*)(BootSplash*))(Il2CppBase() + 0x3740834))(this);
	}

};

}
