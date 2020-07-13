#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteMoreController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteMoreController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mAllController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mFriendsController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mGuildController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mRecentPlayerController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& AdaptTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& bFirstTabSwitch() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TabName() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetupTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogRoomInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInviteForReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideInviteMoreView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOnlineNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQQFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWechatFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamCodeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFaceToFaceBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRelationInviteShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteOneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteTeamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E03E4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E0488))(this);
	}
	template <typename T = void> T SetupTabController() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E05A4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E09D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E1154))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E1738))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E1CC8))(this);
	}
	template <typename T = void> T OnTabSwitch(int32_t index) {
		return ((T (*)(RoomInviteMoreController*, int32_t))(Il2CppBase() + 0x20E1D80))(this, index);
	}
	template <typename T = void> T OnDrawButtonClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E2624))(this);
	}
	template <typename T = void> T TLogRoomInvite(uintptr_t subID) {
		return ((T (*)(RoomInviteMoreController*, uintptr_t))(Il2CppBase() + 0x20E2220))(this, subID);
	}
	template <typename T = void> T OnNotifyInviteForReport(uintptr_t msg) {
		return ((T (*)(RoomInviteMoreController*, uintptr_t))(Il2CppBase() + 0x20E2714))(this, msg);
	}
	template <typename T = void> T OnOtherBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E28B0))(this);
	}
	template <typename T = void> T OnHideInviteMoreView(uintptr_t Msg) {
		return ((T (*)(RoomInviteMoreController*, uintptr_t))(Il2CppBase() + 0x20E2AF8))(this, Msg);
	}
	template <typename T = void> T RefreshOnlineNum(uintptr_t msg) {
		return ((T (*)(RoomInviteMoreController*, uintptr_t))(Il2CppBase() + 0x20E2BA4))(this, msg);
	}
	template <typename T = void> T SetTabOpen() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E2E8C))(this);
	}
	template <typename T = void> T InitInvite() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E0940))(this);
	}
	template <typename T = bool> T IsRoomValid() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E2F9C))(this);
	}
	template <typename T = void> T OnQQFriendBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E303C))(this);
	}
	template <typename T = void> T OnWechatFriendBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E30D4))(this);
	}
	template <typename T = void> T OnTeamCodeBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E316C))(this);
	}
	template <typename T = void> T OnFaceToFaceBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E32A0))(this);
	}
	template <typename T = void> T OnTeamBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E354C))(this);
	}
	template <typename T = void> T InitRelationInviteShow() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E1B3C))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3658))(this);
	}
	template <typename T = void> T OnInviteOneBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3798))(this);
	}
	template <typename T = void> T OnInviteTeamBtnClick() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3884))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3BF8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomInviteMoreController*))(Il2CppBase() + 0x20E3D60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabSwitch(int32_t P0) {
		return ((T (*)(RoomInviteMoreController*, int32_t))(Il2CppBase() + 0x20E3D68))(this, P0);
	}

};

}
