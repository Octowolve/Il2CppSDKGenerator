#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JoySticksPanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JoySticksPanelController"));
	}

	template <typename T = uintptr_t> T& m_ReAmmoBtnController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ThrowWeaponBtnContoller() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FastThrowWeaponBtnController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_NormalThrowWeaponBtnController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_WestThrowWeaponBtnController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_CrouchBtnController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_RightJumpBtnController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_LeftJumpBtnController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_WeaponBtnController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ProneBtnController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_SprintingBtnController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_SwimDivingBtnController() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_SwimFloatingBtnController() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_LeanLeftBtnController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_LeanRightBtnController() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_ThrowTypeChangedBtnController() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_IndividuationBtnController() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_KnifeSwitchBtnController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_DroppedPickUpConfirmCtrl() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ClimbUpConfirmController() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CloseSniperZoomBtnController() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_FireBtnController() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_SecondFireBtnContler() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_LeftFireBtnCol() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Touch3DFireBtnController() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_MoveJoyStickController() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_ADSBtnController() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_SelfExplodingBtnController() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_BRAdsBtnController() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_SwitchRoleBtnController() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_TPSFreeCameraBtnController() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Ctrls() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_OldWeaponBtnViewParent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& m_OldWeaponBtnViewPos() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_DriveVehicleBtnController() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_PassengerVehicleBtnController() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_GetOffVehicleBtnController() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_PropHuntLockViewController() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_PropHuntCloneBtnViewController() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_PropHuntTacticalBtnViewController() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_PropHuntChangeItemViewController() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& mIsSprintingBtnClosedByChat() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& mIsIndividuationBtnClosedByChat() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = bool> T& m_SniperOpened() {
		return *(T*)((uintptr_t)this + 0xEE);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllChildrenCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyChangeChatUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMovementController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableMovementController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFireButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSecondFireButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFireButtonKnifeGrabFaceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowKnifeButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDriveVehicleButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPassengerVehicleButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGetOffVehicleButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateReAmmoButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMoveJoystickController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchADSBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateADSBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchSelfExplodingBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSelfExplodingBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCrouchBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateProneBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePropHuntBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePropHuntSkillBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PropHuntItemSwitchLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRightJumpBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateIndividuationBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSprintingBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSwimmingBtnControllerFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSwimmingBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFireButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSecondFireButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLeftFireButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAllVehicleButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateVehicleButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchOpretaionBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProcessSwitchSelfExplodingBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeanStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetWeaponBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateKnifeButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTPSFreeCameraBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonJoySticks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonJoySticks_TutorialFinal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAllJoySticksControllers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnableCrouchBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnableSpinBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnableProneBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFastThrowModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateThrowBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDroppedPickUpConfirmView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideDroppedPickUpItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HideDroppedPickUpItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableDroppedPickUpItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateClimbUpConfirmView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoyStickController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateJoyStickController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenSizeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCloseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelocateAllGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyJoySticksSettingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoyStickFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoySticksSettingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrenagePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildViewTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMovementJoyStickVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponViewVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIndividuationBtnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReAmmoBtnViewVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponUIVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProneBtnViewVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrouchBtnViewVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetJumpBtnViewVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeSwitchBtnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTPSFreeCameraBtnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSniperShowJoySticks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllJoySticksVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChildJoySticksActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetChildJoySticksActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChildJoySticksDisableEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetoffButtonSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoySticks_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoySticks_PVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoySticks_ZM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}

	template <typename T = uintptr_t> T get_WeaponBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D48))(this);
	}
	template <typename T = uintptr_t> T get_FireBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D50))(this);
	}
	template <typename T = uintptr_t> T get_LeftFireBtnCol() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D58))(this);
	}
	template <typename T = uintptr_t> T get_MoveJoyStickController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D60))(this);
	}
	template <typename T = uintptr_t> T get_ADSBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D68))(this);
	}
	template <typename T = uintptr_t> T get_SelfExplodingBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D70))(this);
	}
	template <typename T = uintptr_t> T get_SwitchRoleBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D78))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16D80))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E16E24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E172AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllChildrenCtrl() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1737C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1741C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E174C4))(this);
	}
	template <typename T = void> T NotifyChangeChatUI(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E175D0))(this, msg);
	}
	template <typename T = void> T ShowMovementController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E17878))(this, bShow);
	}
	template <typename T = void> T DisableMovementController(bool disable) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E179C4))(this, disable);
	}
	template <typename T = void> T ShowFireButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E17AF4))(this, bShow);
	}
	template <typename T = void> T ShowSecondFireButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E17D00))(this, bShow);
	}
	template <typename T = void> T ShowFireButtonKnifeGrabFaceState(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E17F70))(this, bShow);
	}
	template <typename T = void> T ShowKnifeButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1802C))(this, bShow);
	}
	template <typename T = void> T ShowDriveVehicleButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E182CC))(this, bShow);
	}
	template <typename T = void> T ShowPassengerVehicleButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E183E8))(this, bShow);
	}
	template <typename T = void> T ShowGetOffVehicleButtonController(bool bShow) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E18504))(this, bShow);
	}
	template <typename T = void> T CreateWeaponButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E186B8))(this);
	}
	template <typename T = void> T CreateReAmmoButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E188E0))(this);
	}
	template <typename T = void> T CreateMoveJoystickController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18B04))(this);
	}
	template <typename T = void> T OnSwitchADSBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18C20))(this);
	}
	template <typename T = void> T CreateADSBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18CC4))(this);
	}
	template <typename T = void> T OnSwitchSelfExplodingBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18DF8))(this);
	}
	template <typename T = void> T CreateSelfExplodingBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18E9C))(this);
	}
	template <typename T = void> T CreateCrouchBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18FD0))(this);
	}
	template <typename T = void> T CreateProneBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E190EC))(this);
	}
	template <typename T = void> T CreatePropHuntBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E19208))(this);
	}
	template <typename T = void> T CreatePropHuntSkillBtn() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E193C4))(this);
	}
	template <typename T = void> T PropHuntItemSwitchLockState(bool isLock) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E195B0))(this, isLock);
	}
	template <typename T = void> T CreateRightJumpBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E196B8))(this);
	}
	template <typename T = void> T CreateIndividuationBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E197D4))(this);
	}
	template <typename T = void> T CreateSprintingBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E198F0))(this);
	}
	template <typename T = void> T ResetSwimmingBtnControllerFromConfig() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E19A0C))(this);
	}
	template <typename T = void> T CreateSwimmingBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E19C24))(this);
	}
	template <typename T = void> T CreateFireButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E17BE4))(this);
	}
	template <typename T = void> T CreateSecondFireButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E17DE4))(this);
	}
	template <typename T = void> T CreateLeftFireButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E19ED0))(this);
	}
	template <typename T = void> T CreateAllVehicleButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1A05C))(this);
	}
	template <typename T = void> T CreateVehicleButtonController(uintptr_t vehicleBtn, uintptr_t config, Il2CppString* btnName) {
		return ((T (*)(JoySticksPanelController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E7DD50))(this, vehicleBtn, config, btnName);
	}
	template <typename T = void> T OnSwitchOpretaionBtnController(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1A1AC))(this, msg);
	}
	template <typename T = void> T OnProcessSwitchSelfExplodingBtnController(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1A258))(this, msg);
	}
	template <typename T = void> T OnLeanStateChanged(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1A304))(this, msg);
	}
	template <typename T = void> T OnSetWeaponBtnActive(uintptr_t Msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1A440))(this, Msg);
	}
	template <typename T = void> T CreateKnifeButtonController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E18110))(this);
	}
	template <typename T = void> T CreateTPSFreeCameraBtnController() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1A598))(this);
	}
	template <typename T = void> T CreateCommonJoySticks() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1A744))(this);
	}
	template <typename T = void> T CreateCommonJoySticks_TutorialFinal() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1ACD8))(this);
	}
	template <typename T = void> T CreateAllJoySticksControllers() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1AE44))(this);
	}
	template <typename T = void> T OnNotifyEnableCrouchBtn(uintptr_t Msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1B308))(this, Msg);
	}
	template <typename T = void> T OnNotifyEnableSpinBtn(uintptr_t Msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1B484))(this, Msg);
	}
	template <typename T = void> T OnNotifyEnableProneBtn(uintptr_t Msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1B530))(this, Msg);
	}
	template <typename T = void> T OnNotifyFastThrowModeChanged(uintptr_t Msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1B6B4))(this, Msg);
	}
	template <typename T = void> T UpdateThrowBtn() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1A910))(this);
	}
	template <typename T = void> T CreateDroppedPickUpConfirmView() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1B760))(this);
	}
	template <typename T = void> T OnEnterDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1B87C))(this, inMsg);
	}
	template <typename T = void> T HideDroppedPickUpItemInfo(uintptr_t inMsg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1BA3C))(this, inMsg);
	}
	template <typename T = void> T HideDroppedPickUpItemInfo_1() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1BBB8))(this);
	}
	template <typename T = void> T DisableDroppedPickUpItemInfo(bool disable) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1BC6C))(this, disable);
	}
	template <typename T = void> T CreateClimbUpConfirmView() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1ABA4))(this);
	}
	template <typename T = void> T OnShowClimbable() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1BD30))(this);
	}
	template <typename T = void> T OnHideClimbable() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1BF44))(this);
	}
	template <typename T = uintptr_t> T CreateJoyStickController(uintptr_t buttonConfig, uintptr_t inParent, bool inDisplay, int32_t inUserContext) {
		return ((T (*)(JoySticksPanelController*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x334C334))(this, buttonConfig, inParent, inDisplay, inUserContext);
	}
	template <typename T = uintptr_t> T CreateJoyStickController_1(uintptr_t config, uintptr_t inParent, bool inDisplay, int32_t inUserContext) {
		return ((T (*)(JoySticksPanelController*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x334C068))(this, config, inParent, inDisplay, inUserContext);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1BFF4))(this);
	}
	template <typename T = void> T OnScreenSizeChanged() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1C210))(this);
	}
	template <typename T = void> T ShowCloseBtn(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1C468))(this, visible);
	}
	template <typename T = void> T OnRelocateAllGameView(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1C5C0))(this, msg);
	}
	template <typename T = void> T NotifyJoySticksSettingChanged() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1C6F4))(this);
	}
	template <typename T = void> T UpdateJoyStickFromConfig() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1B3B4))(this);
	}
	template <typename T = void> T OnJoySticksSettingChanged() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1C798))(this);
	}
	template <typename T = uintptr_t> T GetGrenagePos() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1C914))(this);
	}
	template <typename T = uintptr_t> T GetChildViewTransform(uintptr_t assetId) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1CA50))(this, assetId);
	}
	template <typename T = void> T SetMovementJoyStickVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1CD08))(this, visible);
	}
	template <typename T = void> T SetWeaponViewVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1CDE4))(this, visible);
	}
	template <typename T = void> T SetIndividuationBtnVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1CEC0))(this, visible);
	}
	template <typename T = void> T SetReAmmoBtnViewVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1CF9C))(this, visible);
	}
	template <typename T = void> T SetWeaponUIVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D078))(this, visible);
	}
	template <typename T = void> T SetProneBtnViewVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D21C))(this, visible);
	}
	template <typename T = void> T SetCrouchBtnViewVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D2F8))(this, visible);
	}
	template <typename T = void> T SetJumpBtnViewVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D3D4))(this, visible);
	}
	template <typename T = void> T SetGrenadeSwitchBtnVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D140))(this, visible);
	}
	template <typename T = void> T SetTPSFreeCameraBtnVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D4DC))(this, visible);
	}
	template <typename T = void> T OnWeaponActive(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1D5B8))(this, msg);
	}
	template <typename T = void> T OnWeaponRemove(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1D674))(this, msg);
	}
	template <typename T = void> T OnSniperShowJoySticks(uintptr_t msg) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1D714))(this, msg);
	}
	template <typename T = void> T SetSwitchButtonEnabled(bool inEnabled) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1D830))(this, inEnabled);
	}
	template <typename T = void> T ReloadAmmo() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1D8EC))(this);
	}
	template <typename T = Il2CppVector3> T GetSettingBtnPos() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1D99C))(this);
	}
	template <typename T = void> T SetAllJoySticksVisible(bool visible) {
		return ((T (*)(JoySticksPanelController*, bool))(Il2CppBase() + 0x2E1DA4C))(this, visible);
	}
	template <typename T = void> T SetChildJoySticksActive(Il2CppArray<uintptr_t>* sticks, bool bActive) {
		return ((T (*)(JoySticksPanelController*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2E1DB38))(this, sticks, bActive);
	}
	template <typename T = void> T SetChildJoySticksActive_1(uintptr_t stick, bool bActive) {
		return ((T (*)(JoySticksPanelController*, uintptr_t, bool))(Il2CppBase() + 0x2E1DD30))(this, stick, bActive);
	}
	template <typename T = void> T SetChildJoySticksDisableEvent(Il2CppArray<uintptr_t>* sticks, bool bDisable) {
		return ((T (*)(JoySticksPanelController*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2E1DEB8))(this, sticks, bDisable);
	}
	template <typename T = void> T SetGetoffButtonSprite(uintptr_t vehicleType) {
		return ((T (*)(JoySticksPanelController*, uintptr_t))(Il2CppBase() + 0x2E1E0A4))(this, vehicleType);
	}
	template <typename T = void> T CreateJoySticks_BR() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1B094))(this);
	}
	template <typename T = void> T CreateJoySticks_PVP() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1B254))(this);
	}
	template <typename T = void> T CreateJoySticks_ZM() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1B158))(this);
	}
	template <typename T = void> T CreateAllJoySticksControllersm__0() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E160))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(JoySticksPanelController*))(Il2CppBase() + 0x2E1E1C8))(this);
	}

};

}
