#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Splash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Splash"));
	}

	template <typename T = uintptr_t> T& loginUIRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& loginRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cameraSplash() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cameraLogin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SplashSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_SplashTX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FadOutTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_OriginalBackground() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EAE34))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EAF2C))(this);
	}
	template <typename T = uintptr_t> T StartSplash() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EB094))(this);
	}
	template <typename T = void> T FinishSplash() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EB17C))(this);
	}
	template <typename T = void> T PlayFadeOut() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EB2C4))(this);
	}
	template <typename T = void> T PlayFadeIn() {
		return ((T (*)(Splash*))(Il2CppBase() + 0x42EB380))(this);
	}

};

}
