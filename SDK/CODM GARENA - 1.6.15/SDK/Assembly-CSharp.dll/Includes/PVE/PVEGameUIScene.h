#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_TipsHUD() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_SkipCutSceneHUD() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& m_AttackInfoCount() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& m_SkinImplantScreenEffect() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_SkinImplantScreenEffect_Behit() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& m_MetalStormScreenEffect() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& m_TauntScreenEffect() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& m_AddHealthEffect() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PawnBeTauntEffectMap() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TempPawnDeadPlayerIDList() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_3PPawnTauntEffectMap() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInteractiveInGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadUltSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnAddHealthEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnSkinImplantEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnMetalStormEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnTauntEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSystemSettingBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCutSceneSkipHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisableMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetUIVisibleInMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadUITipsMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCutScenePlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatineeDisablePlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenStopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatineeSetUIVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatineeShowZombieDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerTakedDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAddShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltUsingStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAddHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoDelayHideAddHealthEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPawnTauntState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMetalStormState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPawnTauntEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePawnTauntEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnTauntEffectPositionOffsetY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnTauntEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNewGuideManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNewGuideMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = bool> T get_AlwaysDisplayTimeLimitHUD() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438E90C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438E914))(this);
	}
	template <typename T = void> T CreateInteractiveInGameHUD() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438F22C))(this);
	}
	template <typename T = void> T CreateWeaponSkillHud() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438F048))(this);
	}
	template <typename T = void> T OnNotifyLocalPlayerRespawn(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x438F2C4))(this, Msg);
	}
	template <typename T = void> T OnLoadUltSkillEffect(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x438F41C))(this, msg);
	}
	template <typename T = void> T CheckSpawnAddHealthEffect() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438FC64))(this);
	}
	template <typename T = void> T CheckSpawnSkinImplantEffect() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438F5E0))(this);
	}
	template <typename T = void> T CheckSpawnMetalStormEffect() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438F8C4))(this);
	}
	template <typename T = void> T CheckSpawnTauntEffect() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438FA94))(this);
	}
	template <typename T = void> T LoadSystemSettingBtn() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438FE34))(this);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438FECC))(this);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4390084))(this, Msg);
	}
	template <typename T = void> T OnShowCutSceneSkipHUD(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4390138))(this, msg);
	}
	template <typename T = void> T OnDisableMove(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43902C0))(this, Msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43903F0))(this, Msg);
	}
	template <typename T = void> T OnHideWeaponInfo(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4390528))(this, msg);
	}
	template <typename T = void> T OnSetUIVisibleInMatinee(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4390674))(this, msg);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4390A50))(this, Msg);
	}
	template <typename T = uintptr_t> T OnLoadUITipsMessageBox() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x438EDF4))(this);
	}
	template <typename T = bool> T IsCutScenePlaying() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4390BD0))(this);
	}
	template <typename T = bool> T IsMatineeDisablePlayerCamera() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4390CCC))(this);
	}
	template <typename T = void> T OpenPausePanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4390DC8))(this);
	}
	template <typename T = void> T OpenStopPanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4390EF8))(this);
	}
	template <typename T = void> T CloseSettingPanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4390FA0))(this);
	}
	template <typename T = void> T MatineeSetUIVisible(bool bVisible) {
		return ((T (*)(PVEGameUIScene*, bool))(Il2CppBase() + 0x4391048))(this, bVisible);
	}
	template <typename T = void> T MatineeShowZombieDesc(bool bShow) {
		return ((T (*)(PVEGameUIScene*, bool))(Il2CppBase() + 0x4390918))(this, bShow);
	}
	template <typename T = void> T OnLocalPlayerTakedDamage(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43912F0))(this, msg);
	}
	template <typename T = void> T OnNotifyAddShield(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43917EC))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltUsingStateChange(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4391AC8))(this, Msg);
	}
	template <typename T = void> T OnNotifyAddHealth(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43927CC))(this, msg);
	}
	template <typename T = void> T AutoDelayHideAddHealthEffect() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4392ABC))(this);
	}
	template <typename T = void> T OnNotifyPawnTauntState(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4392BD4))(this, msg);
	}
	template <typename T = void> T OnNotifyMetalStormState(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4392E74))(this, msg);
	}
	template <typename T = void> T AddPawnTauntEffect(uintptr_t pawnEffectMap, uint32_t playerID, int32_t effectAssetID) {
		return ((T (*)(PVEGameUIScene*, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x43920F0))(this, pawnEffectMap, playerID, effectAssetID);
	}
	template <typename T = void> T RemovePawnTauntEffect(uintptr_t pawnEffectMap, uint32_t playerID) {
		return ((T (*)(PVEGameUIScene*, uintptr_t, uint32_t))(Il2CppBase() + 0x43925B0))(this, pawnEffectMap, playerID);
	}
	template <typename T = float> T GetPawnTauntEffectPositionOffsetY(uintptr_t tauntPawn) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x439317C))(this, tauntPawn);
	}
	template <typename T = void> T UpdatePawnTauntEffect(uintptr_t pawnEffectMap) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x43932C8))(this, pawnEffectMap);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVEGameUIScene*, float))(Il2CppBase() + 0x4393AAC))(this, dt);
	}
	template <typename T = void> T OnSettlement(uintptr_t Msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4393B78))(this, Msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4393C18))(this, msg);
	}
	template <typename T = uintptr_t> T CreateNewGuideManager() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4393CB8))(this);
	}
	template <typename T = bool> T IsNewGuideMode() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4393DF4))(this);
	}
	template <typename T = void> T CheckSpawnAddHealthEffectm__0(uintptr_t effect) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4393ED4))(this, effect);
	}
	template <typename T = void> T CheckSpawnSkinImplantEffectm__1(uintptr_t e) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394008))(this, e);
	}
	template <typename T = void> T CheckSpawnSkinImplantEffectm__2(uintptr_t e) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394184))(this, e);
	}
	template <typename T = void> T CheckSpawnMetalStormEffectm__3(uintptr_t e) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394300))(this, e);
	}
	template <typename T = void> T CheckSpawnTauntEffectm__4(uintptr_t e) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x439447C))(this, e);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x43945F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInteractiveInGameHUD() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLocalPlayerRespawn(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394608))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadSystemSettingBtn() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394610))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSwitchBag() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394620))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyQuitGame(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394628))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394630))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenPausePanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenStopPanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseSettingPanel() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerTakedDamage(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394650))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyUltUsingStateChange(uintptr_t P0) {
		return ((T (*)(PVEGameUIScene*, uintptr_t))(Il2CppBase() + 0x4394658))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEGameUIScene*, float))(Il2CppBase() + 0x4394660))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateNewGuideManager() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394668))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNewGuideMode() {
		return ((T (*)(PVEGameUIScene*))(Il2CppBase() + 0x4394670))(this);
	}

};

}
