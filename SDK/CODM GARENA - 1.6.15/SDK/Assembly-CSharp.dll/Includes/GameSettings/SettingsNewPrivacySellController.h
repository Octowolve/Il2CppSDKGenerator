#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewPrivacySellController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewPrivacySellController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUrlLabelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUrlBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideConfirmBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2891F90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892034))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892140))(this);
	}
	template <typename T = void> T InitInfo() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28921F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892534))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892750))(this);
	}
	template <typename T = void> T OnUrlLabelClick(uintptr_t o) {
		return ((T (*)(SettingsNewPrivacySellController*, uintptr_t))(Il2CppBase() + 0x28928CC))(this, o);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892AA4))(this);
	}
	template <typename T = void> T OnUrlBtnClick() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892DEC))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x2892EE0))(this);
	}
	template <typename T = void> T HideConfirmBtn() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28923C4))(this);
	}
	template <typename T = void> T InitInfom__0() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28933B4))(this);
	}
	template <typename T = void> T OnCloseBtnClickm__1() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x289348C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28934A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28934A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28934B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28934B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewPrivacySellController*))(Il2CppBase() + 0x28934C0))(this);
	}

};

}
