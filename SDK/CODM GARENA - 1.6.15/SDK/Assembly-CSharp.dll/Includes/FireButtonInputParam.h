#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireButtonInputParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireButtonInputParam"));
	}

	template <typename T = float> static T& BanClickTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mIsFiring() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mIsFireButtonDown() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& mIsFireButtonUp() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& LastFireButtonState() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = uintptr_t> T& FireBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FireInput() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FireBtnType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsMustDisable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireDownAndUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsFiring() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC21A8))(this);
	}
	template <typename T = void> T set_IsFiring(bool value) {
		return ((T (*)(FireButtonInputParam*, bool))(Il2CppBase() + 0x3CC21B0))(this, value);
	}
	template <typename T = bool> T get_IsFireButtonDown() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC21B8))(this);
	}
	template <typename T = void> T set_IsFireButtonDown(bool value) {
		return ((T (*)(FireButtonInputParam*, bool))(Il2CppBase() + 0x3CC21C0))(this, value);
	}
	template <typename T = bool> T get_IsFireButtonUp() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC22E0))(this);
	}
	template <typename T = void> T set_IsFireButtonUp(bool value) {
		return ((T (*)(FireButtonInputParam*, bool))(Il2CppBase() + 0x3CC22E8))(this, value);
	}
	template <typename T = bool> T IsAds() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC22F0))(this);
	}
	template <typename T = void> T UpdateFireDownAndUpState() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC2684))(this);
	}
	template <typename T = bool> T GetFireAimButtonDown() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC278C))(this);
	}
	template <typename T = bool> T GetFireAimButtonUp() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC287C))(this);
	}
	template <typename T = bool> T GetAimFiring() {
		return ((T (*)(FireButtonInputParam*))(Il2CppBase() + 0x3CC296C))(this);
	}

};

}
