#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateItem"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect_Revive() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NewGuideText_Revive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SeatIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ChipSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NoChipSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SeatLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SeatBackground() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SignSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HpSprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& HpColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& VoiceTalkingObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OfflineObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& StateRoot() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& TeammateStateTable() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TeammateStateSprite() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TeammateVehicleLeaderSpriteBg() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TeammateVehicleFollowSpriteBg() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& NoneStateSprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& SkydivingSprite() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& SkydivingLeaderSpriteBg() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& SkydivingFollowerColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ChangeSkydivingLeader() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& TransferWidget() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& RequestingWidget() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& RequestingLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_FiringUIEffect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& FIREEFFECT_SHOWTIME() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_FiringUIEffectStartTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsShowFiringUIEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& mIsRobot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& RequestShowTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ReviveCard() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& HelpMeEffect() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& AwakeTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_bHasHideLeaderSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GamepadBtnList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& previousState() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& updateTimeSum() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionStateTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSkydivingLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLeaderSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLeaderSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTransferBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChangeSkydivingLeaderBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideChangeSkydivingLeaderBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestingCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTrasnfer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeammateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOfflineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHelpMe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishTweener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableFiringState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFiringState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DC732C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD3294))(this);
	}
	template <typename T = void> T RepositionStateTable(bool bNeedRepositionTable) {
		return ((T (*)(BRTeamMateItem*, bool))(Il2CppBase() + 0x3DC54CC))(this, bNeedRepositionTable);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD3534))(this);
	}
	template <typename T = void> T OnChangeSkydivingLeader(uintptr_t obj) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DD36BC))(this, obj);
	}
	template <typename T = void> T OnDetailClick(uintptr_t obj) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DD37BC))(this, obj);
	}
	template <typename T = void> T InitContent(uintptr_t info) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DC98C8))(this, info);
	}
	template <typename T = void> T ClearInfo() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DC981C))(this);
	}
	template <typename T = void> T HideLeaderSprite() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DC8CB8))(this);
	}
	template <typename T = void> T RefreshLeaderSprite() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD3940))(this);
	}
	template <typename T = void> T ShowTransferBtn(bool isShow, int32_t index) {
		return ((T (*)(BRTeamMateItem*, bool, int32_t))(Il2CppBase() + 0x3DC77E8))(this, isShow, index);
	}
	template <typename T = void> T ShowChangeSkydivingLeaderBtn(int32_t index) {
		return ((T (*)(BRTeamMateItem*, int32_t))(Il2CppBase() + 0x3DC7334))(this, index);
	}
	template <typename T = void> T HideChangeSkydivingLeaderBtn() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DC7ADC))(this);
	}
	template <typename T = uintptr_t> T RequestingCountDown(float endTime) {
		return ((T (*)(BRTeamMateItem*, float))(Il2CppBase() + 0x3DD3DAC))(this, endTime);
	}
	template <typename T = void> T HideTrasnfer() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD3EB0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DCA77C))(this);
	}
	template <typename T = void> T UpdateTeammateState() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DCBD88))(this);
	}
	template <typename T = void> T UpdateOfflineState(bool bOffline) {
		return ((T (*)(BRTeamMateItem*, bool))(Il2CppBase() + 0x3DC9024))(this, bOffline);
	}
	template <typename T = void> T OnNotifyHelpMe(bool pickupOrUse) {
		return ((T (*)(BRTeamMateItem*, bool))(Il2CppBase() + 0x3DCD5B4))(this, pickupOrUse);
	}
	template <typename T = void> T OnFinishTweener() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD4630))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD471C))(this);
	}
	template <typename T = void> T UpdateHp(uintptr_t info) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DD3FD8))(this, info);
	}
	template <typename T = void> T UpdateChip(uintptr_t info) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DD42DC))(this, info);
	}
	template <typename T = bool> T IsPlayerDied() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD4FE8))(this);
	}
	template <typename T = bool> T ShouldShowFireEffect() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD50A0))(this);
	}
	template <typename T = void> T DisableFiringState() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD4530))(this);
	}
	template <typename T = void> T UpdateFiringState() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD486C))(this);
	}
	template <typename T = void> T UpdateVoiceStatus() {
		return ((T (*)(BRTeamMateItem*))(Il2CppBase() + 0x3DD4CD0))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRTeamMateItem*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3DCE018))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRTeamMateItem*, uintptr_t))(Il2CppBase() + 0x3DD5188))(this, itemType);
	}

};

}
