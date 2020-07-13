#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRAircraftManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRAircraftManager"));
	}

	template <typename T = Il2CppVector3> T& SkydivingPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& AutoSkyDivingPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& AircraftDir() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& AircraftSyncPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& AircraftSyncTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& OffsetWithSync() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& CurPosInited() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& CurPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& LerpTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& LerpInterval() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& AircraftTrans() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_AircraftTransInstance() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_AircraftAsset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& AircraftStarted() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CameraTargetTrans() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_AircraftAnimator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_HatchdoorOpened() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_AircraftStartPos() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_AircraftStartSkydivingPos() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& m_AircraftStartSpeed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_HasPreLoadRes() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_IsStartingAttach() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& m_IsViewPawnInAircraft() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = bool> T& m_IsServerActive() {
		return *(T*)((uintptr_t)this + 0xB3);
	}
	template <typename T = float> T& m_CamMinAngle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_CamMaxAngle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_CamSensitivity() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_CamFOV() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_AircraftScale() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_CamDist() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_CamInitYOffset() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& CamYOffset() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Asset_ID_List() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_TransX_List() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_TransY_List() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_TransZ_List() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_Helifleet_Camera_Initial_TransX() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_Helifleet_Camera_Intital_Pitch_Degree() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Camera_Speed_List() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Camera_Speed_Change_TransX_List() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_Helifleet_Camera_Min_Switch_Time() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_AircraftStartTextPrintInterval() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_AircraftStartTextDisappearTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_AircraftStartTextHideSpeed() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_Start_Distance() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_Acceleration() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_ProgressBarStartHeight() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Camera_Anim_Time_List() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Camera_Speed_List_t() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Camera_Speed_List_p() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Helifleet_Camera_Speed_List_rel() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_Start_Time() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_Relative_Speed() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_t0() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_t1() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_t2() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_p_init() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_p0() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_Helifleet_Camera_Chase_p1() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_StartAircraftTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& m_Helifleet_Camera_Speed() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_Helifleet_Camera_Switch_TransX() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& m_Helifleet_LastCameraPos_WhenSync() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Helifleet_TransformList() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& m_FarthestHelifleet() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_IsPlayMoveAnim() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& mCachedUICameraObj() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& mCachedUIPerspectiveCameraObj() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& mCachedUIRootCamera() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& mCachedUIRootPerspectiveCamera() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& AircraftHeight() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& IsLanded() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& UICameraCullingMask() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& LastTickTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& hasReachSkydivingPos() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& IsRevivalAirplane() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = bool> T& m_IsUseReviveSound() {
		return *(T*)((uintptr_t)this + 0x186);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& AirplaneLeftPlayerNum() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& m_IsShowAllUIOnScreen() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_LastLogTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = bool> T& IsWaitingCloseAim() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_InitCameraTime() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& m_InitCameraIndex() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& m_IsWaitingRevivalAircraft() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& m_IsWaitingRevivalAircraftAsset() {
		return *(T*)((uintptr_t)this + 0x1A5);
	}
	template <typename T = bool> T& m_LastLoadMainAircraft() {
		return *(T*)((uintptr_t)this + 0x1A6);
	}
	template <typename T = uintptr_t> T& MainAircraftEAssetID() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& SimpleAircraftEAssetID() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTrailRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAircrft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRevivalAirplane3PSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRevivalAirplane3PSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckServerInAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckViewPlayerCanStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAllPawnStartAircrft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewPlayerStartAircrft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedStartCamerAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCamerAniArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseStopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAircraftStartHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAircraftStartHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachAllTeamToAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachAllPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAircratfNeedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCameraObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryClearMainAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMainAircraftAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearHelifleetTransformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTmpValus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaitingRevivalAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndLoadRevivalAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRevivalAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRevivalAircraftReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAircraftTransAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDoSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkydivingProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParachuteMarkPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAircraftCameraRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryOpenHatchdoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckViewPawnInAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccidentExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLookAtRevivalAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLookAtAircraftOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLookAtAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFleetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllUIOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = Il2CppVector3> T get_AircraftPosition() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24B8E30))(this);
	}
	template <typename T = bool> T get_HatchdoorOpened() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C0BC8))(this);
	}
	template <typename T = float> T get_CamDist() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C0BD0))(this);
	}
	template <typename T = float> T get_SkydivingHeight() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C0BD8))(this);
	}
	template <typename T = bool> T get_HasReachSkyDivingPos() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C0DC8))(this);
	}
	template <typename T = void> T ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(BRAircraftManager*, Il2CppVector3))(Il2CppBase() + 0x24C0DD0))(this, shift);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C1020))(this);
	}
	template <typename T = void> T ClearTrailRenderers(uintptr_t transform) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C12F0))(this, transform);
	}
	template <typename T = void> T StartAircrft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C14D4))(this);
	}
	template <typename T = void> T PlayRevivalAirplane3PSound(bool isOB) {
		return ((T (*)(BRAircraftManager*, bool))(Il2CppBase() + 0x24C1D4C))(this, isOB);
	}
	template <typename T = void> T StopRevivalAirplane3PSound() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C26A0))(this);
	}
	template <typename T = bool> T CheckServerInAircraft(uintptr_t playerInfo) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C27D8))(this, playerInfo);
	}
	template <typename T = void> T CloseAimCallBack() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C29FC))(this);
	}
	template <typename T = bool> T CheckViewPlayerCanStart() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C2AA0))(this);
	}
	template <typename T = void> T NotifyAllPawnStartAircrft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C2DF8))(this);
	}
	template <typename T = void> T ViewPlayerStartAircrft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C3234))(this);
	}
	template <typename T = bool> T IsNeedStartCamerAni() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C3E4C))(this);
	}
	template <typename T = void> T InitCamerAniArgs() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C4D20))(this);
	}
	template <typename T = void> T CloseStopPanel() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C439C))(this);
	}
	template <typename T = void> T ShowAircraftStartHUD(uintptr_t brPawn) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C44D8))(this, brPawn);
	}
	template <typename T = void> T HideAircraftStartHUD() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C10E8))(this);
	}
	template <typename T = void> T AttachAllTeamToAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C5988))(this);
	}
	template <typename T = void> T DetachAllPawn() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C6444))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C6E1C))(this);
	}
	template <typename T = bool> T IsAircratfNeedEnd(float checkDis) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24C6EE4))(this, checkDis);
	}
	template <typename T = void> T EndAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C70E4))(this);
	}
	template <typename T = void> T ClearCameraObj() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C7444))(this);
	}
	template <typename T = void> T TryClearMainAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C75F8))(this);
	}
	template <typename T = void> T ClearMainAircraftAsset() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C7990))(this);
	}
	template <typename T = void> T ClearHelifleetTransformList() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C1A28))(this);
	}
	template <typename T = void> T ClearTmpValus() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C7764))(this);
	}
	template <typename T = void> T SetWaitingRevivalAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C7EA0))(this);
	}
	template <typename T = void> T CheckAndLoadRevivalAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C7F50))(this);
	}
	template <typename T = void> T LoadRevivalAircraft(bool isMainAsset) {
		return ((T (*)(BRAircraftManager*, bool))(Il2CppBase() + 0x24C7CD0))(this, isMainAsset);
	}
	template <typename T = void> T OnRevivalAircraftReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRAircraftManager*, int32_t, uintptr_t))(Il2CppBase() + 0x24C80E0))(this, assetId, arg);
	}
	template <typename T = void> T SetAircraftTransAsset(uintptr_t assetGO) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C8268))(this, assetGO);
	}
	template <typename T = bool> T CanDoSkydiving() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C8470))(this);
	}
	template <typename T = float> T GetSkydivingProgress() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C86CC))(this);
	}
	template <typename T = float> T GetParachuteMarkPosition() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C8828))(this);
	}
	template <typename T = void> T SyncAircraft(Il2CppVector3 position, Il2CppVector3 skydivingPos, Il2CppVector3 autoSkyDivingPos, Il2CppVector3 speedVect, bool active) {
		return ((T (*)(BRAircraftManager*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x24C8AB4))(this, position, skydivingPos, autoSkyDivingPos, speedVect, active);
	}
	template <typename T = void> T CalcCamera(uintptr_t outCamLoc, uintptr_t outCamRot) {
		return ((T (*)(BRAircraftManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24C943C))(this, outCamLoc, outCamRot);
	}
	template <typename T = Il2CppQuaternion> T CalcAircraftCameraRotation() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C9698))(this);
	}
	template <typename T = void> T AttachPawn(uintptr_t pawn) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C62E4))(this, pawn);
	}
	template <typename T = void> T DetachLocalPawn(uintptr_t pawn) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C68FC))(this, pawn);
	}
	template <typename T = void> T DetachPawn(uintptr_t pawn) {
		return ((T (*)(BRAircraftManager*, uintptr_t))(Il2CppBase() + 0x24C6BE0))(this, pawn);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24C9AE0))(this, dt);
	}
	template <typename T = void> T UpdateAircraft(float deltaTime) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24C9C38))(this, deltaTime);
	}
	template <typename T = void> T TryOpenHatchdoor() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CA194))(this);
	}
	template <typename T = void> T UpdateViewPlayer(float deltaTime) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24CA580))(this, deltaTime);
	}
	template <typename T = bool> T CheckViewPawnInAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CAB08))(this);
	}
	template <typename T = void> T OnAccidentExit() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CAE04))(this);
	}
	template <typename T = void> T UpdateCameraAni(float deltaTime) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24CAF80))(this, deltaTime);
	}
	template <typename T = void> T UpdateLookAtRevivalAirplane() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CA770))(this);
	}
	template <typename T = void> T StartLookAtAircraftOnly() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CB840))(this);
	}
	template <typename T = void> T StartLookAtAircraft() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C3FF8))(this);
	}
	template <typename T = void> T UpdateFleetTransform() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C1FCC))(this);
	}
	template <typename T = void> T ShowLOD() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C5700))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CB98C))(this);
	}
	template <typename T = void> T PreLoadRes() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24C8F7C))(this);
	}
	template <typename T = void> T ShowAllUIOnScreen(bool bShow) {
		return ((T (*)(BRAircraftManager*, bool))(Il2CppBase() + 0x24CBBC8))(this, bShow);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRAircraftManager*, uintptr_t, bool))(Il2CppBase() + 0x24CC374))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CC670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyWorldShift(Il2CppVector3 P0) {
		return ((T (*)(BRAircraftManager*, Il2CppVector3))(Il2CppBase() + 0x24CC72C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CC74C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CC754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRAircraftManager*, float))(Il2CppBase() + 0x24CC75C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRAircraftManager*))(Il2CppBase() + 0x24CC764))(this);
	}

};

}
