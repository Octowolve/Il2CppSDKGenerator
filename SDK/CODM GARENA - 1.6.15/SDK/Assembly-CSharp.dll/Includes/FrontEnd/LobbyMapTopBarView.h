#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapTopBarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapTopBarView"));
	}

	template <typename T = uintptr_t> T& Tween() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MainPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TopRightTable() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NormalContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Back() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CurrencyList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Gold() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Diamond() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnSwitchRecharge() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PlayerInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BuffView() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RankMatchBuffView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RankNotDropView() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BpExpBuffView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& HangUpView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& AdvertisementBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LiveOpsUpdates() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LiveContainer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LiveBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LiveReddot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SupportBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SettingBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& FriendBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& MailBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SearchRoomInfoBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BugReportBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& DeviveInfoContainer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& NetWorkInfo() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& BatteryInfo() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> static T& fullBatteryWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& FriendStateNumLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BindingObj() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BindingTips() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BindingTipsContent() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& BindingTipsBlock() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& FriendTipsObj() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& WidgetFriendTips() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LabelFriendTipsContent() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& SpriteFriendTipsBlock() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& WidgetFriendTipsE() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelFriendTipsContentE() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SpriteFriendTipsBlockE() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& PersonalInfo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& efxCpHit() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& efxCpTrl() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& efxAni01() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& efxAni02() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& efxAni03() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppVector3> T& endPos() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector3> T& beginPos() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& cpAddAniTime() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& AniParamLevel1() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& AniParamLevel2() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& aniCoinAdd() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& m_CurStyle() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> static T& FlagShiftValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_firstCheck() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& networkStrengthCheckTime() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& batteryPowerCheckTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& batteryChargeCheckTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& m_CurrentRefreshTimes() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& REFRESH_MAX_TIMES() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> static T& TitleLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& mNotifyParameter() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_NeedUpdateStatus() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& networkType() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& signalStrength() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& m_isCharging() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& BatteryRed() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& BatteryWhite() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& cpAddTimer() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& cpAniTimer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewIconRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewFrameRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuOrBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBackTitleLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoreNotifies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNetworkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNetworkStrength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIconStrength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBatteryType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBattery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLobbyExpBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLobbyRankBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefReshLobbyRanlNotDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBpExpBuffView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSearchRoomInfoBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFindRoomInfoBtnShowedInCurrentNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCPAddEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CpAddAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCpAddAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureRoomHangUpStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLiveOpsUpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = void> T SetPlayeInfo(Il2CppString* NickName, uintptr_t levelInfo, uintptr_t picInfo) {
		return ((T (*)(LobbyMapTopBarView*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x369C7EC))(this, NickName, levelInfo, picInfo);
	}
	template <typename T = void> T SetPlayerLevelInfo(uintptr_t levelInfo) {
		return ((T (*)(LobbyMapTopBarView*, uintptr_t))(Il2CppBase() + 0x36A4FBC))(this, levelInfo);
	}
	template <typename T = void> T SetNewIconRedPoint() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A3A9C))(this);
	}
	template <typename T = void> T SetNewFrameRedPoint() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x369FF30))(this);
	}
	template <typename T = void> T SetNewName(Il2CppString* name) {
		return ((T (*)(LobbyMapTopBarView*, Il2CppString*))(Il2CppBase() + 0x36A3D64))(this, name);
	}
	template <typename T = void> T SetMenuOrBack(bool bMenu) {
		return ((T (*)(LobbyMapTopBarView*, bool))(Il2CppBase() + 0x36A0848))(this, bMenu);
	}
	template <typename T = bool> T IsSupportAvailable() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A55C4))(this);
	}
	template <typename T = void> T ConfigureStyle(uintptr_t style, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(LobbyMapTopBarView*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x36A0FB8))(this, style, param);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A59F0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(LobbyMapTopBarView*, float))(Il2CppBase() + 0x36A59F8))(this, dt);
	}
	template <typename T = void> T RefreshBackTitleLength(bool bForce) {
		return ((T (*)(LobbyMapTopBarView*, bool))(Il2CppBase() + 0x36A0984))(this, bForce);
	}
	template <typename T = void> T SetMoreNotifies(uintptr_t holder, int32_t notifyValue) {
		return ((T (*)(LobbyMapTopBarView*, uintptr_t, int32_t))(Il2CppBase() + 0x369FA48))(this, holder, notifyValue);
	}
	template <typename T = void> T PlayShow(bool forward) {
		return ((T (*)(LobbyMapTopBarView*, bool))(Il2CppBase() + 0x36A1CE0))(this, forward);
	}
	template <typename T = void> T SetNetworkType() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A5BCC))(this);
	}
	template <typename T = void> T UpdateNetworkStrength() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A5D84))(this);
	}
	template <typename T = void> T SetIconStrength(int32_t signalStrength, uintptr_t ng) {
		return ((T (*)(LobbyMapTopBarView*, int32_t, uintptr_t))(Il2CppBase() + 0x36A66E4))(this, signalStrength, ng);
	}
	template <typename T = void> T SetBatteryType() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A5EA4))(this);
	}
	template <typename T = void> T UpdateBattery() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A60CC))(this);
	}
	template <typename T = void> T RefreshLobbyExpBuff(bool bInit) {
		return ((T (*)(LobbyMapTopBarView*, bool))(Il2CppBase() + 0x36A5778))(this, bInit);
	}
	template <typename T = void> T RefreshLobbyRankBuff(bool bInit) {
		return ((T (*)(LobbyMapTopBarView*, bool))(Il2CppBase() + 0x36A45CC))(this, bInit);
	}
	template <typename T = void> T RefReshLobbyRanlNotDrop() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A471C))(this);
	}
	template <typename T = void> T RefreshBpExpBuffView() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x369BED4))(this);
	}
	template <typename T = void> T RefreshSearchRoomInfoBtn() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A58C8))(this);
	}
	template <typename T = bool> T IsFindRoomInfoBtnShowedInCurrentNavigation() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A69FC))(this);
	}
	template <typename T = void> T BeginCPAddEfx(uint32_t aniParam, Il2CppVector3 pos) {
		return ((T (*)(LobbyMapTopBarView*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x36A2690))(this, aniParam, pos);
	}
	template <typename T = void> T CpAddAnimation() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A6BB4))(this);
	}
	template <typename T = void> T EndCpAddAnim() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A054C))(this);
	}
	template <typename T = void> T ConfigureRoomHangUpStyle() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x36A6CB4))(this);
	}
	template <typename T = void> T UpdateRoomInfo() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x369FCB8))(this);
	}
	template <typename T = void> T SetLiveOpsUpdateBtnState() {
		return ((T (*)(LobbyMapTopBarView*))(Il2CppBase() + 0x369BB28))(this);
	}
	template <typename T = bool> static T SetLiveOpsUpdateBtnStatem__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36A6EE4))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LobbyMapTopBarView*, float))(Il2CppBase() + 0x36A6FBC))(this, P0);
	}

};

}
