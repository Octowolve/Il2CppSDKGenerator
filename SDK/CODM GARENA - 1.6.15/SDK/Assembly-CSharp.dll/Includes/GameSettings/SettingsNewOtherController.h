#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewOtherController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewOtherController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& playerID() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPrivacySellInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPermitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCCPABtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreditsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacySellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPushMessageToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnLoginCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onDeleteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyIDBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBloodToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288B0E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288B18C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288B298))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288B7A4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288BC2C))(this);
	}
	template <typename T = void> T InitInfo() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288BCF8))(this);
	}
	template <typename T = void> T SetPrivacySellInfo() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288C278))(this);
	}
	template <typename T = void> T OnPermitClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288C648))(this);
	}
	template <typename T = void> T OnPrivacyClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288C744))(this);
	}
	template <typename T = void> T OnCCPABtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288C840))(this);
	}
	template <typename T = void> T OnCreditsBtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288C930))(this);
	}
	template <typename T = void> T OnPrivacySellBtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288CA20))(this);
	}
	template <typename T = void> T OnPushMessageToggleChange() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288CB10))(this);
	}
	template <typename T = void> T OnLogoutBtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288CCA4))(this);
	}
	template <typename T = void> T OnReturnLoginCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsNewOtherController*, uintptr_t, int32_t))(Il2CppBase() + 0x288CE88))(this, result, context);
	}
	template <typename T = void> T onDeleteBtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288CF94))(this);
	}
	template <typename T = void> T OnCopyIDBtnClick() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D084))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewOtherController*, int32_t))(Il2CppBase() + 0x288D46C))(this, depth);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D624))(this);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewOtherController*, uintptr_t))(Il2CppBase() + 0x288D700))(this, message);
	}
	template <typename T = void> T OnBloodToggleChange() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D7A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D8D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D8DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D8E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D8EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewOtherController*))(Il2CppBase() + 0x288D8F4))(this);
	}

};

}
