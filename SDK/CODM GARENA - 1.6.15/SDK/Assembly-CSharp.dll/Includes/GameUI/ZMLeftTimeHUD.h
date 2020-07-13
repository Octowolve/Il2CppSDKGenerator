#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMLeftTimeHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMLeftTimeHUD"));
	}

	template <typename T = uintptr_t> T& AddGoldMgr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LeftTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& LastMinuteMusicEvent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& LastTenSecondEvent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_LocalTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_OneSecondSum() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& lastMinMusicPlayed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& lastThirdty() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& lastTen() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = uintptr_t> T& OneMinuteLeftTips() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ThirtySecondLeftTips() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TenSecondLeftTips() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TenSecondEffect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RepairWindow_NewGuideText() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Point() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_CurrentPoint() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& AddPointParent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CharacterIcon() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ScorePanelTrigger() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BossRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BossDamagePercent() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& teamMateHud() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& NeedUpdateLeftTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_bChacterIconLoaded() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = uintptr_t> T& TimeSharkGo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_ShowTimeShark() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> static T& TIME_SHAKE_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ScoreLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_Score() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ModifierList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ModifierDescRoot() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ModifierHUDItems() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ModifierDetailItemTemplate() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ModifierDetailGrid() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ModifierDetailBg() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEPointChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerDamgeToBossChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAddPointEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndlessWavaLeftTimeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOneMinuteLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOneMinuteLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowThirdtyLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideThirdtyLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTenLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTenLeftTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeShark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModifierItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A53554))(this);
	}
	template <typename T = void> T OnPVEPointChange(uintptr_t msg) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A5370C))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerDamgeToBossChange(uintptr_t msg) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A53A64))(this, msg);
	}
	template <typename T = void> T ShowAddPointEffect(int32_t add) {
		return ((T (*)(ZMLeftTimeHUD*, int32_t))(Il2CppBase() + 0x2A53884))(this, add);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A53C30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A54028))(this);
	}
	template <typename T = void> T OnBossShow(uintptr_t boss) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A5410C))(this, boss);
	}
	template <typename T = void> T OnBossClear(uintptr_t boss) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A54574))(this, boss);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A548C0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A548C8))(this);
	}
	template <typename T = void> T SyncLeftTime(float time) {
		return ((T (*)(ZMLeftTimeHUD*, float))(Il2CppBase() + 0x2A548D4))(this, time);
	}
	template <typename T = void> T UpdateLeftTime(float time) {
		return ((T (*)(ZMLeftTimeHUD*, float))(Il2CppBase() + 0x2A549F0))(this, time);
	}
	template <typename T = void> T OnEndlessWavaLeftTimeChange(uintptr_t Msg) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A54E48))(this, Msg);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A54FD4))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(ZMLeftTimeHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2A55268))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A52184))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A554AC))(this);
	}
	template <typename T = void> T ShowOneMinuteLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55898))(this);
	}
	template <typename T = uintptr_t> T HideOneMinuteLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55B50))(this);
	}
	template <typename T = void> T ShowThirdtyLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55980))(this);
	}
	template <typename T = uintptr_t> T HideThirdtyLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55C38))(this);
	}
	template <typename T = void> T ShowTenLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55A68))(this);
	}
	template <typename T = uintptr_t> T HideTenLeftTips() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55D20))(this);
	}
	template <typename T = void> T OnShowScorePanel(uintptr_t obj) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A55E08))(this, obj);
	}
	template <typename T = void> T CheckTimeShark(float time) {
		return ((T (*)(ZMLeftTimeHUD*, float))(Il2CppBase() + 0x2A54CAC))(this, time);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A5604C))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A5621C))(this, result);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A5634C))(this);
	}
	template <typename T = void> T ResetScore() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A55174))(this);
	}
	template <typename T = void> T InitModifiers() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A56354))(this);
	}
	template <typename T = void> T RefreshModifiers() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A563F8))(this);
	}
	template <typename T = void> T OnModifierItemPress(uintptr_t OBJ, bool bPress) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t, bool))(Il2CppBase() + 0x2A56FD8))(this, OBJ, bPress);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(ZMLeftTimeHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A570E4))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A572C0))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A573BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A573C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A573CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A573D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(ZMLeftTimeHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2A573DC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMLeftTimeHUD*))(Il2CppBase() + 0x2A573FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(ZMLeftTimeHUD*, uintptr_t))(Il2CppBase() + 0x2A57404))(this, P0);
	}

};

}
