#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkydivingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkydivingHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect_SkyDivingBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText_SkyDivingBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_CancelFollowBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NewGuideText_CancelFollowBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SkydivingBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SkydivingProgressBar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpeedLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpeedBG() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LeftNumLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& OpenParachuteBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ParachuteMark() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ProgressIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CancelFollowBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FollowNameLabels() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftNumLabels() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FollowBeforeSkydiving() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& FollowWidget() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NormalWidget() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _IsProgressIconReplaced() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_TargetSpeed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_CurSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_SpeedLerpTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& m_SpeedString() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_ActiveTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsFollow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftNumChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLeaderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkydivingBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenParachuteBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideParachuteMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelFollowBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BroadcastTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAircraftUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkydivingUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowOpenParachuteButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParachuteMarkPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39184))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3918C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39194))(this);
	}
	template <typename T = bool> T CheckIsFollow() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B391A0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B392E4))(this);
	}
	template <typename T = void> T UpdateLeftNum(int32_t num) {
		return ((T (*)(BRSkydivingHUD*, int32_t))(Il2CppBase() + 0x1B39544))(this, num);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39804))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39978))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39C80))(this);
	}
	template <typename T = void> T OnLeftNumChanged(uintptr_t msg) {
		return ((T (*)(BRSkydivingHUD*, uintptr_t))(Il2CppBase() + 0x1B39E94))(this, msg);
	}
	template <typename T = void> T ShowLeaderName() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B39FBC))(this);
	}
	template <typename T = void> T OnSkydivingBtnClicked() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3A260))(this);
	}
	template <typename T = void> T OnOpenParachuteBtnClicked() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3A808))(this);
	}
	template <typename T = void> T HideParachuteMark() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3AA4C))(this);
	}
	template <typename T = void> T HideAllWidget() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B393CC))(this);
	}
	template <typename T = void> T OnCancelFollowBtnClicked() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3ABD4))(this);
	}
	template <typename T = void> T BroadcastTip() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3ADC4))(this);
	}
	template <typename T = void> T OnAfterOpenDoor(uintptr_t msg) {
		return ((T (*)(BRSkydivingHUD*, uintptr_t))(Il2CppBase() + 0x1B3B060))(this, msg);
	}
	template <typename T = void> T OnAircraftUI() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3B3DC))(this);
	}
	template <typename T = void> T OnAircraft() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3B630))(this);
	}
	template <typename T = void> T OnSkydivingUI() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3B924))(this);
	}
	template <typename T = void> T OnSkydiving() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3BBC4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRSkydivingHUD*, float))(Il2CppBase() + 0x1B3BD78))(this, dt);
	}
	template <typename T = void> T OnShowOpenParachuteButton(uintptr_t msg) {
		return ((T (*)(BRSkydivingHUD*, uintptr_t))(Il2CppBase() + 0x1B3C8BC))(this, msg);
	}
	template <typename T = void> T SetParachuteMarkPosition(float position) {
		return ((T (*)(BRSkydivingHUD*, float))(Il2CppBase() + 0x1B3C410))(this, position);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BRSkydivingHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1B3CAE8))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRSkydivingHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B3CCF0))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRSkydivingHUD*, uintptr_t))(Il2CppBase() + 0x1B3D0F8))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3D21C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3D224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3D22C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSkydivingHUD*))(Il2CppBase() + 0x1B3D234))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRSkydivingHUD*, float))(Il2CppBase() + 0x1B3D23C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRSkydivingHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1B3D244))(this, P0, P1, P2);
	}

};

}
