#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamInfoHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect_Request() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText_Request() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_Transfer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NewGuideText_Transfer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TeamMateItemList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TeamMateItemTemplate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TeamMateGrid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TeamRootWidget() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RequestWidget() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RequestedWidget() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RequestCountDownLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& GoTransferWidget() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ReturnWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bLeaderHasJump() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ResumeFollowWidget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LeaderBtnRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ReviveCardObj() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TeamObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& RequestCDTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& RequestShowTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeamMateReviveCardList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& mIsHideSkydivingRequet() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsLeaderDateReady() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestedCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemTransferEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickGoTransfer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onClickResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadTransfer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamMateNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequireTeamLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItemAboutLeaderOperate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickTransferLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamLeaderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAboutLeaderWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRequestWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLeaderFollowRelative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItemLeaderSpriteOperate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateOffline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshTeamInfoHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillInfoPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetAllTeamMateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllTeamMateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOrAddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllTeamMateOBSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTeamInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForeachActiveItemOperate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkyDivingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BroadcastTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaderDateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeamMateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadAllReviveCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnAddReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReviveCardRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRequestHelp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindTeamMateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindTeamMateReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOrCreateTeamMateReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC3920))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC3928))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC3934))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC3944))(this);
	}
	template <typename T = void> T OnClickRequest(uintptr_t obj) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC3F3C))(this, obj);
	}
	template <typename T = uintptr_t> T RequestedCountDown(float endTime) {
		return ((T (*)(BRTeamInfoHUD*, float))(Il2CppBase() + 0x3DC42B4))(this, endTime);
	}
	template <typename T = void> T SetItemTransferEnable(bool enable) {
		return ((T (*)(BRTeamInfoHUD*, bool))(Il2CppBase() + 0x3DC43B8))(this, enable);
	}
	template <typename T = void> T OnClickGoTransfer(uintptr_t obj) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC4580))(this, obj);
	}
	template <typename T = void> T OnClickReturn(uintptr_t obj) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC47D4))(this, obj);
	}
	template <typename T = void> T onClickResume(uintptr_t obj) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC48E8))(this, obj);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC49A0))(this);
	}
	template <typename T = bool> T GamepadRevive() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC4A38))(this);
	}
	template <typename T = bool> T GamepadTransfer() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC4D84))(this);
	}
	template <typename T = int32_t> T GetTeamMateNum() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC4F10))(this);
	}
	template <typename T = void> T OnShowObserverHud(uintptr_t Msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC517C))(this, Msg);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC5988))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC5CBC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC5EE4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRTeamInfoHUD*, float))(Il2CppBase() + 0x3DC6590))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC6E58))(this);
	}
	template <typename T = void> T OnRequireTeamLeader(uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC6E60))(this, msg);
	}
	template <typename T = void> T HideItemAboutLeaderOperate(uintptr_t item) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC7718))(this, item);
	}
	template <typename T = void> T OnClickTransferLeader(uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC7BF0))(this, msg);
	}
	template <typename T = void> T OnTeamLeaderChange(uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC7CA0))(this, msg);
	}
	template <typename T = void> T RefreshAboutLeaderWidget(bool isLeader) {
		return ((T (*)(BRTeamInfoHUD*, bool))(Il2CppBase() + 0x3DC8478))(this, isLeader);
	}
	template <typename T = void> T HideRequestWidgets() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC69A4))(this);
	}
	template <typename T = void> T HideLeaderFollowRelative() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC8948))(this);
	}
	template <typename T = void> T HideItemLeaderSpriteOperate(uintptr_t item) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC8BF8))(this, item);
	}
	template <typename T = void> T CheckAircraft() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC6AF4))(this);
	}
	template <typename T = void> T CheckSkydiving() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC6D6C))(this);
	}
	template <typename T = void> T CheckLanded() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC68B0))(this);
	}
	template <typename T = void> T OnTeammateOffline(uint32_t pId, bool bOffline) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, bool))(Il2CppBase() + 0x3DC8DAC))(this, pId, bOffline);
	}
	template <typename T = void> T OnPlayerLoginOrLogout(uint32_t pId, bool isLogin) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, bool))(Il2CppBase() + 0x3DC9554))(this, pId, isLogin);
	}
	template <typename T = void> T OnRefreshTeamInfoHUD(uintptr_t obj) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC5418))(this, obj);
	}
	template <typename T = void> T UpdateKillInfoPosition() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC61B0))(this);
	}
	template <typename T = void> T CheckSetAllTeamMateItem() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC9BB8))(this);
	}
	template <typename T = void> T RefreshAllTeamMateItem() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCA318))(this);
	}
	template <typename T = void> T RefreshOrAddItem(uintptr_t pi) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCA0BC))(this, pi);
	}
	template <typename T = void> T RefreshAllTeamMateOBSwitch() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCABC8))(this);
	}
	template <typename T = void> T RefreshAllItemState() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCB2DC))(this);
	}
	template <typename T = void> T OnSpectateEnemy() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCB418))(this);
	}
	template <typename T = void> T ShowTeamInfos(bool isShow) {
		return ((T (*)(BRTeamInfoHUD*, bool))(Il2CppBase() + 0x3DCB1D4))(this, isShow);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3DCB518))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T ForeachActiveItemOperate(void* operate) {
		return ((T (*)(BRTeamInfoHUD*, void*))(Il2CppBase() + 0x3DC8A44))(this, operate);
	}
	template <typename T = bool> T CheckSkyDivingState(uintptr_t state) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DC66D4))(this, state);
	}
	template <typename T = void> T BroadcastTip(uint32_t playerId, bool isFirstTime) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, bool))(Il2CppBase() + 0x3DC7DCC))(this, playerId, isFirstTime);
	}
	template <typename T = void> T OnLeaderDateReady(uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCB958))(this, msg);
	}
	template <typename T = void> T AddTeamMateItem(uintptr_t pi) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCA874))(this, pi);
	}
	template <typename T = void> T ReloadAllReviveCardInfo() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DC5F9C))(this);
	}
	template <typename T = void> T OnAddReviveCard(uintptr_t msg) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCCD70))(this, msg);
	}
	template <typename T = void> T OnAddReviveCard_1(uintptr_t cardInfo) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCBAE0))(this, cardInfo);
	}
	template <typename T = uintptr_t> T GetReviveCardRoot(uint32_t playerId) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t))(Il2CppBase() + 0x3DCD290))(this, playerId);
	}
	template <typename T = void> T OnNotifyTeammateRequestHelp(uint32_t playerId, bool pickupOrUse) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, bool))(Il2CppBase() + 0x3DCD3C0))(this, playerId, pickupOrUse);
	}
	template <typename T = uintptr_t> T FindTeamMateItem(uint32_t playerId) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t))(Il2CppBase() + 0x3DCBC18))(this, playerId);
	}
	template <typename T = uintptr_t> T FindTeamMateReviveCard(uint32_t playerId) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t))(Il2CppBase() + 0x3DC93B4))(this, playerId);
	}
	template <typename T = uintptr_t> T FindOrCreateTeamMateReviveCard(uint32_t playerId) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t))(Il2CppBase() + 0x3DCCF90))(this, playerId);
	}
	template <typename T = void> T CheckPawnExist() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCD8BC))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCDCC8))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRTeamInfoHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3DCDD88))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCE490))(this, itemType);
	}
	template <typename T = void> T Awakem__0(uintptr_t item) {
		return ((T (*)(BRTeamInfoHUD*, uintptr_t))(Il2CppBase() + 0x3DCE698))(this, item);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE760))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTeamInfoHUD*, float))(Il2CppBase() + 0x3DCE788))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRTeamInfoHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3DCE790))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BRTeamInfoHUD*))(Il2CppBase() + 0x3DCE7B0))(this);
	}

};

}
