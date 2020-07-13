#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewControl2Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewControl2Controller"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingModel() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpZmModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBrUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrPlanToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DEnableButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DCloseSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrPlanValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrTouchValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPvpUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpPlanToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DEnableButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DCloseSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTouch3DConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpPlanValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpTouchValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286B164))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286B208))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286C478))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286C5D0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286C6B8))(this);
	}
	template <typename T = void> T OnBrModeClick(int32_t index) {
		return ((T (*)(SettingsNewControl2Controller*, int32_t))(Il2CppBase() + 0x286CA9C))(this, index);
	}
	template <typename T = void> T OnPvpZmModeClick(int32_t index) {
		return ((T (*)(SettingsNewControl2Controller*, int32_t))(Il2CppBase() + 0x286CDD8))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286C854))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewControl2Controller*, int32_t))(Il2CppBase() + 0x286D114))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewControl2Controller*, uintptr_t))(Il2CppBase() + 0x286D250))(this, message);
	}
	template <typename T = void> T RegisterBrUIEvent() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286B368))(this);
	}
	template <typename T = void> T OnBrPlanToggleChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286D4D4))(this);
	}
	template <typename T = void> T OnBrTouch3DEnableButtonClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286D658))(this);
	}
	template <typename T = void> T OnBrTouch3DOpenClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286D8A0))(this);
	}
	template <typename T = void> T OnBrTouch3DToggleChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DBCC))(this);
	}
	template <typename T = void> T OnBrTouch3DSliderChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DC64))(this);
	}
	template <typename T = void> T OnBrTouch3DCloseSliderChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DD7C))(this);
	}
	template <typename T = void> T OnBrTouch3DCloseClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DE94))(this);
	}
	template <typename T = void> T OnBrTouch3DConfirmClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DFCC))(this);
	}
	template <typename T = void> T SetBrUIValues() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286CC80))(this);
	}
	template <typename T = void> T SetBrPlanValue() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286E104))(this);
	}
	template <typename T = void> T SetBrTouchValue() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286DA20))(this);
	}
	template <typename T = void> T RegisterPvpUIEvent() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286BBF0))(this);
	}
	template <typename T = void> T OnPvpPlanToggleChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286E3BC))(this);
	}
	template <typename T = void> T OnPvpTouch3DEnableButtonClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286E540))(this);
	}
	template <typename T = void> T OnPvpTouch3DOpenClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286E788))(this);
	}
	template <typename T = void> T OnPvpTouch3DToggleChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286EAB4))(this);
	}
	template <typename T = void> T OnPvpTouch3DSliderChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286EB4C))(this);
	}
	template <typename T = void> T OnPvpTouch3DCloseSliderChange() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286EC64))(this);
	}
	template <typename T = void> T OnPvpTouch3DCloseClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286ED7C))(this);
	}
	template <typename T = void> T OnPvpTouch3DConfirmClick() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286EEB4))(this);
	}
	template <typename T = void> T SetPvpUIValues() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286CFBC))(this);
	}
	template <typename T = void> T SetPvpPlanValue() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286EFEC))(this);
	}
	template <typename T = void> T SetPvpTouchValue() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286E908))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286F2A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286F2AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286F2B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286F2BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewControl2Controller*))(Il2CppBase() + 0x286F2C4))(this);
	}

};

}
