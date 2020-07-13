#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class WinnerCircleScreenCaptureWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "WinnerCircleScreenCaptureWindowController"));
	}

	template <typename T = bool> T& _showHint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _obsolete() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = uintptr_t> T& _uiview() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCaptureBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimPlayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideHint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8B5D8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8B67C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8B790))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8B8E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8BAB8))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8BC1C))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8BF8C))(this);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*, uintptr_t))(Il2CppBase() + 0x3C8C054))(this, msg);
	}
	template <typename T = void> T OnCaptureBtnClicked() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C234))(this);
	}
	template <typename T = void> T OnAnimPlayCallback() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C4B0))(this);
	}
	template <typename T = void> T OnHideHint() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C77C))(this);
	}
	template <typename T = void> T OnPlayAnim() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8BD70))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C88C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C89C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C8A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WinnerCircleScreenCaptureWindowController*))(Il2CppBase() + 0x3C8C8AC))(this);
	}

};

}
