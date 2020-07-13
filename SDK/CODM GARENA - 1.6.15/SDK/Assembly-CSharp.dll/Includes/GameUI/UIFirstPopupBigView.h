#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFirstPopupBigView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFirstPopupBigView"));
	}

	template <typename T = uintptr_t> T& PopupTemplate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContainerWidget() {
		return *(T*)((uintptr_t)this + 0xB0);
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

	template <typename T = void> T Awake() {
		return ((T (*)(UIFirstPopupBigView*))(Il2CppBase() + 0x3AD9108))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(UIFirstPopupBigView*, Il2CppString*))(Il2CppBase() + 0x3AD9348))(this, text);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIFirstPopupBigView*))(Il2CppBase() + 0x3AD94AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(UIFirstPopupBigView*, Il2CppString*))(Il2CppBase() + 0x3AD94B4))(this, P0);
	}

};

}
