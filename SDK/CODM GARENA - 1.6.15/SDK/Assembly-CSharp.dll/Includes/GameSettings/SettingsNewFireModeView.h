#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewFireModeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewFireModeView"));
	}

	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& T_TargetClickedHandlerSimple() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& T_TargetClickedExtendAdvanceHandler() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& T_TargetClickedAssaultADSHandler() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& EnableSimpleControl() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& EnableLimitFireRange() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SimpleCustom() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AutoFireObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& touch3DObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& touch3DEnableButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& touch3DEnableButtonOnObj() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& touch3DEnableButtonOffObj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& touch3DOpenBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& touch3DSlider() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& touch3DCloseSlider() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& touch3DCloseBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& touch3DConfirmBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AutoFireBCList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& AutoBC() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AutoFirePVPBGList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AutoFireBRBGList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AutoFirePVEBGList() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& EnableAdvanceControl() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ManualObj() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ExtendAdvance() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& CloseAdvance() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& AdavnceExModeGo() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& AdavanceCustom() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& AllADS() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& AllADSOn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& AllADSOff() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& AllHIP() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& AllHIPOn() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& AllHIPOff() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& AllCustom() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& AllCustomOn() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& AllCustomOff() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& AssaultRiflesToggeleADS() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& AssaultRiflesToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& SubMachineGunToggeleADS() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SubMachineGunToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& ShotGunToggeleADS() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ShotGunToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LightMachineGunToggeleADS() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LightMachineGunToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& SniperRifleToggeleADS() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& SniperRifleToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& PistolToggeleADS() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& PistolToggeleHIP() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& ManualToggle() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& touch3DObjManual() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& touch3DEnableButtonManual() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& touch3DEnableButtonOnObjManual() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& touch3DEnableButtonOffObjManual() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& touch3DOpenBtnManual() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& touch3DSliderManual() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& touch3DCloseSliderManual() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& touch3DCloseBtnManual() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& touch3DConfirmBtnManual() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ManualFireBCList() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& ManualBC() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& ADSAnimationStay() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ADSAnimation() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& HIPAnimationStay() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& HIPAnimation() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ManualFirePVPBGList() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ManualFireBRBGList() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ManualFirePVEBGList() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& AutoFireArea() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& AutoFireAnimationArea() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& ManualFireArea() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& ManualFireAnimationArea() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ADSAnimationArea() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& HIPAnimationArea() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& AllADSArea() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& AllHIPArea() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& OtherArea1() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& OtherArea2() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& AdvanceHighLightObj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& AdvanceCustomBtn() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& TutorialRim() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& TutorialMask() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanels() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClickManualToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClickSimpleToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandlerSimple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickExtendAdvanceHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClickExtendAdvance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickAssaultADSHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnToggleExtendAdvance_AssaultADS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAdvanceExMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetManaulFireAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBGMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopManaulAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T T_OnClickManualToggle() {
		return ((T (*)(SettingsNewFireModeView*))(Il2CppBase() + 0x287363C))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t))(Il2CppBase() + 0x287B034))(this, clickHandler);
	}
	template <typename T = void> T T_OnClickSimpleToggle() {
		return ((T (*)(SettingsNewFireModeView*))(Il2CppBase() + 0x287B0DC))(this);
	}
	template <typename T = void> T T_SetClickHandlerSimple(uintptr_t clickHandler) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t))(Il2CppBase() + 0x287B1BC))(this, clickHandler);
	}
	template <typename T = void> T T_SetClickExtendAdvanceHandler(uintptr_t clickHandler) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t))(Il2CppBase() + 0x287B264))(this, clickHandler);
	}
	template <typename T = void> T T_OnClickExtendAdvance() {
		return ((T (*)(SettingsNewFireModeView*))(Il2CppBase() + 0x2878320))(this);
	}
	template <typename T = void> T T_SetClickAssaultADSHandler(uintptr_t clickHandler) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t))(Il2CppBase() + 0x287B30C))(this, clickHandler);
	}
	template <typename T = void> T T_OnToggleExtendAdvance_AssaultADS() {
		return ((T (*)(SettingsNewFireModeView*))(Il2CppBase() + 0x28777C0))(this);
	}
	template <typename T = void> T SetAdvanceExMode(bool bShow) {
		return ((T (*)(SettingsNewFireModeView*, bool))(Il2CppBase() + 0x2877B04))(this, bShow);
	}
	template <typename T = void> T SetManaulFireAnimation(uintptr_t WestControlSetting, bool isAllHIP) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t, bool))(Il2CppBase() + 0x2874398))(this, WestControlSetting, isAllHIP);
	}
	template <typename T = void> T SetBGMode(uintptr_t mode) {
		return ((T (*)(SettingsNewFireModeView*, uintptr_t))(Il2CppBase() + 0x28787F8))(this, mode);
	}
	template <typename T = void> T StopManaulAnimation(bool active) {
		return ((T (*)(SettingsNewFireModeView*, bool))(Il2CppBase() + 0x287B3B4))(this, active);
	}

};

}
