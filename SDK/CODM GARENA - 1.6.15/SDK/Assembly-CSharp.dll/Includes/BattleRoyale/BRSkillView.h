#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_HighLevel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& StickBg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Stick() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& StickCollider() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TipsCollider() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_StickPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& Max_CircleRadius() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& RotateHorizontalSpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& RotateVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& bUsingSkill() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ProgressBarSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ProgressBarBRSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LayoutCount() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& FullBg() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& FullEnergyRef() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& FX_FullBlue() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& FX_FullPurple() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SkillPredictDistance() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& CrosshairRoot() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TooFarCrosshair() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_PressProtectionTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_CurrentPressSumTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BlueEffect() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& PurpleEffect() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LevelupEffect() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_UltConf() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_SkillProcessDic() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_CurrentSkillProcess() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_DefalutSkillProcess() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_SkillStateFlag() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector2> T& SelectedDirection() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_LastPressTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_HasProcessedPressState() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRSkillProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBRSkillProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBeginDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadKeepDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStickDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStickDragFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStickPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessUnPressState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUsingUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BreakPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfirmUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressTimeShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySetUsingUltFalse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLayerAddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideEffectObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSkillInMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSomethingPressing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHasReleaseSkillButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = bool> T get_BUsingSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34A60))(this);
	}
	template <typename T = bool> T get_SkillIsFull() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34A68))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34A70))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34A78))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34B1C))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34B2C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34B38))(this);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B27B34))(this);
	}
	template <typename T = void> T SetBRSkillProcess(uintptr_t conf) {
		return ((T (*)(BRSkillView*, uintptr_t))(Il2CppBase() + 0x1B34E14))(this, conf);
	}
	template <typename T = void> T RegisterBRSkillProcess(uintptr_t type, uintptr_t skillProcess) {
		return ((T (*)(BRSkillView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B34F50))(this, type, skillProcess);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3504C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B35378))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B355AC))(this);
	}
	template <typename T = bool> T OnGamepadBeginDown() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B357E0))(this);
	}
	template <typename T = bool> T OnGamepadKeepDown() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B35F24))(this);
	}
	template <typename T = bool> T OnGamepadUp() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3629C))(this);
	}
	template <typename T = void> T OnStickDrag(uintptr_t obj, Il2CppVector2 offset) {
		return ((T (*)(BRSkillView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1B3609C))(this, obj, offset);
	}
	template <typename T = void> T OnStickDragFinish(uintptr_t obj) {
		return ((T (*)(BRSkillView*, uintptr_t))(Il2CppBase() + 0x1B36384))(this, obj);
	}
	template <typename T = void> T CheckUseSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B36B30))(this);
	}
	template <typename T = bool> T IsCanPress() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3715C))(this);
	}
	template <typename T = void> T OnStickPress(uintptr_t obj, bool bPress) {
		return ((T (*)(BRSkillView*, uintptr_t, bool))(Il2CppBase() + 0x1B35910))(this, obj, bPress);
	}
	template <typename T = void> T ProcessUnPressState() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B372CC))(this);
	}
	template <typename T = void> T ResetStick() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B37414))(this);
	}
	template <typename T = void> T OnCancelPress(uintptr_t obj, bool bPress) {
		return ((T (*)(BRSkillView*, uintptr_t, bool))(Il2CppBase() + 0x1B37520))(this, obj, bPress);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B375F0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRSkillView*, float))(Il2CppBase() + 0x1B375F8))(this, dt);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B37C88))(this);
	}
	template <typename T = void> T RegisterProcess() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B37D40))(this);
	}
	template <typename T = void> T ShowTips(uintptr_t obj) {
		return ((T (*)(BRSkillView*, uintptr_t))(Il2CppBase() + 0x1B35CD4))(this, obj);
	}
	template <typename T = void> T UpdatePawnRotation(Il2CppVector3 offset) {
		return ((T (*)(BRSkillView*, Il2CppVector3))(Il2CppBase() + 0x1B364D8))(this, offset);
	}
	template <typename T = void> T SetUsingUlt(bool bUsing) {
		return ((T (*)(BRSkillView*, bool))(Il2CppBase() + 0x1B367E0))(this, bUsing);
	}
	template <typename T = void> T BreakPawnState() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B37FF8))(this);
	}
	template <typename T = void> T BeginUseSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B36E14))(this);
	}
	template <typename T = void> T PreUseUltSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B38658))(this);
	}
	template <typename T = void> T UseUltSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B38418))(this);
	}
	template <typename T = void> T ConfirmUseSkill() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B366B4))(this);
	}
	template <typename T = bool> T PressTimeShort() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B2B31C))(this);
	}
	template <typename T = void> T CancelUseUlt() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B28378))(this);
	}
	template <typename T = void> T DelaySetUsingUltFalse() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3875C))(this);
	}
	template <typename T = void> T LevelUp() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B27F3C))(this);
	}
	template <typename T = void> T PlayLayerAddEffect() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B28128))(this);
	}
	template <typename T = void> T DelayHideEffectObj() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3895C))(this);
	}
	template <typename T = bool> T IsSkillInMaxLevel() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B38804))(this);
	}
	template <typename T = void> T CheckSetLevel() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B34BF8))(this);
	}
	template <typename T = void> T HideSomethingPressing(bool bHide) {
		return ((T (*)(BRSkillView*, bool))(Il2CppBase() + 0x1B36CD4))(this, bHide);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B38A70))(this);
	}
	template <typename T = void> T SetHasReleaseSkillButton(bool hasRelease) {
		return ((T (*)(BRSkillView*, bool))(Il2CppBase() + 0x1B3465C))(this, hasRelease);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRSkillView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B38CAC))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRSkillView*, uintptr_t))(Il2CppBase() + 0x1B38F20))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3901C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B39024))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3902C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B39034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3903C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRSkillView*, float))(Il2CppBase() + 0x1B39044))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B3904C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRSkillView*))(Il2CppBase() + 0x1B39054))(this);
	}

};

}
