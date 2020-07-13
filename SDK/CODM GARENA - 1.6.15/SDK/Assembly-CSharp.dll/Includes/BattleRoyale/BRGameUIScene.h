#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_CurrentUIStage() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_BRBagSwitchHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_BREquipmentBagController() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_BRNearbyItemListController() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_BRNearbyBoxController() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& m_BRQuickMedicineController() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> T& m_BRQuickThrowWeaponController() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> T& m_BRPerkController() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = uintptr_t> T& m_BRUseMedicineHUD() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& m_BRReviveUsingHUD() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = uintptr_t> T& m_BRReviveAirplaneCdHUD() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& m_BRWaitReviveSpectatorHUD() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = uintptr_t> T& m_BRReviveSpectatorHUD() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& m_BREventBtnMgrHUD() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uintptr_t> T& m_BRZiplineHUD() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = uintptr_t> T& m_BROBTeamHUD() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = uintptr_t> T& m_BRStoryBookBtn() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& m_BRStoryBookHUD() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = uintptr_t> T& m_BRUseBethlehemStarHUD() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& m_BRLotteryMachineHUD() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = uintptr_t> T& m_BRVendingMachineBtn() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& m_BRVendingMachineHUD() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = uintptr_t> T& m_BRWeaponAController() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& m_BRWeaponBController() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = uintptr_t> T& m_BRVehicleWeaponController() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& m_BRVehicleWeaponAimController() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> T& m_BRTipsHUD() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& m_BRBroadcastTipHUD() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = uintptr_t> T& m_BROBLogo() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& m_BRPoisonCircleTipsHUD() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = uintptr_t> T& m_SignHUD() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& m_BRStartHUD() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uintptr_t> T& m_BRSignableObjectTipsHUD() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& m_BRSignAimHUD() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = uintptr_t> T& m_BRSkydivingHUD() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& m_TeamMateDetailHUD() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& m_CureTeammatesController() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& m_KillInfoHud() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> T& m_BRBloodHUD() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& m_BRScoreInfoHUD() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uintptr_t> T& m_BRTeamInfoHUD() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& m_BRDirectionHud() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = uintptr_t> T& m_BROxygenHUD() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& m_BRDoorHUD() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = uintptr_t> T& m_BRChipMachineHUD() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& m_BRCountDownController() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = uintptr_t> T& m_BRNonBattleAreaHUD() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& m_BRFireModeChangeHud() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = uintptr_t> T& m_BRPerkFeedbackHUD() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uintptr_t> T& m_AirDropTipsHUD() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uintptr_t> T& m_BRCollectionItemTipHUD() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& m_BRChipMachineTipsHUD() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = uintptr_t> T& m_BRSelectChipHUD() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& m_DanceInteractionBtnController() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = uintptr_t> T& m_CDPlayerInteractionBtnController() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uintptr_t> T& m_CDPlayerHUD() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = uintptr_t> T& m_BRSkillHUD() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uintptr_t> T& m_BRCactusHitHUD() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = uintptr_t> T& m_InterferenceDroneTargetHUD() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uintptr_t> T& m_DroneInterfereDirectionHUD() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = uintptr_t> T& m_InterferenceDroneIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& m_InterferedByDroneStateHUD() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = uintptr_t> T& m_ElectricTripWireShockTargetIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = uintptr_t> T& m_HurtEffect() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = uintptr_t> T& m_VignetteEffect() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = uintptr_t> T& m_EjectorScrEffect() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = uintptr_t> T& m_BRNoAmmoTipsHUD() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = uintptr_t> T& m_BRGrappleGunMissHud() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = uintptr_t> T& m_BRGrappleGunPrepareShotBanHud() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = uintptr_t> T& m_BRMonkeyBombBanShotHud() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = uintptr_t> T& m_BRAirborneBoardingHud() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = uintptr_t> T& m_InvisibleWarningScreenEffect() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = uintptr_t> T& m_SceneGoodsInfoMgr() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BROSTIHUDList() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_tacticalTeamMateStateList() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = uintptr_t> T& m_HelicopterCrashTipHud() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = uintptr_t> T& BMMonitorController() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = float> T& m_fGrappleGunMissHudShowSumTime() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = float> T& m_fCurrGrappleGunMissHudShowTime() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = bool> T& m_bGrappleGunMissHudShowState() {
		return *(T*)((uintptr_t)this + 0x3B4);
	}
	template <typename T = uintptr_t> T& m_BRMineHUD() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}
	template <typename T = uintptr_t> T& m_BRMineTipHUD() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = uintptr_t> T& m_BRBuffIconHUD() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = uintptr_t> T& m_NearbyModule() {
		return *(T*)((uintptr_t)this + 0x3C4);
	}
	template <typename T = float> T& kRefreshPickUpListInterval() {
		return *(T*)((uintptr_t)this + 0x3C8);
	}
	template <typename T = float> T& m_PickupUpdateIntv() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = uintptr_t> T& m_GasScreenEffectHUD() {
		return *(T*)((uintptr_t)this + 0x3D0);
	}
	template <typename T = uintptr_t> T& m_GasScreenEffectNumberHUD() {
		return *(T*)((uintptr_t)this + 0x3D4);
	}
	template <typename T = bool> T& m_LastSignalInDanger() {
		return *(T*)((uintptr_t)this + 0x3D8);
	}
	template <typename T = uintptr_t> T& m_GasScreenEffectHUDAnimator() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = bool> T& m_HasUpdateRenderOrder() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = uint32_t> static T& DangerSignalVal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_HasSetBRNearbyQuickMainControllerHidden() {
		return *(T*)((uintptr_t)this + 0x3E1);
	}
	template <typename T = bool> T& m_HasSetBRDoorHUDHidden() {
		return *(T*)((uintptr_t)this + 0x3E2);
	}
	template <typename T = bool> T& m_HasSetCureTeammatesControllerHidden() {
		return *(T*)((uintptr_t)this + 0x3E3);
	}
	template <typename T = uintptr_t> T& m_PsychosisSwitchScreenEffect() {
		return *(T*)((uintptr_t)this + 0x3E4);
	}
	template <typename T = uintptr_t> T& m_BrSettlementWindowBeSpectatorCtr() {
		return *(T*)((uintptr_t)this + 0x3E8);
	}
	template <typename T = uintptr_t> T& m_BrSettlementWindowDetailCtr() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = uintptr_t> T& m_BrTDMInGameSettlementWindowCtr() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = bool> T& m_IsSettlementReceived() {
		return *(T*)((uintptr_t)this + 0x3F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentUIStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInteractiveInGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFeedBackHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOpenSceneHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpCommonTipsHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDroppedPickUpConfirmView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCODMissileCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponOverHeatHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSelfExplodingProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathHPProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathGlassHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathWeaponOverHeatProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpGameSomethingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRGameScoreInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init_BRNearbyModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown_BRNearbyModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdatePickupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNearbyPickupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTeamPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRFireModeChangeHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRTeamLeaderDateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRTeamMateInfoReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRTeamMateInfoOBSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRTeamMateVehocleStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrappleMissHudShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSceneGoodsInfoHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadWeaponSwitch2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadWeaponSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadSwitchShowBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRSwitchBagMainHUDShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRDetailTeamMateShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBagViewPickupDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseMedicineBeginUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseMedicineEndUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRReviveAirplaneCd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRZiplineHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRStoryBookBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRStoryBookHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRVendingMachineBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRVendingMachineHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRUseBethlehemStarHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRUseBethlehemStarFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLotteryMachineHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLotteryMachineHUDDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRequestHelp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerOnAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerOnSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAlivePlayerCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDoorHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChipMachineInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalRadarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerTakedDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideHurtEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInjuredScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInjuredScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGasState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideGasScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSystemSettingBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCureTeammatesHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCureTeammatesTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCureteammatesSuccessfulTipsView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowOpenAimHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSimpleFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowFireBtnHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSignsUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSignsMenuHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateHelicopterCrashTipHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateKillInfoController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDanceInteractionBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCDPlayerUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowDanceInteractionBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowCDPlayerUIBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowCDPlayerHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMusicChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMusicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillInfoNotify_ScrollingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickPanelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRQuickMedicine_BloodChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCountDownChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkItemInWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBrHudSpectatorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceTeamRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceRangeRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRangeGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceFriendRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleDroneUIHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowBRBloodHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalChipMachineListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalPickUpAreaListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLoginOrLogoutToAllTacticalController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameHudStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOSTeammetaInfoHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyOSTeammetaInfoHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowAirDropTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowChipMachineTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowInterferenceDroneTargetHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAddDroneInterfereDirectionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveDroneIntefereDirectionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateInterferenceDroneIndicatorItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveAllInterferenceDroneIndicatorItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInDroneInterferedState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAddElectricTripWireShockTargetIndicatorItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveElectricTripWireShockTargetIndicatorItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveAllElectricTripWireShockTargetIndicatorItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowGrappleMiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideGrappleGunMissHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowGrappleGunPrepareShotBan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideGrappleGunPrepareShotBanHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowMonkeyBombBanShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideMonkeyBombBanShotHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowAirborneBoardingHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowSceneAirborneInfoHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowEjectorScrEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySpectEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRNewGuideComTipsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCollectionItemChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastCactusHitPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCactusHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNewGuideManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNewGuideMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPsychosisSwitchScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPsychosisSwitchScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePsychosisSwitchScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInvisibleWarningScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInvisibleWarningScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInvisibleWarningScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillInfoNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWaitSpectatorHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWaitSpectatorHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNormalWaitSpectatorHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillLocalPlayerTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerSpecator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}

	template <typename T = uintptr_t> T GetCurrentUIStage() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1926F68))(this);
	}
	template <typename T = uintptr_t> T get_BRNearbyBoxController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x18B127C))(this);
	}
	template <typename T = uintptr_t> T get_BRNearbyItemListController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x18FCE4C))(this);
	}
	template <typename T = uintptr_t> T get_ReviveSpectatorHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927038))(this);
	}
	template <typename T = uintptr_t> T get_StoryBookHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927040))(this);
	}
	template <typename T = uintptr_t> T get_VendingMachineHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927048))(this);
	}
	template <typename T = uintptr_t> T get_BroadcastTipHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927050))(this);
	}
	template <typename T = uintptr_t> T get_AircraftStartHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927058))(this);
	}
	template <typename T = uintptr_t> T get_BRSkydivingHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927060))(this);
	}
	template <typename T = uintptr_t> T get_BRSkillHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927068))(this);
	}
	template <typename T = uintptr_t> T get_SceneGoodsInfoMgr() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x18FE568))(this);
	}
	template <typename T = void> T set_SceneGoodsInfoMgr(uintptr_t value) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1927070))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BROSTIHUDList() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927078))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TacticalTeamMateStateList() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927080))(this);
	}
	template <typename T = void> T set_BMMonitorController(uintptr_t value) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1927088))(this, value);
	}
	template <typename T = uintptr_t> T get_BMMonitorController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927090))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1927098))(this);
	}
	template <typename T = Il2CppVector3> T get_ExpBuffHUDPosition() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19270A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19270DC))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192AC10))(this);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192AF68))(this);
	}
	template <typename T = void> T CloseScorePanel() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B030))(this);
	}
	template <typename T = void> T CreateInteractiveInGameHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B0F8))(this);
	}
	template <typename T = void> T CreateFeedBackHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B1C0))(this);
	}
	template <typename T = void> T CreateOpenSceneHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B288))(this);
	}
	template <typename T = void> T CreatePvpCommonTipsHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B350))(this);
	}
	template <typename T = void> T LoadDroppedPickUpConfirmView() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B418))(this);
	}
	template <typename T = void> T CreateCODMissileCrossHair() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B4E0))(this);
	}
	template <typename T = void> T CreateWeaponOverHeatHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B5A8))(this);
	}
	template <typename T = void> T CreateSelfExplodingProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B670))(this);
	}
	template <typename T = void> T CreateGoliathHPProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B738))(this);
	}
	template <typename T = void> T CreateGoliathGlassHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B800))(this);
	}
	template <typename T = void> T CreateGoliathWeaponOverHeatProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B8C8))(this);
	}
	template <typename T = void> T CreatePvpGameSomethingController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192B990))(this);
	}
	template <typename T = void> T CreateBRGameScoreInfo() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192BB2C))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BRGameUIScene*, Il2CppVector3))(Il2CppBase() + 0x18F99CC))(this, shift);
	}
	template <typename T = uintptr_t> T get_NearbyModule() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x18D8BF4))(this);
	}
	template <typename T = void> T Init_BRNearbyModule() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192BCEC))(this);
	}
	template <typename T = void> T Shutdown_BRNearbyModule() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192AE80))(this);
	}
	template <typename T = void> T OnDeleteDroppedPickUp(uintptr_t obj) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192BE08))(this, obj);
	}
	template <typename T = void> T ForceUpdatePickupList() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192BEE4))(this);
	}
	template <typename T = void> T UpdateNearbyPickupList(float dt) {
		return ((T (*)(BRGameUIScene*, float))(Il2CppBase() + 0x192BFCC))(this, dt);
	}
	template <typename T = void> T OpenTeamPage(uintptr_t obj) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192C0DC))(this, obj);
	}
	template <typename T = void> T CreateBRFireModeChangeHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1929FB8))(this);
	}
	template <typename T = void> T OnMapMark(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19074E8))(this, Msg);
	}
	template <typename T = void> T OnNotifyBRTeamLeaderDateReady(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192C558))(this, Msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192CE44))(this, Msg);
	}
	template <typename T = void> T OnNotifyBRTeamMateInfoReady(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192D034))(this, Msg);
	}
	template <typename T = void> T OnNotifyBRTeamMateInfoOBSwitch(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192D2C0))(this, Msg);
	}
	template <typename T = void> T OnNotifyBRTeamMateVehocleStateChange(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192D4DC))(this, Msg);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192D628))(this, Msg);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192D7F0))(this, msg);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRGameUIScene*, float))(Il2CppBase() + 0x192D978))(this, dt);
	}
	template <typename T = void> T UpdateGrappleMissHudShow(float dt) {
		return ((T (*)(BRGameUIScene*, float))(Il2CppBase() + 0x192E620))(this, dt);
	}
	template <typename T = void> T UpdateSceneGoodsInfoHudState(float dt) {
		return ((T (*)(BRGameUIScene*, float))(Il2CppBase() + 0x192E50C))(this, dt);
	}
	template <typename T = bool> T OnGamepadWeaponSwitch2() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192E818))(this);
	}
	template <typename T = bool> T OnGamepadWeaponSwitch() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192EB1C))(this);
	}
	template <typename T = bool> T OnGamepadSwitchShowBag() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192EE20))(this);
	}
	template <typename T = void> T OnBRSwitchBagMainHUDShow(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192F624))(this, Msg);
	}
	template <typename T = void> T OnBRDetailTeamMateShow(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192F9A8))(this, Msg);
	}
	template <typename T = void> T OnNotifyBagViewPickupDone(int32_t itemID, int32_t posID) {
		return ((T (*)(BRGameUIScene*, int32_t, int32_t))(Il2CppBase() + 0x192FB7C))(this, itemID, posID);
	}
	template <typename T = void> T OnUseMedicineBeginUse(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192FC84))(this, msg);
	}
	template <typename T = void> T OnUseMedicineEndUse(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192FE70))(this, msg);
	}
	template <typename T = void> T OnUseReviveCard(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x192FFE8))(this, msg);
	}
	template <typename T = void> T OnBRReviveAirplaneCd(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19301F4))(this, msg);
	}
	template <typename T = void> T OnBRZiplineHud(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1930354))(this, msg);
	}
	template <typename T = void> T OnBRStoryBookBtn(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1930504))(this, msg);
	}
	template <typename T = void> T OnBRStoryBookHUD(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1930A04))(this, msg);
	}
	template <typename T = void> T OnBRVendingMachineBtn(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1930F30))(this, msg);
	}
	template <typename T = void> T OnBRVendingMachineHUD(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19311B0))(this, msg);
	}
	template <typename T = void> T OnBRUseBethlehemStarHUD(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931430))(this, msg);
	}
	template <typename T = void> T OnBRUseBethlehemStarFailed(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931694))(this, msg);
	}
	template <typename T = void> T OnBRLotteryMachineHUD(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19317E0))(this, msg);
	}
	template <typename T = void> T OnBRLotteryMachineHUDDebug(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931B6C))(this, msg);
	}
	template <typename T = void> T OnNotifyTeammateRequestHelp(uint32_t playerId, bool pickupOrUse) {
		return ((T (*)(BRGameUIScene*, uint32_t, bool))(Il2CppBase() + 0x191B6B8))(this, playerId, pickupOrUse);
	}
	template <typename T = void> T OnBRLocalPlayerOnAircraft(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931C3C))(this, Msg);
	}
	template <typename T = void> T OnBRLocalPlayerOnSkyFly(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931E00))(this, Msg);
	}
	template <typename T = void> T OnBRLocalPlayerSkydiving(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1931F50))(this, Msg);
	}
	template <typename T = void> T OnBRLocalPlayerLanded(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19320BC))(this, Msg);
	}
	template <typename T = void> T ResetCameraFov() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19322F4))(this);
	}
	template <typename T = void> T OnAlivePlayerCountChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1932480))(this, msg);
	}
	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193263C))(this);
	}
	template <typename T = void> T OnNotifyDoorHUD(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193270C))(this, Msg);
	}
	template <typename T = void> T OnNotifyChipMachineInteractive(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1932BB4))(this, Msg);
	}
	template <typename T = void> T CreateTacticalRadarController(uintptr_t tacticalGPS) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1932E9C))(this, tacticalGPS);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1933220))(this, tacticalGPS);
	}
	template <typename T = void> T OnLocalPlayerTakedDamage(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1933428))(this, msg);
	}
	template <typename T = void> T HideHurtEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933830))(this);
	}
	template <typename T = int32_t> T GetInjuredScreenEffectAssetID() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933978))(this);
	}
	template <typename T = void> T CreateInjuredScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933A4C))(this);
	}
	template <typename T = void> T UpdateGasState() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192DA88))(this);
	}
	template <typename T = void> T HideGasScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933B24))(this);
	}
	template <typename T = bool> T get_ShowWeaponView() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933D50))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933D58))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933E20))(this);
	}
	template <typename T = bool> T get_IsLoadCrossHairPlayerInfoHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933EE8))(this);
	}
	template <typename T = bool> T get_IsCreateKillStreakHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933EF0))(this);
	}
	template <typename T = bool> T get_IsCreatePVPBloodHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933EF8))(this);
	}
	template <typename T = void> T LoadSystemSettingBtn() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1933F00))(this);
	}
	template <typename T = void> T ShowCureTeammatesHud(bool show, bool checkTutorial) {
		return ((T (*)(BRGameUIScene*, bool, bool))(Il2CppBase() + 0x190E704))(this, show, checkTutorial);
	}
	template <typename T = void> T OnCureTeammatesTrigger(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1933FC8))(this, msg);
	}
	template <typename T = void> T OnShowCureteammatesSuccessfulTipsView(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1934244))(this, Msg);
	}
	template <typename T = void> T OnShowOpenAimHUD(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1934314))(this, Msg);
	}
	template <typename T = void> T OnShowSimpleFireBtn(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19343E4))(this, Msg);
	}
	template <typename T = bool> T IsShowFireBtnHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19344B4))(this);
	}
	template <typename T = void> T OnEnterDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193468C))(this, inMsg);
	}
	template <typename T = void> T OnLeaveDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193475C))(this, inMsg);
	}
	template <typename T = void> T CreateSignsUI() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193482C))(this);
	}
	template <typename T = void> T CreateSignsMenuHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1934AA4))(this);
	}
	template <typename T = void> T CreateHelicopterCrashTipHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192A8BC))(this);
	}
	template <typename T = void> T CreateKillInfoController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1934C44))(this);
	}
	template <typename T = void> T CreateDanceInteractionBtnController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192A264))(this);
	}
	template <typename T = void> T CreateCDPlayerUI() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192A420))(this);
	}
	template <typename T = void> T OnNotifyShowDanceInteractionBtn(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1934E34))(this, msg);
	}
	template <typename T = void> T OnNotifyShowCDPlayerUIBtn(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19350B8))(this, msg);
	}
	template <typename T = void> T OnNotifyShowCDPlayerHUD(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193537C))(this, msg);
	}
	template <typename T = void> T OnNotifyMusicChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19356AC))(this, msg);
	}
	template <typename T = void> T OnNotifyMusicState(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1935AE8))(this, msg);
	}
	template <typename T = void> T OnKillInfoNotify_ScrollingInfo(uintptr_t killInfo) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1935CCC))(this, killInfo);
	}
	template <typename T = uintptr_t> T GetJoyStickPanelType() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1936CBC))(this);
	}
	template <typename T = void> T OnGameHUDLayoutChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1936D8C))(this, msg);
	}
	template <typename T = void> T OnPawnTopNameHudAdd(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1936E70))(this, msg);
	}
	template <typename T = void> T OnSyncPlayerInfo(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1937284))(this, msg);
	}
	template <typename T = void> T BRQuickMedicine_BloodChangedHandler(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19373E4))(this, msg);
	}
	template <typename T = void> T OnBRCountDownChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1937604))(this, msg);
	}
	template <typename T = void> T OnShowObserverHud(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1937820))(this, Msg);
	}
	template <typename T = void> T MarkItemInWorld(int32_t ActorID, int32_t ItemID, bool IsInBox) {
		return ((T (*)(BRGameUIScene*, int32_t, int32_t, bool))(Il2CppBase() + 0x1937980))(this, ActorID, ItemID, IsInBox);
	}
	template <typename T = void> T OnNotifyBrHudSpectatorMode(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1937AD8))(this, Msg);
	}
	template <typename T = void> T TryToEnterVoiceTeamRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1937C24))(this);
	}
	template <typename T = Il2CppString*> T GetTeamGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1938068))(this);
	}
	template <typename T = void> T TryToEnterVoiceRangeRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19383B8))(this);
	}
	template <typename T = Il2CppString*> T GetRangeGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19387FC))(this);
	}
	template <typename T = void> T TryToEnterVoiceFriendRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1938A94))(this);
	}
	template <typename T = Il2CppString*> T GetFriendGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1938B6C))(this);
	}
	template <typename T = void> T LoadVoiceBtn(bool isShowVoice) {
		return ((T (*)(BRGameUIScene*, bool))(Il2CppBase() + 0x1938E88))(this, isShowVoice);
	}
	template <typename T = void> T VehicleDroneUIHandler(bool isShow, uintptr_t owner) {
		return ((T (*)(BRGameUIScene*, bool, uintptr_t))(Il2CppBase() + 0x19390F0))(this, isShow, owner);
	}
	template <typename T = void> T DelayShowBRBloodHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1939584))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19396D8))(this, msg);
	}
	template <typename T = void> T OnTacticalChipMachineListChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193992C))(this, msg);
	}
	template <typename T = void> T OnTacticalPickUpAreaListChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1939A6C))(this, msg);
	}
	template <typename T = void> T OnTacticalTeamPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1939B9C))(this, msg);
	}
	template <typename T = void> T NotifyLoginOrLogoutToAllTacticalController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1939F44))(this);
	}
	template <typename T = void> T OnNotifyGameHudStateChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193A048))(this, msg);
	}
	template <typename T = void> T UpdateOSTeammetaInfoHud(uint32_t playerID) {
		return ((T (*)(BRGameUIScene*, uint32_t))(Il2CppBase() + 0x192C844))(this, playerID);
	}
	template <typename T = void> T DestroyOSTeammetaInfoHud(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193A1F4))(this, msg);
	}
	template <typename T = void> T OnNotifyShowAirDropTips(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193A4D8))(this, Msg);
	}
	template <typename T = void> T OnNotifyShowChipMachineTips(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193A7E4))(this, Msg);
	}
	template <typename T = void> T OnNotifyShowInterferenceDroneTargetHUD(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193AAF0))(this, Msg);
	}
	template <typename T = void> T OnNotifyAddDroneInterfereDirectionItem(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193AD24))(this, Msg);
	}
	template <typename T = void> T OnNotifyRemoveDroneIntefereDirectionItem(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193AFB8))(this, Msg);
	}
	template <typename T = void> T OnNotifyUpdateInterferenceDroneIndicatorItemInfo(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193B164))(this, Msg);
	}
	template <typename T = void> T OnNotifyRemoveAllInterferenceDroneIndicatorItems(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193B3F8))(this, Msg);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(BRGameUIScene*, uint32_t))(Il2CppBase() + 0x193B544))(this, playerID);
	}
	template <typename T = void> T OnNotifyInDroneInterferedState(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193B6E4))(this, Msg);
	}
	template <typename T = void> T OnNotifyAddElectricTripWireShockTargetIndicatorItem(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193B984))(this, Msg);
	}
	template <typename T = void> T OnNotifyRemoveElectricTripWireShockTargetIndicatorItem(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193BB18))(this, Msg);
	}
	template <typename T = void> T OnNotifyRemoveAllElectricTripWireShockTargetIndicatorItems(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193BCAC))(this, Msg);
	}
	template <typename T = void> T OnNotifyShowGrappleMiss(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193BDDC))(this, Msg);
	}
	template <typename T = void> T DelayHideGrappleGunMissHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193C038))(this);
	}
	template <typename T = void> T OnNotifyShowGrappleGunPrepareShotBan(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193C18C))(this, Msg);
	}
	template <typename T = void> T DelayHideGrappleGunPrepareShotBanHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193C408))(this);
	}
	template <typename T = void> T OnNotifyShowMonkeyBombBanShot(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193C55C))(this, Msg);
	}
	template <typename T = void> T DelayHideMonkeyBombBanShotHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193C7D4))(this);
	}
	template <typename T = void> T OnNotifyShowAirborneBoardingHud(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193C928))(this, Msg);
	}
	template <typename T = void> T OnNotifyShowSceneAirborneInfoHud(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193CD18))(this, Msg);
	}
	template <typename T = void> T OnNotifyShowEjectorScrEffect(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193D040))(this, Msg);
	}
	template <typename T = void> T OnNotifySpectEnemy(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193D250))(this, Msg);
	}
	template <typename T = void> T OnShowEMPEffect(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193D404))(this, Msg);
	}
	template <typename T = void> T OnBRNewGuideComTipsHud(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193D6D4))(this, msg);
	}
	template <typename T = void> T OnBRCollectionItemChanged(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193D7A4))(this, msg);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193D8F4))(this);
	}
	template <typename T = void> T SetLastCactusHitPos(Il2CppVector3 pos) {
		return ((T (*)(BRGameUIScene*, Il2CppVector3))(Il2CppBase() + 0x193D9C4))(this, pos);
	}
	template <typename T = void> T OnCactusHit() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19336EC))(this);
	}
	template <typename T = uintptr_t> T CreateNewGuideManager() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193DB3C))(this);
	}
	template <typename T = bool> T IsNewGuideMode() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193DCA8))(this);
	}
	template <typename T = void> T InitPsychosisSwitchScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192A714))(this);
	}
	template <typename T = void> T ShowPsychosisSwitchScreenEffect(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193DDB8))(this, Msg);
	}
	template <typename T = void> T HidePsychosisSwitchScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193DF80))(this);
	}
	template <typename T = void> T InitInvisibleWarningScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x192AA68))(this);
	}
	template <typename T = void> T ShowInvisibleWarningScreenEffect(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193E0CC))(this, Msg);
	}
	template <typename T = void> T HideInvisibleWarningScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193E3B0))(this);
	}
	template <typename T = void> T OnKillInfoNotify(uintptr_t killInfo) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193E560))(this, killInfo);
	}
	template <typename T = void> T HideWaitSpectatorHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19108B4))(this);
	}
	template <typename T = void> T ShowWaitSpectatorHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x193EF4C))(this);
	}
	template <typename T = void> T ShowNormalWaitSpectatorHud(int32_t waitTime) {
		return ((T (*)(BRGameUIScene*, int32_t))(Il2CppBase() + 0x193F0AC))(this, waitTime);
	}
	template <typename T = void> T OnKillLocalPlayerTeamMate(uint32_t deadId) {
		return ((T (*)(BRGameUIScene*, uint32_t))(Il2CppBase() + 0x193EB20))(this, deadId);
	}
	template <typename T = void> T OnBRLocalPlayerDied(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193F25C))(this, Msg);
	}
	template <typename T = void> T OnBRLocalPlayerSpecator(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193F32C))(this, msg);
	}
	template <typename T = void> T OnBRSettlement(uintptr_t Msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193F484))(this, Msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t msg) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193FA44))(this, msg);
	}
	template <typename T = void> T Initm__0(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193FBB8))(this, effect);
	}
	template <typename T = void> T Initm__1(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193FCE4))(this, effect);
	}
	template <typename T = void> T Initm__2(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193FDC0))(this, effect);
	}
	template <typename T = void> T Initm__3(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x193FF08))(this, effect);
	}
	template <typename T = void> T Initm__4(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940064))(this, effect);
	}
	template <typename T = void> T InitPsychosisSwitchScreenEffectm__5(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19401C0))(this, effect);
	}
	template <typename T = void> T InitInvisibleWarningScreenEffectm__6(uintptr_t effect) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940308))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseScorePanel() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInteractiveInGameHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateFeedBackHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateOpenSceneHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreatePvpCommonTipsHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadDroppedPickUpConfirmView() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateCODMissileCrossHair() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateWeaponOverHeatHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateSelfExplodingProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGoliathHPProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGoliathGlassHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGoliathWeaponOverHeatProgressHUD() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreatePvpGameSomethingController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19404D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19404D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19404E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGameUIScene*, float))(Il2CppBase() + 0x19404E8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IfNeedVoice() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19404F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalRadarController(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19404F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalMapController(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940500))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerTakedDamage(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940508))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetInjuredScreenEffectAssetID() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInjuredScreenEffect() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadSystemSettingBtn() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterDroppedPickUpTrigger(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940538))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveDroppedPickUpTrigger(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940540))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateSignsUI() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateSignsMenuHud() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateKillInfoController() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillInfoNotify_ScrollingInfo(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940560))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetJoyStickPanelType() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDLayoutChanged(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940570))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnTopNameHudAdd(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940578))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940580))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowObserverHud(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940588))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryToEnterVoiceTeamRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940590))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetTeamGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TryToEnterVoiceRangeRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405A0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRangeGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TryToEnterVoiceFriendRoom() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405B0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetFriendGVoiceRoomName() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadVoiceBtn(bool P0) {
		return ((T (*)(BRGameUIScene*, bool))(Il2CppBase() + 0x19405C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_VehicleDroneUIHandler(bool P0, uintptr_t P1) {
		return ((T (*)(BRGameUIScene*, bool, uintptr_t))(Il2CppBase() + 0x19405C8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerLoginOrLogoutNotify(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19405D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyGameHudStateChanged(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19405D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltSkillHud(uint32_t P0) {
		return ((T (*)(BRGameUIScene*, uint32_t))(Il2CppBase() + 0x19405E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowEMPEffect(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x19405E8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateNewGuideManager() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x19405F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNewGuideMode() {
		return ((T (*)(BRGameUIScene*))(Il2CppBase() + 0x1940600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillInfoNotify(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940608))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyQuitGame(uintptr_t P0) {
		return ((T (*)(BRGameUIScene*, uintptr_t))(Il2CppBase() + 0x1940610))(this, P0);
	}

};

}
