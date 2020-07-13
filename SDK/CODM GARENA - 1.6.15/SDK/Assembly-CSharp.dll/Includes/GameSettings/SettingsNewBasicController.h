#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewBasicController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewBasicController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommnPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpZmModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBrUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrAlwaysSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrAlwaysToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrSlideTackleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMoveJoystickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFPPWeaponNewModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrJoystickSprintChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrshowVestToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrAutoTakingToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrAutoOpeningDoorToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrShowLeftShootBtnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeSwitchToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeHorizontalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeVerticalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFastStandingBrToggelChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrCameraFovSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrOpenAssistToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrRightFireFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrJoyStickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrRightFireTurnForbidToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFixedVirtualJoyStickToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFixedVirtualJoyStickBCClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightFireTurnForbidBCClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrShotGunHipFireToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrHideProneBtnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrOpenAimingToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMainCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrJoystickSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrFPPWeaponNewModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrShowVestValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrSlideTackleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrAlwaysSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrCameraFovValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrAutoTakingValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrOpeningDoorValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrLeftShootModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPvpUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFastThrowToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpMoveJoystickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFPPWeaponNewModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpJoystickSprintChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpSlideTackleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpShowLeftShootBtnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpAlwaysSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpAlwaysToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGyroscopeSwitchToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroscopeSwitchToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroscopeHorizontalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroscopeVerticalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFastStandingPVPToggelChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpCameraFovSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpOpenAssistToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpRightFireFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpJoyStickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpRightFireTurnForbidToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFixedVirtualJoyStickToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFixedVirtualJoyStickBCClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpShotGunHipFireToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpHideProneBtnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpOpenAimingToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpCameraFovValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetJoystickSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShotGunHipFireValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpFastThrowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpFPPWeaponNewModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpSlideTackleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpAlwaysSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpLeftShootModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPveUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveAutoFireToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveFastThrowToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveMoveJoystickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveFPPWeaponNewModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveJoystickSprintChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveSlideTackleToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveShowLeftShootBtnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveAlwaysSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveAlwaysToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveGyroscopeSwitchToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveGyroscopeHorizontalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveGyroscopeVerticalReverseToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFastStandingpveToggelChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnpveCameraFovSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveOpenAssistToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveRightFireFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveJoyStickFixedToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveRightFireTurnForbidToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFixedVirtualJoyStickToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFixedVirtualJoyStickBCClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveShotGunHipFireToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveOpenAimingToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveCameraFovValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveAutoFireValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveJoystickSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveFastThrowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveFPPWeaponNewModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveSlideTackleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveAlwaysSprintValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetpveLeftShootModeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSliderColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisableGyroscopeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCachedValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2586948))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25869EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258CBBC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258CDD8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258CEEC))(this);
	}
	template <typename T = void> T SetCommnPanel(uintptr_t commonPanel, uintptr_t setting) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x258D12C))(this, commonPanel, setting);
	}
	template <typename T = void> T ProcessGameMode() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258CF9C))(this);
	}
	template <typename T = void> T OnBrModeClick(int32_t index) {
		return ((T (*)(SettingsNewBasicController*, int32_t))(Il2CppBase() + 0x258E18C))(this, index);
	}
	template <typename T = void> T OnPvpZmModeClick(int32_t index) {
		return ((T (*)(SettingsNewBasicController*, int32_t))(Il2CppBase() + 0x258E57C))(this, index);
	}
	template <typename T = void> T OnPVEModeClick(int32_t index) {
		return ((T (*)(SettingsNewBasicController*, int32_t))(Il2CppBase() + 0x258E964))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258D9F0))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewBasicController*, int32_t))(Il2CppBase() + 0x258ED4C))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x258EF04))(this, message);
	}
	template <typename T = void> T OnRestoreChange(uintptr_t message) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x258F2D8))(this, message);
	}
	template <typename T = void> T RegisterBrUIEvent() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2586BAC))(this);
	}
	template <typename T = void> T OnBrAlwaysSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258F510))(this);
	}
	template <typename T = void> T OnBrAlwaysToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258F738))(this);
	}
	template <typename T = void> T OnBrSlideTackleToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258F994))(this);
	}
	template <typename T = void> T OnBrMoveJoystickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258FAD8))(this);
	}
	template <typename T = void> T OnBrFPPWeaponNewModeToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258FC04))(this);
	}
	template <typename T = void> T OnBrJoystickSprintChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258FE8C))(this);
	}
	template <typename T = void> T OnBrshowVestToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2590000))(this);
	}
	template <typename T = void> T OnBrAutoTakingToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259023C))(this);
	}
	template <typename T = void> T OnBrAutoOpeningDoorToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259035C))(this);
	}
	template <typename T = void> T OnBrShowLeftShootBtnToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25904C4))(this);
	}
	template <typename T = void> T OnBrGyroscopeSwitchToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2590674))(this);
	}
	template <typename T = void> T OnBrGyroscopeHorizontalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25908D8))(this);
	}
	template <typename T = void> T OnBrGyroscopeVerticalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25909F8))(this);
	}
	template <typename T = void> T OnFastStandingBrToggelChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2590B18))(this);
	}
	template <typename T = void> T OnBrCameraFovSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2590C40))(this);
	}
	template <typename T = void> T OnBrOpenAssistToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2591224))(this);
	}
	template <typename T = void> T OnBrRightFireFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2591344))(this);
	}
	template <typename T = void> T OnBrJoyStickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25915FC))(this);
	}
	template <typename T = void> T OnBrRightFireTurnForbidToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25918B4))(this);
	}
	template <typename T = void> T OnBrFixedVirtualJoyStickToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25919D4))(this);
	}
	template <typename T = void> T OnBrFixedVirtualJoyStickBCClick(uintptr_t o) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x2591AF4))(this, o);
	}
	template <typename T = void> T OnRightFireTurnForbidBCClick(uintptr_t o) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x2591C90))(this, o);
	}
	template <typename T = void> T OnBrShotGunHipFireToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2591E2C))(this);
	}
	template <typename T = void> T OnBrHideProneBtnToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2591F4C))(this);
	}
	template <typename T = void> T OnBrOpenAimingToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259206C))(this);
	}
	template <typename T = void> T ResetMainCamera() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2590E64))(this);
	}
	template <typename T = void> T SetBrUIValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258E3D4))(this);
	}
	template <typename T = void> T SetBrJoystickSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2592C0C))(this);
	}
	template <typename T = void> T SetBrFPPWeaponNewModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2592D58))(this);
	}
	template <typename T = void> T SetBrShowVestValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2592EA4))(this);
	}
	template <typename T = void> T SetBrSlideTackleValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25928B8))(this);
	}
	template <typename T = void> T SetBrAlwaysSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25929F8))(this);
	}
	template <typename T = void> T SetBrCameraFovValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2592748))(this);
	}
	template <typename T = void> T SetBrAutoTakingValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25922D0))(this);
	}
	template <typename T = void> T SetBrOpeningDoorValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259241C))(this);
	}
	template <typename T = void> T SetBrLeftShootModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2592594))(this);
	}
	template <typename T = void> T RegisterPvpUIEvent() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2588D04))(this);
	}
	template <typename T = void> T OnPvpFastThrowToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259320C))(this);
	}
	template <typename T = void> T OnPvpMoveJoystickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593384))(this);
	}
	template <typename T = void> T OnPvpFPPWeaponNewModeToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25934B0))(this);
	}
	template <typename T = void> T OnPvpJoystickSprintChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593738))(this);
	}
	template <typename T = void> T OnPvpSlideTackleToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25938AC))(this);
	}
	template <typename T = void> T OnPvpShowLeftShootBtnToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25939F0))(this);
	}
	template <typename T = void> T OnPvpAlwaysSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593BA0))(this);
	}
	template <typename T = void> T OnPvpAlwaysToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593CC0))(this);
	}
	template <typename T = void> T OnGyroscopeSwitchToggleChange(uintptr_t panel, uintptr_t setting) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2590770))(this, panel, setting);
	}
	template <typename T = void> T OnPvpGyroscopeSwitchToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593E0C))(this);
	}
	template <typename T = void> T OnPvpGyroscopeHorizontalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2593F08))(this);
	}
	template <typename T = void> T OnPvpGyroscopeVerticalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594028))(this);
	}
	template <typename T = void> T OnFastStandingPVPToggelChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594148))(this);
	}
	template <typename T = void> T OnPvpCameraFovSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594270))(this);
	}
	template <typename T = void> T OnPvpOpenAssistToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594494))(this);
	}
	template <typename T = void> T OnPvpRightFireFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25945B4))(this);
	}
	template <typename T = void> T OnPvpJoyStickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259486C))(this);
	}
	template <typename T = void> T OnPvpRightFireTurnForbidToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594B24))(this);
	}
	template <typename T = void> T OnPvpFixedVirtualJoyStickToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594C44))(this);
	}
	template <typename T = void> T OnPvpFixedVirtualJoyStickBCClick(uintptr_t o) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x2594D64))(this, o);
	}
	template <typename T = void> T OnPvpShotGunHipFireToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2594F00))(this);
	}
	template <typename T = void> T OnPvpHideProneBtnToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595020))(this);
	}
	template <typename T = void> T OnPvpOpenAimingToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595140))(this);
	}
	template <typename T = void> T SetPvpUIValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258E7C4))(this);
	}
	template <typename T = void> T SetPvpCameraFovValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595C90))(this);
	}
	template <typename T = void> T SetJoystickSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25953A4))(this);
	}
	template <typename T = void> T SetShotGunHipFireValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25954F0))(this);
	}
	template <typename T = void> T SetPvpFastThrowValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259563C))(this);
	}
	template <typename T = void> T SetPvpFPPWeaponNewModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595E00))(this);
	}
	template <typename T = void> T SetPvpSlideTackleValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595788))(this);
	}
	template <typename T = void> T SetPvpAlwaysSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25958C8))(this);
	}
	template <typename T = void> T SetPvpLeftShootModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595ADC))(this);
	}
	template <typename T = void> T RegisterPveUIEvent() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258AC60))(this);
	}
	template <typename T = void> T OnpveAutoFireToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2595F4C))(this);
	}
	template <typename T = void> T OnpveFastThrowToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259606C))(this);
	}
	template <typename T = void> T OnpveMoveJoystickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25961E4))(this);
	}
	template <typename T = void> T OnpveFPPWeaponNewModeToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596310))(this);
	}
	template <typename T = void> T OnpveJoystickSprintChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596598))(this);
	}
	template <typename T = void> T OnpveSlideTackleToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259670C))(this);
	}
	template <typename T = void> T OnpveShowLeftShootBtnToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596850))(this);
	}
	template <typename T = void> T OnpveAlwaysSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596A00))(this);
	}
	template <typename T = void> T OnpveAlwaysToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596B20))(this);
	}
	template <typename T = void> T OnpveGyroscopeSwitchToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596C6C))(this);
	}
	template <typename T = void> T OnpveGyroscopeHorizontalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596D68))(this);
	}
	template <typename T = void> T OnpveGyroscopeVerticalReverseToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596E88))(this);
	}
	template <typename T = void> T OnFastStandingpveToggelChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2596FA8))(this);
	}
	template <typename T = void> T OnpveCameraFovSliderChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25970D0))(this);
	}
	template <typename T = void> T OnPveOpenAssistToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25972E0))(this);
	}
	template <typename T = void> T OnPveRightFireFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2597400))(this);
	}
	template <typename T = void> T OnPveJoyStickFixedToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25976B8))(this);
	}
	template <typename T = void> T OnPveRightFireTurnForbidToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2597970))(this);
	}
	template <typename T = void> T OnPveFixedVirtualJoyStickToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2597A90))(this);
	}
	template <typename T = void> T OnPveFixedVirtualJoyStickBCClick(uintptr_t o) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x2597BB0))(this, o);
	}
	template <typename T = void> T OnPveShotGunHipFireToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2597D4C))(this);
	}
	template <typename T = void> T OnPveOpenAimingToggleChange() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2597E6C))(this);
	}
	template <typename T = void> T SetpveUIValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258EBAC))(this);
	}
	template <typename T = void> T SetpveCameraFovValues() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25989BC))(this);
	}
	template <typename T = void> T SetpveAutoFireValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x259821C))(this);
	}
	template <typename T = void> T SetpveJoystickSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25980D0))(this);
	}
	template <typename T = void> T SetpveFastThrowValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2598368))(this);
	}
	template <typename T = void> T SetpveFPPWeaponNewModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2598B2C))(this);
	}
	template <typename T = void> T SetpveSlideTackleValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25984B4))(this);
	}
	template <typename T = void> T SetpveAlwaysSprintValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25985F4))(this);
	}
	template <typename T = void> T SetpveLeftShootModeValue() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2598808))(this);
	}
	template <typename T = void> T SetSliderColor(uintptr_t slider, bool isActive) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t, bool))(Il2CppBase() + 0x259302C))(this, slider, isActive);
	}
	template <typename T = void> T OnDisableGyroscopeBtnClick(uintptr_t o) {
		return ((T (*)(SettingsNewBasicController*, uintptr_t))(Il2CppBase() + 0x2598C78))(this, o);
	}
	template <typename T = void> T AdjustPanelDepth(int32_t addDepth) {
		return ((T (*)(SettingsNewBasicController*, int32_t))(Il2CppBase() + 0x2598EC8))(this, addDepth);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258F884))(this);
	}
	template <typename T = void> T SaveCachedValueToServer() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x258F630))(this);
	}
	template <typename T = void> T OnBrRightFireFixedToggleChangem__0() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2598F68))(this);
	}
	template <typename T = void> T OnBrJoyStickFixedToggleChangem__1() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599040))(this);
	}
	template <typename T = void> T OnPvpRightFireFixedToggleChangem__2() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599118))(this);
	}
	template <typename T = void> T OnPvpJoyStickFixedToggleChangem__3() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25991F0))(this);
	}
	template <typename T = void> T OnPveRightFireFixedToggleChangem__4() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25992C8))(this);
	}
	template <typename T = void> T OnPveJoyStickFixedToggleChangem__5() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x25993A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewBasicController*))(Il2CppBase() + 0x2599498))(this);
	}

};

}
