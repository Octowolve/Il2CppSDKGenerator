#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewLanguageController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewLanguageController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& ToggleGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_TargetLanguageCode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLanguageValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLanguageCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLanguageRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLanguageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2884798))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x288483C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2884948))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2884ACC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2884B98))(this);
	}
	template <typename T = void> T InitLanguageValues() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2884C48))(this);
	}
	template <typename T = void> T ChangeLanguage(uintptr_t code) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t))(Il2CppBase() + 0x2885284))(this, code);
	}
	template <typename T = void> T OnChangeLanguageCallback(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t, int32_t))(Il2CppBase() + 0x2885444))(this, result, context);
	}
	template <typename T = void> T ChangeLanguageRequest(uintptr_t code) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t))(Il2CppBase() + 0x288572C))(this, code);
	}
	template <typename T = void> T OnChangeLanguageResponse(uintptr_t msg) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t))(Il2CppBase() + 0x2885844))(this, msg);
	}
	template <typename T = void> T OnChangeLanguage(uintptr_t msg) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t))(Il2CppBase() + 0x288595C))(this, msg);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewLanguageController*, int32_t))(Il2CppBase() + 0x2885A84))(this, depth);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885C3C))(this);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewLanguageController*, uintptr_t))(Il2CppBase() + 0x2885D18))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885DB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885DC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885DC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885DD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewLanguageController*))(Il2CppBase() + 0x2885DD8))(this);
	}

};

}
