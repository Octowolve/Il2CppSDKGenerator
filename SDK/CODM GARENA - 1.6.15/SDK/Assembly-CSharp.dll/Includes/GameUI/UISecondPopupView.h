#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UISecondPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UISecondPopupView"));
	}

	template <typename T = uintptr_t> T& PopupTemplate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mTweenAlpha() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mSelfPanel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& mContentPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mPopupPanel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToCloseView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISecondPopupView*))(Il2CppBase() + 0x3B1104C))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(UISecondPopupView*, Il2CppString*))(Il2CppBase() + 0x3B1150C))(this, text);
	}
	template <typename T = void> T StartToCloseView() {
		return ((T (*)(UISecondPopupView*))(Il2CppBase() + 0x3B10968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UISecondPopupView*))(Il2CppBase() + 0x3B11670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(UISecondPopupView*, Il2CppString*))(Il2CppBase() + 0x3B11678))(this, P0);
	}

};

}
