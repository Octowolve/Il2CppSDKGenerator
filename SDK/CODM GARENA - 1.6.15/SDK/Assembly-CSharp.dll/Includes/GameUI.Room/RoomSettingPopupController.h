#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSettingPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSettingPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IfAllowToInvite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_Param1Value() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_Param2Value() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_SpectatorNum() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_AllowInviteIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_AllowInviteList() {
		return *(T*)((uintptr_t)this + 0x6C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContainerToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDelTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingParam1Deselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam1Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddParam2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDelParam2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingParam2Deselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam2Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectattorNumDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSpectatorNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddSpectatorNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDelSpectatorNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectatorNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAllowInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftAllowInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightAllowInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllowInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancleButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSettingValueChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FDE5C))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FDF0C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FDFBC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FE060))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FE274))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FE5B0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FECD0))(this);
	}
	template <typename T = void> T InitContainerToDefault() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FF318))(this);
	}
	template <typename T = void> T OnBtnAddTarget() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FF8E4))(this);
	}
	template <typename T = void> T OnBtnDelTarget() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FFEE8))(this);
	}
	template <typename T = void> T OnSettingParam1Deselect() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x20FFF94))(this);
	}
	template <typename T = void> T SetParam1Value(int32_t target) {
		return ((T (*)(RoomSettingPopupController*, int32_t))(Il2CppBase() + 0x20FF990))(this, target);
	}
	template <typename T = void> T OnBtnAddParam2() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x21000F8))(this);
	}
	template <typename T = void> T OnBtnDelParam2() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x21006B8))(this);
	}
	template <typename T = void> T OnSettingParam2Deselect() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2100764))(this);
	}
	template <typename T = void> T SetParam2Value(int32_t target) {
		return ((T (*)(RoomSettingPopupController*, int32_t))(Il2CppBase() + 0x21001A4))(this, target);
	}
	template <typename T = void> T OnSpectattorNumDeselect() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x21008C8))(this);
	}
	template <typename T = void> T InitSpectatorNum() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2100DE8))(this);
	}
	template <typename T = void> T OnBtnAddSpectatorNumClick() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2100F5C))(this);
	}
	template <typename T = void> T OnBtnDelSpectatorNumClick() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x210100C))(this);
	}
	template <typename T = void> T SetSpectatorNum() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2100A30))(this);
	}
	template <typename T = void> T InitAllowInvite() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x21010BC))(this);
	}
	template <typename T = void> T OnBtnLeftAllowInvite() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2101740))(this);
	}
	template <typename T = void> T OnBtnRightAllowInvite() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x21017EC))(this);
	}
	template <typename T = void> T SetAllowInvite(int32_t index) {
		return ((T (*)(RoomSettingPopupController*, int32_t))(Il2CppBase() + 0x21012A8))(this, index);
	}
	template <typename T = void> T OnCancleButtonClick() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2101898))(this);
	}
	template <typename T = void> T OnConfirmButtonClick() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x210194C))(this);
	}
	template <typename T = bool> T CheckSettingValueChanged() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2101C10))(this);
	}
	template <typename T = void> T OnCopyButtonClick() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2101FA8))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x210223C))(this);
	}
	template <typename T = void> T OnOpenm__1() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102364))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102A88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102A98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102AA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSettingPopupController*))(Il2CppBase() + 0x2102AA8))(this);
	}

};

}
