#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mRoomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mChatDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> static T& chatViewOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_QTFilterViewOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ChatQTFilterCtr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotOnTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideMenuBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideChatMenuBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideChatMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenuBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBlackListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReportBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReqJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeMenuBarBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnFromPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChatReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshChatTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetOtherPlayerStateResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D54480))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D54554))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D54E20))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D55560))(this);
	}
	template <typename T = void> T RefreshRedDotOnTabChanged(int32_t tabIndex) {
		return ((T (*)(ChatMainController*, int32_t))(Il2CppBase() + 0x1D55908))(this, tabIndex);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(ChatMainController*, int32_t))(Il2CppBase() + 0x1D55D2C))(this, tabIndex);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D55EE0))(this);
	}
	template <typename T = void> T OnHideMenuBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D562BC))(this);
	}
	template <typename T = void> T HideChatMenuBar(uintptr_t msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D563F0))(this, msg);
	}
	template <typename T = void> T HideChatMainView(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D5652C))(this, Msg);
	}
	template <typename T = void> T RefreshRedDot(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D56680))(this, Msg);
	}
	template <typename T = void> T RefreshRedDot_1() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D56BAC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D56F60))(this);
	}
	template <typename T = void> T RefreshTabs(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D571C4))(this, Msg);
	}
	template <typename T = void> T ShowMenuBar(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D575AC))(this, Msg);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D57FC0))(this);
	}
	template <typename T = void> T OnAddBlackListBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D58220))(this);
	}
	template <typename T = void> T OnReportBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D58650))(this);
	}
	template <typename T = void> T OnPersonInfoBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D588A8))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D58A94))(this);
	}
	template <typename T = void> T OnReqJoinBtnClick() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D591D4))(this);
	}
	template <typename T = void> T ResizeMenuBarBG() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D57B00))(this);
	}
	template <typename T = void> T OnGotoPersonInfoView(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D594B4))(this, Msg);
	}
	template <typename T = void> T OnReturnFromPersonInfoView(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D59614))(this, Msg);
	}
	template <typename T = void> T OnNotifyChatReport(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D59754))(this, Msg);
	}
	template <typename T = void> T OnNotifyRefreshChatTabs(uintptr_t Msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D59D88))(this, Msg);
	}
	template <typename T = void> T OnGetOtherPlayerStateResponse(uintptr_t msg) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D59E68))(this, msg);
	}
	template <typename T = bool> T OnAddBlackListBtnClickm__0(uintptr_t it) {
		return ((T (*)(ChatMainController*, uintptr_t))(Il2CppBase() + 0x1D5A360))(this, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D5A3EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D5A3F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D5A3FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D5A404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshRedDotOnTabChanged(int32_t P0) {
		return ((T (*)(ChatMainController*, int32_t))(Il2CppBase() + 0x1D5A40C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(ChatMainController*, int32_t))(Il2CppBase() + 0x1D5A414))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatMainController*))(Il2CppBase() + 0x1D5A41C))(this);
	}

};

}
