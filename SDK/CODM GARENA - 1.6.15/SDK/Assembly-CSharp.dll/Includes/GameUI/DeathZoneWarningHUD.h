#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DeathZoneWarningHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DeathZoneWarningHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& EnterVolumeTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& DelayDeathTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& LastShowCountDownTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bCurrentShow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCountDownText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Show(bool bShow, float inDelayDeathTime) {
		return ((T (*)(DeathZoneWarningHUD*, bool, float))(Il2CppBase() + 0x46E3A54))(this, bShow, inDelayDeathTime);
	}
	template <typename T = void> T UpdateCountDownText() {
		return ((T (*)(DeathZoneWarningHUD*))(Il2CppBase() + 0x46E3CCC))(this);
	}

};

}
