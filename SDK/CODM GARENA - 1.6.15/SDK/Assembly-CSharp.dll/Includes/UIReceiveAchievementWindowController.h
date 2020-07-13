#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIReceiveAchievementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIReceiveAchievementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_AchievementDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_AchievementDS() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F93A0C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F93ABC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94300))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F943A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94544))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F946C0))(this);
	}
	template <typename T = void> T OnBtnShareClick() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F948C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94AD4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94ADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIReceiveAchievementWindowController*))(Il2CppBase() + 0x2F94AEC))(this);
	}

};

}
