#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UltSkillHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UltSkillHud"));
	}

	template <typename T = uintptr_t> T& T_ClickCallBack() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& InGameTutorialHUDDepth() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_UseSkillBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_RuningProcessSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_RuningIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_RuningWidget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_UsingIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_OverWidget() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_OverIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_OverProcessSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_EnergyFullStartEffect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_EnergyFullNoUseEffect() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EnergyFullNoUseTweenersCache() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_UseUltSkillEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Dissipating() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PVEFirstTips() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RightBoundObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_CanUseSkill() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_EnergyRate() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_OwnerPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_OwnerPlayerPawn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_StartUsingTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_EnergyConsumeAdd() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_LastBuildTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_RuningTweener() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_OverTweener() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_curUltState() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& IsDelayBuilding() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_LastClickTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_dissipatingCoroutine() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> static T& DelayChangeWeaponTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mDelayChangeWeaponTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& IsReachEnd() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RegisterClickCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_FirstUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideFullStartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPVEFirstTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUltState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadStartBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadFinishBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnergyRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressSkillBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelSkillBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseSkillBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideClickUltSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DissipatingTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideDissipating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnergyConsumeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRightBoundObjPosChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUseSkillBtnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T T_RegisterClickCallBack(uintptr_t callBack) {
		return ((T (*)(UltSkillHud*, uintptr_t))(Il2CppBase() + 0x27D64F8))(this, callBack);
	}
	template <typename T = void> T T_FirstUseUlt(bool Full) {
		return ((T (*)(UltSkillHud*, bool))(Il2CppBase() + 0x27D65D0))(this, Full);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D68F4))(this);
	}
	template <typename T = uintptr_t> T get_CurUltState() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D68FC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D6904))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D690C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D69E0))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D69F4))(this);
	}
	template <typename T = void> T DelayHideFullStartEffect() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D6A00))(this);
	}
	template <typename T = void> T CheckShowPVEFirstTips() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D6B74))(this);
	}
	template <typename T = void> T SetUltState(uintptr_t setUltState) {
		return ((T (*)(UltSkillHud*, uintptr_t))(Il2CppBase() + 0x27D7144))(this, setUltState);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D7ECC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D8264))(this);
	}
	template <typename T = uintptr_t> T StartHandler() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D8354))(this);
	}
	template <typename T = bool> T OnGamepadUseSkill() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D8458))(this);
	}
	template <typename T = bool> T OnGamepadStartBuilding() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D8A8C))(this);
	}
	template <typename T = bool> T OnGamepadFinishBuilding() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D933C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D9544))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D9984))(this);
	}
	template <typename T = uint32_t> T GetOwnerPlayerID() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D9DC4))(this);
	}
	template <typename T = void> T Init(float rate, uint32_t PlayerID) {
		return ((T (*)(UltSkillHud*, float, uint32_t))(Il2CppBase() + 0x27D9EAC))(this, rate, PlayerID);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DA894))(this);
	}
	template <typename T = void> T UpdateEnergyRate(float rate) {
		return ((T (*)(UltSkillHud*, float))(Il2CppBase() + 0x27DA614))(this, rate);
	}
	template <typename T = void> T OnPressSkillBtnPress(uintptr_t go, bool press) {
		return ((T (*)(UltSkillHud*, uintptr_t, bool))(Il2CppBase() + 0x27D8BE0))(this, go, press);
	}
	template <typename T = void> T OnCancelSkillBtnClick() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DAA98))(this);
	}
	template <typename T = void> T OnUseSkillBtnClick() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27D859C))(this);
	}
	template <typename T = void> T DelayHideClickUltSkillEffect() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DAB60))(this);
	}
	template <typename T = void> T DissipatingTrigger() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DACD4))(this);
	}
	template <typename T = uintptr_t> T DelayHideDissipating(float delay) {
		return ((T (*)(UltSkillHud*, float))(Il2CppBase() + 0x27DAE00))(this, delay);
	}
	template <typename T = void> T EnergyConsumeAdd(int32_t energyConsumeAdd) {
		return ((T (*)(UltSkillHud*, int32_t))(Il2CppBase() + 0x27DAF34))(this, energyConsumeAdd);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB014))(this);
	}
	template <typename T = void> T UpdateRightBoundObjPosChange() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB330))(this);
	}
	template <typename T = void> T SetUseSkillBtnEnable(bool enable) {
		return ((T (*)(UltSkillHud*, bool))(Il2CppBase() + 0x27DB5B0))(this, enable);
	}
	template <typename T = void> T CheckShowPVEFirstTipsm__0() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB784))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB83C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB844))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB84C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(UltSkillHud*))(Il2CppBase() + 0x27DB85C))(this);
	}

};

}
