#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JoyStickView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JoyStickView"));
	}

	template <typename T = float> T& CacheWidgetAlpha() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> static T& DisableAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HideInEmulatorAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HideInGamepadAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mJoyStickConfigType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mJoyStickButtonConfig() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoystickView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1E7A4))(this);
	}
	template <typename T = void> T UpdateJoystickView() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1E860))(this);
	}
	template <typename T = void> T SetInputConfig() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1E910))(this);
	}
	template <typename T = Il2CppVector2> T GetJoyStickSize() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1ED08))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1EFD0))(this);
	}
	template <typename T = Il2CppVector2> T GetJoyStickScreenPos() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1EA38))(this);
	}
	template <typename T = void> T InitFromConfig(uintptr_t btnConfig, uintptr_t type) {
		return ((T (*)(JoyStickView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E1F074))(this, btnConfig, type);
	}
	template <typename T = void> T UpdateAlpha() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1F39C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1F800))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1F92C))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FA58))(this);
	}
	template <typename T = void> T DisableView(bool disable) {
		return ((T (*)(JoyStickView*, bool))(Il2CppBase() + 0x2E169A8))(this, disable);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FAF8))(this);
	}
	template <typename T = bool> T NeedHideInGamepad() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FB98))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FC38))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FCD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FD68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FD70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(JoyStickView*))(Il2CppBase() + 0x2E1FD78))(this);
	}

};

}
