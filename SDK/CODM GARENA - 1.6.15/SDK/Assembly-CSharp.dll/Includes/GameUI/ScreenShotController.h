#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenShotController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenShotController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTextureValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQQFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQQZoneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeChatFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeChatMomentsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44783D8))(this);
	}
	template <typename T = uintptr_t> T get_rids() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x447847C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4478518))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44789A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4478C84))(this);
	}
	template <typename T = void> T NotifyScreenShot() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4478894))(this);
	}
	template <typename T = void> T InitView(bool bShow) {
		return ((T (*)(ScreenShotController*, bool))(Il2CppBase() + 0x4478638))(this, bShow);
	}
	template <typename T = bool> T IsTextureValid() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4478F20))(this);
	}
	template <typename T = void> T OnQQFriendClick() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44790A0))(this);
	}
	template <typename T = void> T OnQQZoneClick() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4479240))(this);
	}
	template <typename T = void> T OnWeChatFriendClick() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44793E0))(this);
	}
	template <typename T = void> T OnWeChatMomentsClick() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4479580))(this);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4479720))(this);
	}
	template <typename T = void> T NotifyScreenShotm__0() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44797D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44797E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44797F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x44797F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ScreenShotController*))(Il2CppBase() + 0x4479800))(this);
	}

};

}
