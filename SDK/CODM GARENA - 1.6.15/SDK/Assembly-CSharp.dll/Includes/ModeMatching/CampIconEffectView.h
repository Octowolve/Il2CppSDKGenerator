#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class CampIconEffectView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "CampIconEffectView"));
	}

	template <typename T = uintptr_t> T& m_EffectCampAnimator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRotationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlyInAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T GoToStop() {
		return ((T (*)(CampIconEffectView*))(Il2CppBase() + 0x33020A4))(this);
	}
	template <typename T = void> T ShowCamp() {
		return ((T (*)(CampIconEffectView*))(Il2CppBase() + 0x3302344))(this);
	}
	template <typename T = void> T HideCamp() {
		return ((T (*)(CampIconEffectView*))(Il2CppBase() + 0x33026B8))(this);
	}
	template <typename T = void> T PlayRotationAnimation() {
		return ((T (*)(CampIconEffectView*))(Il2CppBase() + 0x3302788))(this);
	}
	template <typename T = void> T PlayFlyInAnimation() {
		return ((T (*)(CampIconEffectView*))(Il2CppBase() + 0x33024CC))(this);
	}

};

}
