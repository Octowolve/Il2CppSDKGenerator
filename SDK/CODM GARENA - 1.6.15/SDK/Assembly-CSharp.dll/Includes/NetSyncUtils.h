#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetSyncUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetSyncUtils"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestPickUpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestDiscardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestExchangePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestMergeSlotPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestUseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestInterruptUseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestUseSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncInterruptReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestUseBethlehemStarItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDogTagHelpMe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRReqestExitObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestSpectatePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestSyncFreeViewObserverPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestNotifyObserverModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGamepadConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_UAV_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_UAV_Dir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_ProjectileStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_UAV_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_Recon_Recover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestControl_Recon_Explo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPreUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestLotteryMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestCreateElectricTripWire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSendNetMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NetWorkSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqesetPingStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDSLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestMapLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestZiplineMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysicsStateToMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestControllableStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAjustMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVTOLRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVTOLMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestOpenCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestResetCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetCarePackageTrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileStartFire_Control() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileStickOnTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifySniperState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyInNonBattleAreaTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyCactusHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyOpenStoryBook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyHornButtonPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncBrokenStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncWindowBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestReportULTStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPickUpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDiscardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBuyItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSellItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSelectProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPreSelectProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCloseSelectProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBuildObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlantC4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDefuseC4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestRevivePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInterruptUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDeathReplayOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDeathReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDSTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNtfSecurityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestRespawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSwitchObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSelectPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCancelULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestULT_Target() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestULTWithInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyPlayerUseLauncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStopMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVoteKick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTouchNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleDroneControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleDroneDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestShakeOffDizzy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncRootMotionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncBRThrowWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestThrowingHoldFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPickGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCancelThrowingHoldFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestResetAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncSentryGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestFHJLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncShadowbladeAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncShadowbladeFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehiclePassengerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestOpenBRChipMachineBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVehicleDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestUseIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetGVoiceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyUseVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUnequipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayTricky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTransferBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequstMarkMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPerkCoinAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAddBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDelBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqResponseBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAddMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDelMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqResponseSpeakMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncTalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncSettingsFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestWeaponSkill_PositionExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestWeaponSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNumPreHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestActorPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetProfessionChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPropItemSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPropHuntChangeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPropHuntBuyItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPropHuntLockItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPropHuntBet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCallForHelp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyGoliathStartSelfExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyGoliathSelfExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestNotifyGoliathWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerSoundSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBeginHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCancelHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadEigenInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DuelGameRequestChooseWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtyInputCheat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPlayerPull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}

	template <typename T = void> static T BRRequestPickUpItem(int32_t inActorID, int32_t inItemID, int32_t inPosId, bool isAutoPickup) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x331ECEC))(0, inActorID, inItemID, inPosId, isAutoPickup);
	}
	template <typename T = void> static T BRRequestDiscardItem(int32_t inActorID, int32_t inItemID, int32_t inPosId, int32_t inCount, Il2CppVector3 pos, bool whole) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, Il2CppVector3, bool))(Il2CppBase() + 0x331EFA8))(0, inActorID, inItemID, inPosId, inCount, pos, whole);
	}
	template <typename T = void> static T BRRequestExchangePos(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x331F278))(0, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = void> static T BRRequestMergeSlotPos(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x331F3FC))(0, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = void> static T BRRequestUseMedicine(int32_t actorId, int32_t itemId, int32_t posId, uint32_t playerId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x331F580))(0, actorId, itemId, posId, playerId);
	}
	template <typename T = void> static T BRRequestInterruptUseMedicine(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x331F70C))(0, itemId);
	}
	template <typename T = void> static T BRRequestUseSkillItem(int32_t actorId, int32_t itemId, int32_t posId, uint32_t playerId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x331F864))(0, actorId, itemId, posId, playerId);
	}
	template <typename T = void> static T SyncReviveTeammate(uint32_t playerId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x331F9F0))(0, playerId);
	}
	template <typename T = void> static T SyncInterruptReviveTeammate(uint32_t playerId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x331FB48))(0, playerId);
	}
	template <typename T = void> static T BRRequestUseBethlehemStarItem(int32_t actorId, int32_t itemId, int32_t posId, uint32_t playerId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x331FCA0))(0, actorId, itemId, posId, playerId);
	}
	template <typename T = void> static T NotifyDogTagHelpMe(bool pickupOrUse) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x331FE2C))(0, pickupOrUse);
	}
	template <typename T = void> static T BRReqestExitObserver() {
		return ((T (*)(void *))(Il2CppBase() + 0x3320108))(0);
	}
	template <typename T = void> static T BRRequestSpectatePlayer(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3320288))(0, playerID);
	}
	template <typename T = void> static T BRRequestSyncFreeViewObserverPosition(Il2CppVector3 Pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x33203D8))(0, Pos);
	}
	template <typename T = void> static T BRRequestNotifyObserverModeChanged(bool isFreeView) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3320660))(0, isFreeView);
	}
	template <typename T = void> static T NotifyGamepadConnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x3320958))(0);
	}
	template <typename T = void> static T BRRequestControl_UAV_Move(int32_t actorId, Il2CppVector3 pos, Il2CppVector3 velocity, bool isBoost) {
		return ((T (*)(void *, int32_t, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x3320BFC))(0, actorId, pos, velocity, isBoost);
	}
	template <typename T = void> static T BRRequestControl_UAV_Dir(int32_t actorId, Il2CppVector3 dir) {
		return ((T (*)(void *, int32_t, Il2CppVector3))(Il2CppBase() + 0x3320EE4))(0, actorId, dir);
	}
	template <typename T = void> static T BRRequestControl_ProjectileStartFire(int32_t actorID, Il2CppVector3 startPos, Il2CppVector3 velocity, Il2CppVector3 targetPos) {
		return ((T (*)(void *, int32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3321154))(0, actorID, startPos, velocity, targetPos);
	}
	template <typename T = void> static T BRRequestControl_UAV_Destroy(int32_t actorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3321560))(0, actorId);
	}
	template <typename T = void> static T BRRequestControl_Recon_Recover(int32_t actorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x33216F4))(0, actorId);
	}
	template <typename T = void> static T BRRequestControl_Recon_Explo(int32_t actorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3321884))(0, actorId);
	}
	template <typename T = void> static T SyncPreUseUltSkill(int16_t UltType) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3321A18))(0, UltType);
	}
	template <typename T = void> static T BRRequestLotteryMachine(uint32_t machineID, int32_t itemId, uintptr_t op) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3321D48))(0, machineID, itemId, op);
	}
	template <typename T = void> static T BRRequestCreateElectricTripWire(int32_t actorID, Il2CppVector3 postion) {
		return ((T (*)(void *, int32_t, Il2CppVector3))(Il2CppBase() + 0x3321EC0))(0, actorID, postion);
	}
	template <typename T = bool> static T CanSendNetMessage() {
		return ((T (*)(void *))(Il2CppBase() + 0x33220B0))(0);
	}
	template <typename T = bool> static T NetWorkSend(uintptr_t protocol, bool force) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x331EEA8))(0, protocol, force);
	}
	template <typename T = void> static T ReqesetPingStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x33222A8))(0);
	}
	template <typename T = void> static T RequestDSLogin(int32_t MapID, uint64_t PlayerId, bool isReconnect) {
		return ((T (*)(void *, int32_t, uint64_t, bool))(Il2CppBase() + 0x33223E4))(0, MapID, PlayerId, isReconnect);
	}
	template <typename T = void> static T RequestMapLoaded(int32_t loadedMapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x332298C))(0, loadedMapId);
	}
	template <typename T = void> static T RequestChangeMoveState(Il2CppVector3 TargetPos, Il2CppVector3 TargetAngles, uintptr_t physicsState, bool isCrouching, uintptr_t curClimbType, bool isProneing, bool isClimbWall) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x3322ADC))(0, TargetPos, TargetAngles, physicsState, isCrouching, curClimbType, isProneing, isClimbWall);
	}
	template <typename T = void> static T RequestMove(Il2CppVector3 PawnLocation, Il2CppVector3 PawnAngles, Il2CppVector3 PawnVelocity, uintptr_t physicsState, bool isCrouching, uintptr_t curClimbType, bool isProneing, bool isClimbWall, unsigned char extraByte, float rotationX, unsigned char checkSeq) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, bool, uintptr_t, bool, bool, unsigned char, float, unsigned char))(Il2CppBase() + 0x3322F68))(0, PawnLocation, PawnAngles, PawnVelocity, physicsState, isCrouching, curClimbType, isProneing, isClimbWall, extraByte, rotationX, checkSeq);
	}
	template <typename T = void> static T RequestZiplineMove(Il2CppVector3 PawnLocation, Il2CppVector3 PawnAngles, Il2CppVector3 PawnVelocity, unsigned char checkSeq, uint32_t ziplineUid, uintptr_t stage) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, unsigned char, uint32_t, uintptr_t))(Il2CppBase() + 0x3323354))(0, PawnLocation, PawnAngles, PawnVelocity, checkSeq, ziplineUid, stage);
	}
	template <typename T = void> static T RequestStartSprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x33236F4))(0);
	}
	template <typename T = void> static T RequestStopSprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x3323874))(0);
	}
	template <typename T = uintptr_t> static T PhysicsStateToMoveState(uintptr_t physicsState, bool isCrouching, uintptr_t curClimbType, bool isProneing, bool isClimbWall) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x3322D80))(0, physicsState, isCrouching, curClimbType, isProneing, isClimbWall);
	}
	template <typename T = void> static T RequestStartFire(int32_t WeaponItemID, bool singleShot, int32_t inFireCompIdx, bool isAiming, int32_t aommoCount, int32_t ClientTime, unsigned char rightOrLeft) {
		return ((T (*)(void *, int32_t, bool, int32_t, bool, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x33239F4))(0, WeaponItemID, singleShot, inFireCompIdx, isAiming, aommoCount, ClientTime, rightOrLeft);
	}
	template <typename T = void> static T RequestStopFire(int32_t WeaponItemID, int32_t TotalShotCount, int32_t LastFireTime, unsigned char rightOrLeft) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x3323D34))(0, WeaponItemID, TotalShotCount, LastFireTime, rightOrLeft);
	}
	template <typename T = void> static T RequestControllableStartFire(int32_t WeaponItemID, int32_t inFireCompIdx, Il2CppVector3 DstPos) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3323F10))(0, WeaponItemID, inFireCompIdx, DstPos);
	}
	template <typename T = void> static T RequestAjustMissile(uintptr_t flyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3324150))(0, flyInfo);
	}
	template <typename T = void> static T RequestProjectileStartFire(Il2CppVector3 StartPos, Il2CppVector3 Velocity, Il2CppVector3 TargetPos, int32_t WeaponItemID, int32_t ProjID, int32_t inFireCompIdx, float ExplosionTime, uintptr_t throwingStartType, unsigned char RightOrLeft) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, int32_t, int32_t, int32_t, float, uintptr_t, unsigned char))(Il2CppBase() + 0x33243A8))(0, StartPos, Velocity, TargetPos, WeaponItemID, ProjID, inFireCompIdx, ExplosionTime, throwingStartType, RightOrLeft);
	}
	template <typename T = void> static T RequestVTOLRotation(Il2CppVector3 RotAngle, uint32_t actorID) {
		return ((T (*)(void *, Il2CppVector3, uint32_t))(Il2CppBase() + 0x33246E4))(0, RotAngle, actorID);
	}
	template <typename T = void> static T RequestVTOLMove(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3324954))(0, actorID);
	}
	template <typename T = void> static T RequestOpenCarePackage(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3324AB4))(0, actorID);
	}
	template <typename T = void> static T RequestResetCarePackage(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3324C04))(0, actorID);
	}
	template <typename T = void> static T RequestSetCarePackageTrap(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3324D54))(0, actorID);
	}
	template <typename T = void> static T RequestProjectileStartFire_Control(Il2CppVector3 StartPos, Il2CppVector3 Velocity, Il2CppVector3 TargetPos, int32_t WeaponItemID, int32_t ProjID, int32_t inFireCompIdx, float ExplosionTime, uint32_t actorID) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, int32_t, int32_t, int32_t, float, uint32_t))(Il2CppBase() + 0x3324EA4))(0, StartPos, Velocity, TargetPos, WeaponItemID, ProjID, inFireCompIdx, ExplosionTime, actorID);
	}
	template <typename T = void> static T RequestProjectileUnlock(uint32_t actorID, int32_t inFireCompIdx) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x3325258))(0, actorID, inFireCompIdx);
	}
	template <typename T = void> static T RequestProjectileLockTarget(uint32_t actorID, Il2CppVector3 StartPos, Il2CppVector3 Dir, int32_t inFireCompIdx) {
		return ((T (*)(void *, uint32_t, Il2CppVector3, Il2CppVector3, int32_t))(Il2CppBase() + 0x33253BC))(0, actorID, StartPos, Dir, inFireCompIdx);
	}
	template <typename T = void> static T RequestProjectileStickOnTarget(int32_t ActorId, uintptr_t StickPart, Il2CppVector3 RelativeActorPos, Il2CppVector3 RelativePartPos, Il2CppVector3 Normal, uint32_t HostID, uintptr_t HostType) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uint32_t, uintptr_t))(Il2CppBase() + 0x3325600))(0, ActorId, StickPart, RelativeActorPos, RelativePartPos, Normal, HostID, HostType);
	}
	template <typename T = void> static T RequestEquipWeapon(int32_t itemID, unsigned char slot, int32_t actorId, bool bSubWeapon) {
		return ((T (*)(void *, int32_t, unsigned char, int32_t, bool))(Il2CppBase() + 0x33259EC))(0, itemID, slot, actorId, bSubWeapon);
	}
	template <typename T = void> static T SyncFireMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x3325BA0))(0);
	}
	template <typename T = void> static T RequestSyncAnimation(uintptr_t animType, float ainmLength, float param1) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x3325D7C))(0, animType, ainmLength, param1);
	}
	template <typename T = void> static T RequestChangeClip(int32_t inFireCompIdx, int32_t ReammoNum) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3325F4C))(0, inFireCompIdx, ReammoNum);
	}
	template <typename T = void> static T RequestNotifySniperState(bool zoomIn, bool isFov) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x33260A8))(0, zoomIn, isFov);
	}
	template <typename T = void> static T RequestNotifyInNonBattleAreaTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x33262EC))(0);
	}
	template <typename T = void> static T RequestNotifyCactusHit() {
		return ((T (*)(void *))(Il2CppBase() + 0x33266C4))(0);
	}
	template <typename T = void> static T RequestNotifyOpenStoryBook(int32_t cityIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3326858))(0, cityIdx);
	}
	template <typename T = void> static T RequestNotifyHornButtonPressed(bool isPressed) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x33269B0))(0, isPressed);
	}
	template <typename T = void> static T RequestTakeDamage(uintptr_t target, uintptr_t damageInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3326B38))(0, target, damageInfo);
	}
	template <typename T = void> static T RequestSyncBrokenStatus(uint32_t inActorId, uint32_t inStatus_1, uint32_t inStatus_2) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x332708C))(0, inActorId, inStatus_1, inStatus_2);
	}
	template <typename T = void> static T RequestSyncWindowBroken(uint32_t uid, uint32_t playerId, Il2CppVector3 position, Il2CppVector3 direction) {
		return ((T (*)(void *, uint32_t, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3327204))(0, uid, playerId, position, direction);
	}
	template <typename T = void> static T RequestReportULTStat(uint32_t inUltID, unsigned char inValueCount, Il2CppArray<uintptr_t>* inValues) {
		return ((T (*)(void *, uint32_t, unsigned char, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3327448))(0, inUltID, inValueCount, inValues);
	}
	template <typename T = void> static T RequestPickUpItem(int32_t inActorID, int32_t inItemID, uintptr_t inDroppPickUpInfo) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x33275C8))(0, inActorID, inItemID, inDroppPickUpInfo);
	}
	template <typename T = void> static T RequestDiscardItem(uintptr_t inDroppPickUpInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33278C0))(0, inDroppPickUpInfo);
	}
	template <typename T = void> static T RequestSelectBag(int32_t bagId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3327B64))(0, bagId);
	}
	template <typename T = void> static T RequestBuyItem(uintptr_t itemType, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3327CB8))(0, itemType, value);
	}
	template <typename T = void> static T RequestSellItem(uintptr_t itemType, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3327E14))(0, itemType, value);
	}
	template <typename T = void> static T RequestSelectProfessionChip(int32_t chipId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3327F70))(0, chipId);
	}
	template <typename T = void> static T RequestPreSelectProfessionChip(int32_t chipId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x33280C0))(0, chipId);
	}
	template <typename T = void> static T RequestCloseSelectProfessionChip() {
		return ((T (*)(void *))(Il2CppBase() + 0x3328210))(0);
	}
	template <typename T = void> static T RequestBuildObstacle(uint32_t uid, uintptr_t type) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x3328390))(0, uid, type);
	}
	template <typename T = void> static T RequestNotifyServer(uintptr_t notifyType, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x33284EC))(0, notifyType, value);
	}
	template <typename T = void> static T RequestPlantC4(int32_t itemID, Il2CppVector3 position) {
		return ((T (*)(void *, int32_t, Il2CppVector3))(Il2CppBase() + 0x3328648))(0, itemID, position);
	}
	template <typename T = void> static T RequestDefuseC4(int32_t itemID, Il2CppVector3 position) {
		return ((T (*)(void *, int32_t, Il2CppVector3))(Il2CppBase() + 0x3328838))(0, itemID, position);
	}
	template <typename T = void> static T RequestRevivePlayer(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3328A28))(0, playerID);
	}
	template <typename T = void> static T RequestInterruptUseItem(int32_t itemID, unsigned char useItemType) {
		return ((T (*)(void *, int32_t, unsigned char))(Il2CppBase() + 0x3328B80))(0, itemID, useItemType);
	}
	template <typename T = void> static T RequestUseItem(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3328CDC))(0, itemID);
	}
	template <typename T = void> static T RequestDeathReplayOver() {
		return ((T (*)(void *))(Il2CppBase() + 0x3328E34))(0);
	}
	template <typename T = void> static T RequestDeathReplay(uint32_t killerID, uint32_t weaponID, uintptr_t replayType) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3328F70))(0, killerID, weaponID, replayType);
	}
	template <typename T = void> static T RequestDSTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x33290E8))(0);
	}
	template <typename T = void> static T RequestNtfSecurityInfo(float radiusForFire, float aimSpeed, float distance) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3329250))(0, radiusForFire, aimSpeed, distance);
	}
	template <typename T = void> static T RequestRespawnPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x3329400))(0);
	}
	template <typename T = void> static T RequestSwitchObserver() {
		return ((T (*)(void *))(Il2CppBase() + 0x332953C))(0);
	}
	template <typename T = void> static T RequestSelectPlayer(uint64_t PlayerID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3329678))(0, PlayerID);
	}
	template <typename T = void> static T RequestLogout() {
		return ((T (*)(void *))(Il2CppBase() + 0x33297E4))(0);
	}
	template <typename T = void> static T RequestULT(uint32_t ultSkillID, uint32_t playerId) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x3329930))(0, ultSkillID, playerId);
	}
	template <typename T = void> static T RequestCancelULT(uint32_t ultSkillID, uint32_t playerId) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x3329F88))(0, ultSkillID, playerId);
	}
	template <typename T = void> static T RequestULT_Target(uint32_t ultSkillID, uint32_t playerId, Il2CppVector3 target) {
		return ((T (*)(void *, uint32_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x332A0E4))(0, ultSkillID, playerId, target);
	}
	template <typename T = void> static T RequestULTWithInfo(uint32_t ultSkillID, uint32_t playerId, Il2CppVector3 vPos, Il2CppVector3 vNormal) {
		return ((T (*)(void *, uint32_t, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x332A390))(0, ultSkillID, playerId, vPos, vNormal);
	}
	template <typename T = void> static T RequestNotifyPlayerUseLauncher(int32_t nLauncherActorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x332A6C0))(0, nLauncherActorId);
	}
	template <typename T = void> static T RequestStopMatinee(Il2CppString* matineeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x332A818))(0, matineeName);
	}
	template <typename T = void> static T RequestVoteKick(unsigned char reason, uint32_t playerID, uintptr_t voteType) {
		return ((T (*)(void *, unsigned char, uint32_t, uintptr_t))(Il2CppBase() + 0x332AA2C))(0, reason, playerID, voteType);
	}
	template <typename T = void> static T RequestSkydiving() {
		return ((T (*)(void *))(Il2CppBase() + 0x332ABA4))(0);
	}
	template <typename T = void> static T RequestVehicleMove(uintptr_t request) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x332AF5C))(0, request);
	}
	template <typename T = void> static T RequestVehicleUse(uintptr_t request) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x332AFFC))(0, request);
	}
	template <typename T = void> static T RequestTouchNotify(uintptr_t request) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x332B09C))(0, request);
	}
	template <typename T = void> static T RequestVehicleSkill(uintptr_t request) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x332B13C))(0, request);
	}
	template <typename T = void> static T RequestVehicleDroneControl(int32_t actorId, Il2CppVector3 pos, Il2CppVector3 dir, Il2CppVector3 velocity, bool isBoost) {
		return ((T (*)(void *, int32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x332B1DC))(0, actorId, pos, dir, velocity, isBoost);
	}
	template <typename T = void> static T RequestVehicleDroneDestroy(int32_t actorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x332B5CC))(0, actorId);
	}
	template <typename T = void> static T RequestShakeOffDizzy() {
		return ((T (*)(void *))(Il2CppBase() + 0x332B760))(0);
	}
	template <typename T = void> static T RequestBuild(uintptr_t buildingType, int32_t itemID, int32_t actorID, unsigned char mask, Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, unsigned char, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x332B89C))(0, buildingType, itemID, actorID, mask, position, rotation);
	}
	template <typename T = void> static T RequestSyncRootMotionData(unsigned char AnimType, unsigned char ClimbType, Il2CppVector3 HighestPos, Il2CppVector3 EndPos, float CheckDownDistance, unsigned char IsClimbOverLandSky, Il2CppVector3 mantleNormal, float width, float speed) {
		return ((T (*)(void *, unsigned char, unsigned char, Il2CppVector3, Il2CppVector3, float, unsigned char, Il2CppVector3, float, float))(Il2CppBase() + 0x332BB34))(0, AnimType, ClimbType, HighestPos, EndPos, CheckDownDistance, IsClimbOverLandSky, mantleNormal, width, speed);
	}
	template <typename T = void> static T RequestSyncBRThrowWeaponData(unsigned char AnimType, unsigned char ThrowType, unsigned char IsInThrowWeaponFireState, bool isFastThrow) {
		return ((T (*)(void *, unsigned char, unsigned char, unsigned char, bool))(Il2CppBase() + 0x332BE48))(0, AnimType, ThrowType, IsInThrowWeaponFireState, isFastThrow);
	}
	template <typename T = void> static T RequestThrowingHoldFireEnd(Il2CppVector3 StartPos, Il2CppVector3 TargetPos, Il2CppVector3 Velocity, int32_t ProjID, unsigned char pickupFlag) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, int32_t, unsigned char))(Il2CppBase() + 0x332BFD4))(0, StartPos, TargetPos, Velocity, ProjID, pickupFlag);
	}
	template <typename T = void> static T RequestPickGrenade(int32_t ProjID, uintptr_t type) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x332C270))(0, ProjID, type);
	}
	template <typename T = void> static T RequestSyncAiming(bool isAimming) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x332C3E0))(0, isAimming);
	}
	template <typename T = void> static T RequestCancelThrowingHoldFire() {
		return ((T (*)(void *))(Il2CppBase() + 0x332C588))(0);
	}
	template <typename T = void> static T RequestResetAmmo() {
		return ((T (*)(void *))(Il2CppBase() + 0x332C668))(0);
	}
	template <typename T = void> static T RequestSyncSentryGun(bool canFire) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x332C7E8))(0, canFire);
	}
	template <typename T = void> static T RequestFHJLockTarget(uint32_t actorID, uint32_t targetID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x332C950))(0, actorID, targetID);
	}
	template <typename T = void> static T RequestSyncShadowbladeAnimation(unsigned char AnimType) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x332CAC4))(0, AnimType);
	}
	template <typename T = void> static T RequestSyncShadowbladeFireMode(unsigned char FireMode) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x332CC2C))(0, FireMode);
	}
	template <typename T = void> static T RequestSyncBuffer(unsigned char codeID, Il2CppArray<uintptr_t>* buffer, int32_t length) {
		return ((T (*)(void *, unsigned char, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3321B80))(0, codeID, buffer, length);
	}
	template <typename T = void> static T RequestVehiclePassengerState(bool isStand) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x332CD94))(0, isStand);
	}
	template <typename T = void> static T RequestOpenBRChipMachineBox(uint32_t machineUID, uint32_t boxIndex) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x332CF78))(0, machineUID, boxIndex);
	}
	template <typename T = void> static T RequestVehicleDrive(uintptr_t driveData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x332D0D4))(0, driveData);
	}
	template <typename T = void> static T RequestUseIndividuationItem(unsigned char posIndex, Il2CppVector3 pos, Il2CppVector3 rot) {
		return ((T (*)(void *, unsigned char, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x332D174))(0, posIndex, pos, rot);
	}
	template <typename T = void> static T RequestSetGVoiceId(int32_t memberId, uintptr_t roomType) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x332D3AC))(0, memberId, roomType);
	}
	template <typename T = void> static T NotifyUseVoice(uint32_t micState, uint32_t hornState, bool bUseTwoWayRadio) {
		return ((T (*)(void *, uint32_t, uint32_t, bool))(Il2CppBase() + 0x332D508))(0, micState, hornState, bUseTwoWayRadio);
	}
	template <typename T = void> static T SyncUnequipWeapon(int32_t curWeaponId, int32_t curActorId, float unequipTime, int32_t nextWeaponId, bool realUnequip) {
		return ((T (*)(void *, int32_t, int32_t, float, int32_t, bool))(Il2CppBase() + 0x332D6B0))(0, curWeaponId, curActorId, unequipTime, nextWeaponId, realUnequip);
	}
	template <typename T = void> static T SyncEquipWeapon(int32_t curWeaponId, int32_t actorId, float equipTime, bool realEquip) {
		return ((T (*)(void *, int32_t, int32_t, float, bool))(Il2CppBase() + 0x332D890))(0, curWeaponId, actorId, equipTime, realEquip);
	}
	template <typename T = void> static T SyncHoldWeapon(bool isHold) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x332DA64))(0, isHold);
	}
	template <typename T = void> static T SyncPlayTricky(unsigned char isPlay, float aniLength) {
		return ((T (*)(void *, unsigned char, float))(Il2CppBase() + 0x332DBCC))(0, isPlay, aniLength);
	}
	template <typename T = void> static T ReqOpenBox(int32_t actorId, int32_t boxType) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x332DD50))(0, actorId, boxType);
	}
	template <typename T = void> static T TransferSkydivingAnim(int16_t right, int16_t forward, int16_t down, uint16_t bodyRotX, uint16_t bodyRotY) {
		return ((T (*)(void *, int16_t, int16_t, int16_t, uint16_t, uint16_t))(Il2CppBase() + 0x332DEAC))(0, right, forward, down, bodyRotX, bodyRotY);
	}
	template <typename T = void> static T RequestTransferBuffer(unsigned char codeID, Il2CppArray<uintptr_t>* buffer, int32_t length, unsigned char syncType) {
		return ((T (*)(void *, unsigned char, Il2CppArray<uintptr_t>*, int32_t, unsigned char))(Il2CppBase() + 0x332E048))(0, codeID, buffer, length, syncType);
	}
	template <typename T = void> static T RequstMarkMap(uint32_t PlayerId, Il2CppVector3 WorldPos, unsigned char isAdd) {
		return ((T (*)(void *, uint32_t, Il2CppVector3, unsigned char))(Il2CppBase() + 0x332E21C))(0, PlayerId, WorldPos, isAdd);
	}
	template <typename T = void> static T RequestPerkCoinAction(uintptr_t actionType, uint32_t machineUID, uint32_t itemID) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x332E424))(0, actionType, machineUID, itemID);
	}
	template <typename T = void> static T ReqAddBRMark(uint32_t TeamId, uint32_t PlayerId, uintptr_t MarkType, unsigned char SubType, unsigned char ObjectType, int32_t ObjectId, int32_t ItemId, Il2CppVector3 Position, bool IsInBox, unsigned char OperateType, unsigned char AddWay, uint32_t SubObjectType) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t, unsigned char, unsigned char, int32_t, int32_t, Il2CppVector3, bool, unsigned char, unsigned char, uint32_t))(Il2CppBase() + 0x332E59C))(0, TeamId, PlayerId, MarkType, SubType, ObjectType, ObjectId, ItemId, Position, IsInBox, OperateType, AddWay, SubObjectType);
	}
	template <typename T = void> static T ReqDelBRMark(uint32_t TeamId, uint32_t PlayerId, uint32_t MarkId, unsigned char OperateType) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x332E8A8))(0, TeamId, PlayerId, MarkId, OperateType);
	}
	template <typename T = void> static T ReqResponseBRMark(uint32_t TeamId, uint32_t PlayerId, uint32_t MarkPlayerId, uint32_t MarkId, unsigned char OperateType) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x332EA2C))(0, TeamId, PlayerId, MarkPlayerId, MarkId, OperateType);
	}
	template <typename T = void> static T ReqAddMPMark(uintptr_t MarkType, Il2CppVector3 Position) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x332EBBC))(0, MarkType, Position);
	}
	template <typename T = void> static T ReqDelMPMark(uint32_t MarkId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x332EE08))(0, MarkId);
	}
	template <typename T = void> static T ReqResponseSpeakMPMark(uint32_t MarkId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x332EF58))(0, MarkId);
	}
	template <typename T = void> static T RequestSyncTalk(uintptr_t eventType, uint32_t targetID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x332F0A8))(0, eventType, targetID);
	}
	template <typename T = void> static T RequestSyncSettingsFireMode(bool AutoFire) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x332F204))(0, AutoFire);
	}
	template <typename T = void> static T RequestWeaponSkill_PositionExplode(uint32_t actorID, int32_t index, int32_t explodeCount, Il2CppVector3 positionExplode) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x332F38C))(0, actorID, index, explodeCount, positionExplode);
	}
	template <typename T = void> static T RequestWeaponSkill(uint32_t actorID, int32_t index, Il2CppArray<uintptr_t>* ctx, int32_t length) {
		return ((T (*)(void *, uint32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x332F598))(0, actorID, index, ctx, length);
	}
	template <typename T = void> static T RequestNumPreHit(int32_t fireDamageTime, int32_t hitnum) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x332F7A4))(0, fireDamageTime, hitnum);
	}
	template <typename T = void> static T RequestActorPose(int32_t actorID, Il2CppVector3 pos, Il2CppVector3 velocity) {
		return ((T (*)(void *, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x332F954))(0, actorID, pos, velocity);
	}
	template <typename T = void> static T RequestGetProfessionChipInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x332FB8C))(0);
	}
	template <typename T = void> static T RequestPropItemSkill(int32_t skillType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x332FD0C))(0, skillType);
	}
	template <typename T = void> static T RequestPropHuntChangeItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x332FE5C))(0);
	}
	template <typename T = void> static T RequestPropHuntBuyItem(uint32_t ItemID, int32_t CostType) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x332FF98))(0, ItemID, CostType);
	}
	template <typename T = void> static T RequestPropHuntLockItem(bool isLock) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x33300F4))(0, isLock);
	}
	template <typename T = void> static T RequestPropHuntBet(uint32_t betPlayerId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3330274))(0, betPlayerId);
	}
	template <typename T = void> static T RequestCallForHelp() {
		return ((T (*)(void *))(Il2CppBase() + 0x33303C4))(0);
	}
	template <typename T = void> static T RequestNotifyGoliathStartSelfExplode(bool bStartExplode) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3330558))(0, bStartExplode);
	}
	template <typename T = void> static T RequestNotifyGoliathSelfExplode() {
		return ((T (*)(void *))(Il2CppBase() + 0x33306E0))(0);
	}
	template <typename T = void> static T RequestNotifyGoliathWeaponHotValue() {
		return ((T (*)(void *))(Il2CppBase() + 0x333082C))(0);
	}
	template <typename T = void> static T RequestPlayerSoundSync(uintptr_t eventType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3330978))(0, eventType);
	}
	template <typename T = void> static T RequestBeginHeal(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3330AD0))(0, playerID);
	}
	template <typename T = void> static T RequestCancelHeal(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3330C28))(0, playerID);
	}
	template <typename T = void> static T UploadEigenInfo(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3330D80))(0, data);
	}
	template <typename T = void> static T DuelGameRequestChooseWeapon(int32_t weaponType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3330EF0))(0, weaponType);
	}
	template <typename T = void> static T NtyInputCheat(float timeInterval, float maxPointNum) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x3331040))(0, timeInterval, maxPointNum);
	}
	template <typename T = void> static T ReportPlayerPull(Il2CppVector3 clientPos, Il2CppVector3 serverPos, unsigned char moveState, uint32_t serverTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, unsigned char, uint32_t))(Il2CppBase() + 0x33311C0))(0, clientPos, serverPos, moveState, serverTime);
	}

};

}
