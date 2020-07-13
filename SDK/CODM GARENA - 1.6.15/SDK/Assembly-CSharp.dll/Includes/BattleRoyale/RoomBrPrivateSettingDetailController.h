#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBrPrivateSettingDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBrPrivateSettingDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_TotalNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_AiNum() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_EnableOthersInviteFriend() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& bIsOwner() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSettingActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InitRoomSettinView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnerAndNotOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMemberNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderMemberNumChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddMemberNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDelMemberNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMemberNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckMemberNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAiNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderAiNumChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddAiNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDelAiNumClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAiNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckAiNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEnableOthersInviteFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnEnableInviteFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDisableInviteFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D77D38))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D77DE8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D781BC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D78260))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7892C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D78F28))(this);
	}
	template <typename T = void> T InitSettingActive() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D77F78))(this);
	}
	template <typename T = void> T _InitRoomSettinView() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D78FD0))(this);
	}
	template <typename T = void> T InitOwnerAndNotOwner() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D790B4))(this);
	}
	template <typename T = void> T InitMemberNum() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D792F8))(this);
	}
	template <typename T = void> T OnSliderMemberNumChange() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D79FE8))(this);
	}
	template <typename T = void> T OnBtnAddMemberNumClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A0CC))(this);
	}
	template <typename T = void> T OnBtnDelMemberNumClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A1B0))(this);
	}
	template <typename T = void> T RefreshMemberNum(int32_t memberNumTarget, float sliderValue, bool bSlider) {
		return ((T (*)(RoomBrPrivateSettingDetailController*, int32_t, float, bool))(Il2CppBase() + 0x3D79B2C))(this, memberNumTarget, sliderValue, bSlider);
	}
	template <typename T = void> T _CheckMemberNum(int32_t memberNumtTarget, uintptr_t sliderPer, uintptr_t forceValue, uintptr_t bReachLeftLimit, uintptr_t bReachRightLimit) {
		return ((T (*)(RoomBrPrivateSettingDetailController*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D7A294))(this, memberNumtTarget, sliderPer, forceValue, bReachLeftLimit, bReachRightLimit);
	}
	template <typename T = void> T InitAiNum() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D79484))(this);
	}
	template <typename T = void> T OnSliderAiNumChange() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A538))(this);
	}
	template <typename T = void> T OnBtnAddAiNumClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A61C))(this);
	}
	template <typename T = void> T OnBtnDelAiNumClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A700))(this);
	}
	template <typename T = void> T RefreshAiNum(int32_t aiNumTarget, float sliderValue, bool bSlider) {
		return ((T (*)(RoomBrPrivateSettingDetailController*, int32_t, float, bool))(Il2CppBase() + 0x3D79670))(this, aiNumTarget, sliderValue, bSlider);
	}
	template <typename T = void> T _CheckAiNum(int32_t aiNumTarget, uintptr_t sliderPer, uintptr_t forceValue, uintptr_t bReachLeftLimit, uintptr_t bReachRightLimit) {
		return ((T (*)(RoomBrPrivateSettingDetailController*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D7A7E4))(this, aiNumTarget, sliderPer, forceValue, bReachLeftLimit, bReachRightLimit);
	}
	template <typename T = void> T InitEnableOthersInviteFriend() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7951C))(this);
	}
	template <typename T = void> T OnBtnEnableInviteFriend() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7A9F0))(this);
	}
	template <typename T = void> T OnBtnDisableInviteFriend() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7AB1C))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7AC48))(this);
	}
	template <typename T = void> T OnBtnCancelClick() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7AEE4))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7AF98))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B03C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B04C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B05C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(RoomBrPrivateSettingDetailController*))(Il2CppBase() + 0x3D7B064))(this);
	}

};

}
