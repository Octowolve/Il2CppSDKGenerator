#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIButtonTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIButtonTemplate"));
	}

	template <typename T = uintptr_t> T& BtnLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCacheCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mColdDownTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bNeedColddown() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& mCacheBtnLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mCacheBoxcollider() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColddownTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColddown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIButtonTemplate*))(Il2CppBase() + 0x29D0BEC))(this);
	}
	template <typename T = void> T SetColddownTime(int32_t t) {
		return ((T (*)(UIButtonTemplate*, int32_t))(Il2CppBase() + 0x29D0D9C))(this, t);
	}
	template <typename T = void> T SetBtnLabel(Il2CppString* text) {
		return ((T (*)(UIButtonTemplate*, Il2CppString*))(Il2CppBase() + 0x29D0E4C))(this, text);
	}
	template <typename T = void> T SetBtnCallback(uintptr_t callback) {
		return ((T (*)(UIButtonTemplate*, uintptr_t))(Il2CppBase() + 0x29D0F3C))(this, callback);
	}
	template <typename T = void> T SetBtn(Il2CppString* text, uintptr_t callback, bool isNeedEffect) {
		return ((T (*)(UIButtonTemplate*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x29D0FE4))(this, text, callback, isNeedEffect);
	}
	template <typename T = void> T OnBtnClick(uintptr_t obj) {
		return ((T (*)(UIButtonTemplate*, uintptr_t))(Il2CppBase() + 0x29D11A4))(this, obj);
	}
	template <typename T = void> T SetDisabled(bool isDisabled) {
		return ((T (*)(UIButtonTemplate*, bool))(Il2CppBase() + 0x29D14B4))(this, isDisabled);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIButtonTemplate*))(Il2CppBase() + 0x29D1650))(this);
	}
	template <typename T = void> T SetTimeColddown() {
		return ((T (*)(UIButtonTemplate*))(Il2CppBase() + 0x29D1298))(this);
	}
	template <typename T = void> T SetReddotActive(bool active) {
		return ((T (*)(UIButtonTemplate*, bool))(Il2CppBase() + 0x29D1730))(this, active);
	}

};

}
