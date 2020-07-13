#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UISecondPopupTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UISecondPopupTemplate"));
	}

	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CancellBtn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& closeCallback() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOkBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCancellBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCloseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISecondPopupTemplate*))(Il2CppBase() + 0x3B10D80))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(UISecondPopupTemplate*))(Il2CppBase() + 0x3B106B8))(this);
	}
	template <typename T = void> T SetOkBtn(Il2CppString* btnLabel, uintptr_t callback) {
		return ((T (*)(UISecondPopupTemplate*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B101C4))(this, btnLabel, callback);
	}
	template <typename T = void> T SetCancellBtn(Il2CppString* btnLabel, uintptr_t callback) {
		return ((T (*)(UISecondPopupTemplate*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B10300))(this, btnLabel, callback);
	}
	template <typename T = void> T SetCloseBtn(uintptr_t callback) {
		return ((T (*)(UISecondPopupTemplate*, uintptr_t))(Il2CppBase() + 0x3B1043C))(this, callback);
	}
	template <typename T = void> T OnCloseClick(uintptr_t obj) {
		return ((T (*)(UISecondPopupTemplate*, uintptr_t))(Il2CppBase() + 0x3B10EF4))(this, obj);
	}

};

}
