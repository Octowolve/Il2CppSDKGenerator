#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckFireParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheckFireParam"));
	}

	template <typename T = bool> T& CheckAim() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ForceAimedFire() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& HoldDoubleClick() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& mCheckFire() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& IsReleaseToFire() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CheckResetAdsButton() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& mCheckReset() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& mIsAimButtonDown() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& mIsButtonDown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsAimButtonUp() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& IsButtonUp() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& IsAimFiring() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& mIsPress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsDoubleButtonClickDown() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IsDoubleButtonClickUp() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& IsDoubleButtonPress() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& IsAdsDown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsAdsUp() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& IsAdsPress() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& IsDoubleClick() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& FireButtonDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& FireButtonUp() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_CheckFire(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A2014C))(this, value);
	}
	template <typename T = bool> T get_CheckFire() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A20154))(this);
	}
	template <typename T = void> T set_CheckReset(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A2015C))(this, value);
	}
	template <typename T = bool> T get_CheckReset() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A20174))(this);
	}
	template <typename T = void> T set_IsAimButtonDown(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A2017C))(this, value);
	}
	template <typename T = bool> T get_IsAimButtonDown() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A20184))(this);
	}
	template <typename T = bool> T get_IsButtonDown() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A2018C))(this);
	}
	template <typename T = void> T set_IsButtonDown(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A20194))(this, value);
	}
	template <typename T = void> T set_IsAimButtonUp(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A201AC))(this, value);
	}
	template <typename T = bool> T get_IsAimButtonUp() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A201B4))(this);
	}
	template <typename T = bool> T get_IsPress() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A201BC))(this);
	}
	template <typename T = void> T set_IsPress(bool value) {
		return ((T (*)(CheckFireParam*, bool))(Il2CppBase() + 0x3A201C4))(this, value);
	}
	template <typename T = bool> T get_IsDoubleButtonClick() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A201CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CheckFireParam*))(Il2CppBase() + 0x3A201E0))(this);
	}

};

}
