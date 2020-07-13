#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabTypeList() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2585548))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x25855EC))(this);
	}
	template <typename T = void> T InitSubController() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2585700))(this);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SettingsMainController*, int32_t))(Il2CppBase() + 0x2585A9C))(this, tabIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2585D8C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2585EFC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2585FCC))(this);
	}
	template <typename T = void> T OnShowSettingTips(uintptr_t message) {
		return ((T (*)(SettingsMainController*, uintptr_t))(Il2CppBase() + 0x25861D8))(this, message);
	}
	template <typename T = void> T OnInitTabs(uintptr_t message) {
		return ((T (*)(SettingsMainController*, uintptr_t))(Il2CppBase() + 0x2586454))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2586874))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x258687C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SettingsMainController*, int32_t))(Il2CppBase() + 0x2586884))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x258688C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x2586894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsMainController*))(Il2CppBase() + 0x258689C))(this);
	}

};

}
