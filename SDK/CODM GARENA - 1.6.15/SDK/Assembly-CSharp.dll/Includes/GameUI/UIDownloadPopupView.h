#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIDownloadPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIDownloadPopupView"));
	}

	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CancellBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ContentLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SmallTipLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MapIcon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(UIDownloadPopupView*, Il2CppString*))(Il2CppBase() + 0x3AD60AC))(this, text);
	}
	template <typename T = void> T SetInfos(Il2CppString* title, Il2CppString* content, Il2CppString* tip, Il2CppString* mapIcon) {
		return ((T (*)(UIDownloadPopupView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3AD61A0))(this, title, content, tip, mapIcon);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(UIDownloadPopupView*, Il2CppString*))(Il2CppBase() + 0x3AD62F8))(this, P0);
	}

};

}
