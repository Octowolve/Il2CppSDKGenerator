#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapTopBarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapTopBarController"));
	}

	template <typename T = bool> T& hasBuy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_MailDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_InventoryDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_SettingsDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_LobbyExpBuffDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_lobbyBpExpBuffDs() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_LobbyRankBuffDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _backBtnActive() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_bNeedSpecialBack() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = Il2CppVector3> static T& MarkPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> T& bugUrl() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BackHelperClickCallback() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& mWealthDiamond() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& mWealthGold() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> static T& MinOffsetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGoldNumInTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetGoldNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetBackTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetPersonalInfoTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanClickBackButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSwitchRechareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigurePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBarStyleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBugReportButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSupportButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopupFindRoomWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCDKeyButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingsButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingsNewButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBackBtnFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFriendBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMailBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInventoryBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSettingsBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLobbyTopBarChangeTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackHelperBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnAdvertisementClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshShowADBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomEntryShowInNavUIController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSeverADReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLobbyMapTopPlayCPAddAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomHungShowInNavUIController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerProfileResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveDataAndFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Switch2ModeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyModeShouldChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureWealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCheckNewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCheckNewFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCheckNewName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneNetworkChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLiveButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWebViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLiveDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFriendTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendTipsView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBindingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindingTipsSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankBuffUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RafreshRankDropOnOffUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLiveOpsUpdatesBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}

	template <typename T = void> T SetGoldNumInTutorial(uintptr_t tutorialType) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x3696EB8))(this, tutorialType);
	}
	template <typename T = void> T T_SetGoldNum() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697120))(this);
	}
	template <typename T = void> T T_OnBackBtnClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697350))(this);
	}
	template <typename T = uintptr_t> T T_GetBackTrans() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369750C))(this);
	}
	template <typename T = uintptr_t> T T_GetPersonalInfoTrans() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697794))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697864))(this);
	}
	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697914))(this);
	}
	template <typename T = uintptr_t> T get_MailDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36979C4))(this);
	}
	template <typename T = uintptr_t> T get_InventoryDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697A74))(this);
	}
	template <typename T = uintptr_t> T get_SettingsDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697B24))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697BD4))(this);
	}
	template <typename T = uintptr_t> T get_LobbyExpBuffDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697C84))(this);
	}
	template <typename T = uintptr_t> T get_LobbyBpExpBuffDs() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697D34))(this);
	}
	template <typename T = uintptr_t> T get_LobbyRankBuffDS() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697DE4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697E94))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3697F38))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3699498))(this);
	}
	template <typename T = bool> T IsCanClickBackButton() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x367BF34))(this);
	}
	template <typename T = void> T OnBtnSwitchRechareClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3699568))(this);
	}
	template <typename T = void> T BindUIEvent() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369846C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3699B5C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369A978))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t NotificationIndex) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x369AF30))(this, SourceDataStore, PropertyTag, NotificationIndex);
	}
	template <typename T = void> T ConfigurePlayerInfo() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36991A4))(this);
	}
	template <typename T = void> T OnNotifyBackBtnClick(uintptr_t message) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x369C9C0))(this, message);
	}
	template <typename T = void> T OnBarStyleChanged(uintptr_t message) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x369CC78))(this, message);
	}
	template <typename T = void> T OnBackBtnClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369CA6C))(this);
	}
	template <typename T = void> T OnMailBtnClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369CF30))(this);
	}
	template <typename T = void> T OnBugReportButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369D594))(this);
	}
	template <typename T = void> T OnSupportButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369D824))(this);
	}
	template <typename T = void> T OnFriendButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369DD60))(this);
	}
	template <typename T = void> T OnPopupFindRoomWindowView() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369E3C4))(this);
	}
	template <typename T = void> T OnCDKeyButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369E4E4))(this);
	}
	template <typename T = void> T OnSettingAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(LobbyMapTopBarController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x369E730))(this, id, obj);
	}
	template <typename T = void> T OnSettingsButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369EE48))(this);
	}
	template <typename T = void> T OnSettingsNewButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369F1A0))(this);
	}
	template <typename T = void> T OnPlayerIconClick(uintptr_t obj) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x369F3A0))(this, obj);
	}
	template <typename T = void> T OnChangeBackBtnFunc(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x369F920))(this, Msg);
	}
	template <typename T = void> T UpdateFriendBadge() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369B47C))(this);
	}
	template <typename T = void> T UpdateMailBadge() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369A598))(this);
	}
	template <typename T = void> T UpdateInventoryBadge() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369A6DC))(this);
	}
	template <typename T = void> T UpdateSettingsBadge() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369A824))(this);
	}
	template <typename T = void> T UpdateRoomInfo() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369B5E0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369FDFC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A0480))(this);
	}
	template <typename T = void> T SetMenuBtn(bool bMenu) {
		return ((T (*)(LobbyMapTopBarController*, bool))(Il2CppBase() + 0x36900A8))(this, bMenu);
	}
	template <typename T = void> T SetTitle(Il2CppString* TitleLocId, Il2CppString* SubTitleId, uintptr_t HelperClickCallback) {
		return ((T (*)(LobbyMapTopBarController*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x369016C))(this, TitleLocId, SubTitleId, HelperClickCallback);
	}
	template <typename T = void> T OnNotifyLobbyTopBarChangeTitle(uintptr_t message) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A0B58))(this, message);
	}
	template <typename T = void> T OnBackHelperBtnClick(uintptr_t obj) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A0F04))(this, obj);
	}
	template <typename T = void> T ConfigureStyle(uintptr_t style, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x369052C))(this, style, param);
	}
	template <typename T = void> T PlayShow(bool forward) {
		return ((T (*)(LobbyMapTopBarController*, bool))(Il2CppBase() + 0x369060C))(this, forward);
	}
	template <typename T = void> T _OnBtnAdvertisementClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A1E30))(this);
	}
	template <typename T = void> T RefreshShowADBtnState(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A20E0))(this, Msg);
	}
	template <typename T = bool> T IsRoomEntryShowInNavUIController() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A2180))(this);
	}
	template <typename T = void> T SendSeverADReady(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A2350))(this, Msg);
	}
	template <typename T = void> T OnNotifyLobbyMapTopPlayCPAddAni(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A2478))(this, Msg);
	}
	template <typename T = bool> T IsRoomHungShowInNavUIController() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A2DE4))(this);
	}
	template <typename T = void> T OnGetPlayerProfileResp(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A2FBC))(this, Msg);
	}
	template <typename T = void> T SaveDataAndFinish(uintptr_t data) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A31E8))(this, data);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x3691078))(this, msg);
	}
	template <typename T = void> T Switch2ModeController(uintptr_t toSwtichTabData) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x1E7D7D4))(this, toSwtichTabData);
	}
	template <typename T = void> T OnLobbyModeShouldChange(uintptr_t msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A3784))(this, msg);
	}
	template <typename T = void> T SwitchMode(uintptr_t region) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A3898))(this, region);
	}
	template <typename T = void> T ConfigureWealth() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369C01C))(this);
	}
	template <typename T = void> T WealthChange() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A3938))(this);
	}
	template <typename T = void> T OnNotifyCheckNewIcon(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A39DC))(this, Msg);
	}
	template <typename T = void> T OnNotifyCheckNewFrame(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A3BE4))(this, Msg);
	}
	template <typename T = void> T OnNotifyCheckNewName(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A3C84))(this, Msg);
	}
	template <typename T = void> T OnZoneNetworkChanged(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A3E64))(this, Msg);
	}
	template <typename T = void> T OnLiveButtonClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A3F24))(this);
	}
	template <typename T = void> T OnWebViewClose(uintptr_t message) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A40F4))(this, message);
	}
	template <typename T = void> T RefreshLiveDisplay(uintptr_t Msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x3698F54))(this, Msg);
	}
	template <typename T = void> T ShowFriendTips() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A00B4))(this);
	}
	template <typename T = void> T SetFriendTipsView(Il2CppString* tipContent, int32_t bubbleType) {
		return ((T (*)(LobbyMapTopBarController*, Il2CppString*, int32_t))(Il2CppBase() + 0x36A420C))(this, tipContent, bubbleType);
	}
	template <typename T = void> T ShowBindingTips(uintptr_t msg) {
		return ((T (*)(LobbyMapTopBarController*, uintptr_t))(Il2CppBase() + 0x36A0280))(this, msg);
	}
	template <typename T = void> T SetBindingTipsSize() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x3698D78))(this);
	}
	template <typename T = void> T RefreshRankBuffUI() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369B980))(this);
	}
	template <typename T = void> T RafreshRankDropOnOffUI() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x369B6F0))(this);
	}
	template <typename T = void> T OnLiveOpsUpdatesBtnClick() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A499C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LobbyMapTopBarController*))(Il2CppBase() + 0x36A4C74))(this);
	}

};

}
