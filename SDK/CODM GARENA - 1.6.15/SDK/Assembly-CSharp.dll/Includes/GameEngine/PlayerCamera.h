#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerCamera"));
	}

	template <typename T = uintptr_t> T& m_CameraType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& SafeOffGroundHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PlayerController() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& m_PlayerCameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_FirstPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_WorldCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& m_PostprocessCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& m_UICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_FirstPersonCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& m_FirstPersonCameraDefaultFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& EnableDebugTickCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& m_FPCameraFovConfig() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& kDefaultWorldCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_WorldCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> T& m_StartFOV() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_TargetFOV() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_FovChangeTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_CurFovChangeTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_LandCameraLerpTo1P() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LandStartTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LandCameraLerpTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_LandCameraInitialPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& m_LandCameraInitialRot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_CurCamera() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& EffectMgr() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& mPostEffectChain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& mGlowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> T& IgnoreCameraEffect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> static T& DefaultFarClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CameraControlType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_CameraControlTarget() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_CameraBlendInDuration() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_CameraBlendInStartTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CameraCtrlParam() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_PlayerMoveOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_PlayerMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_StopStrafe() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_StopStrafeTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_TiltAngle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_DragType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_FocusOnHandler() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& m_StartFocusPos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& m_FocusTarget() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_DurationDragBack() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_CloseDis() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_EndDoFocus() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_LastFocusOnTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_RotateDragToTarget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_FocusDuration() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> static T& ForceShadowCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> T& currentCameraFOVCoAlpha() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& lateUpdateEvent() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& lastCamera() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& currCamera() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> static T& m_Aim3PFadeOutRatioThreashold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> static T& ForceAim3PDirectlyFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> T& m_CurCameraControl() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_CurState() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& m_LastStateIdx() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& m_ToStateIdx() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FCheckFuctions() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FCameraControllerFuctions() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_DoSwitchFPS() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& mCameraLerpTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& mCameraLerpTimer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& mCameraDeadTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& mLastCameraPos() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppQuaternion> T& mLastCameraRot() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_LastCameraControl() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_ToCameraControl() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& FCameraLerp() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> static T& m_SmoothLerpTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_LookatPoint() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> static T& NUM_CAMERA_SHAKERS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCameraShakers() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> static T& m_PendingCameraAnimionClipData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = float> static T& m_PendingPlayCameraAnimSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = bool> static T& m_PendingPlayCameraAnimIsLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& m_DefaultMoveCameraAnimAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = float> T& FreeViewCameraMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& FreeViewCameraMoveSpeedIncreased() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& FreeViewCameraMoveSpeedMax() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& FreeViewCameraMoveSpeedIncreaseToMaxSeconds() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& FreeViewCameraController() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& FreeViewCameraRotX() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& FreeViewCameraRotY() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> static T& EnableOcclustionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uint32_t> static T& FreeViewLimitHeightNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& FreeViewLimitHeightBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& FreeViewLimitHeightCustom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = float> T& FreeViewCameraIncreaseStartTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> static T& SyncFreeViewSpecatingPositionToServerInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& SyncFreeViewSpecatingPostionToServerLastTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache20() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache21() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache22() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFPCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickFPCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraIgnoreEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWorldCameraShadowOption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySceneSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterPlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFocusOnGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLateUpdateCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLateUpdateCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRotateFocusOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFocusOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFocusCameraOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllCameraFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFreeControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucFreeControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIndividuationControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucIndividuationControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAircraftCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucAircraftCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucVehicleCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectatingCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucSpectatingCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeathCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucDeathCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFireProjectile1PCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucFireProjectile1PCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkydivingCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucSkydivingCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraLerpControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucCameraLerpControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCameraLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DoCameraLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverLerpCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PuaseTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucClimbCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTPSCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucTPSCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFPSCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucFPSCameraControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCameraPositionTo1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToFPSView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatineeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseMatineeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllPlayerCameraEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAllPlayerCameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableAllPlayerCameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableFirstPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothChangeFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SmoothChangeFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToFPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLandCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ApplyLandCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleGlowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFarClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPostEffectProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPostEffectConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPostEffectConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrayScaleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileExplosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartInterference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopInterference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraEffectActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCameraShakers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraShaker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCameraShakerInStoping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCameraShakerRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllCameraShakes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWorldCameraInShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldCameraStartShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldCameraStopShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSimpleShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StartSimpleShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSimpleShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSimpleShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopWeaponCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPendingCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBackShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMoveCameraAnimAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMoveCameraAnimatioin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayMoveCameraAnimatioin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCameraAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PlayMoveCameraAnimatioin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMoveCameraAnimatioin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpectatingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstPersonSpectatingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateThirdPersonSpectatingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFreeViewCameraPositionAndRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFreeViewSpectatingCameraRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFreeViewSpectatingLimitHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterFreeViewSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelFreeViewSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFreeViewSpectatingCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateFreeViewSpectatingCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFreeViewSpectatingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}

	template <typename T = void> T InitFPCameraFov() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9BFD4))(this);
	}
	template <typename T = void> T TickFPCameraFov() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9C478))(this);
	}
	template <typename T = float> T get_TargetFOV() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9C880))(this);
	}
	template <typename T = uintptr_t> T get_CurCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9C888))(this);
	}
	template <typename T = float> static T get_WorldCameraFOV() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9C890))(0);
	}
	template <typename T = void> static T set_WorldCameraFOV(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1D9CA04))(0, value);
	}
	template <typename T = float> static T get_FirstPersonCameraFOV() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9CAC4))(0);
	}
	template <typename T = float> static T get_FirstPersonCameraDefaultFOV() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9CB74))(0);
	}
	template <typename T = uintptr_t> static T get_GlowEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9CB80))(0);
	}
	template <typename T = bool> T get_IgnoreCameraEffect() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9CC30))(this);
	}
	template <typename T = void> T set_IgnoreCameraEffect(bool value) {
		return ((T (*)(PlayerCamera*, bool))(Il2CppBase() + 0x1D9CC38))(this, value);
	}
	template <typename T = uintptr_t> T get_CameraDragType() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9CC40))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_PlayerCameras() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9CC48))(0);
	}
	template <typename T = void> static T set_PlayerCameras(Il2CppList<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1D9CCF8))(0, value);
	}
	template <typename T = uintptr_t> static T get_FirstPersonCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9CDAC))(0);
	}
	template <typename T = uintptr_t> static T get_WorldCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9D0B8))(0);
	}
	template <typename T = uintptr_t> static T get_PostprocessCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9D258))(0);
	}
	template <typename T = uintptr_t> static T GetPlayerCamera(uintptr_t camType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D81F38))(0, camType);
	}
	template <typename T = uintptr_t> static T GetCamera(uintptr_t camType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D9CF4C))(0, camType);
	}
	template <typename T = void> static T SetCameraIgnoreEffect(bool ignore) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1D9D3F8))(0, ignore);
	}
	template <typename T = void> static T SetWorldCameraShadowOption(uintptr_t worldCamera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D9D5F4))(0, worldCamera);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9D804))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9E894))(this);
	}
	template <typename T = void> T ApplySceneSetting() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9EDC8))(this);
	}
	template <typename T = void> T InitRotation(Il2CppQuaternion rot) {
		return ((T (*)(PlayerCamera*, Il2CppQuaternion))(Il2CppBase() + 0x1D9ECA8))(this, rot);
	}
	template <typename T = void> T InitPosition(Il2CppVector3 pos) {
		return ((T (*)(PlayerCamera*, Il2CppVector3))(Il2CppBase() + 0x1D9EB10))(this, pos);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9F4BC))(this);
	}
	template <typename T = void> static T RegisterPlayerCamera(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D9DC94))(0, camera);
	}
	template <typename T = void> static T UnregisterPlayerCamera(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D9F678))(0, camera);
	}
	template <typename T = bool> T CameraFocusOnGameObject() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9F838))(this);
	}
	template <typename T = void> T RecoveCameraFOV() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9F910))(this);
	}
	template <typename T = void> T SetCameraFOV(float fov) {
		return ((T (*)(PlayerCamera*, float))(Il2CppBase() + 0x1D9C714))(this, fov);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9FAEC))(this);
	}
	template <typename T = void> T UpdateCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA00C8))(this);
	}
	template <typename T = void> T AddLateUpdateCallback(uintptr_t call) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DA1740))(this, call);
	}
	template <typename T = void> T RemoveLateUpdateCallback(uintptr_t call) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DA1838))(this, call);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA1930))(this);
	}
	template <typename T = void> T DoRotateFocusOn(uintptr_t targetTranf, float duration, uintptr_t focusFinishedHandler) {
		return ((T (*)(PlayerCamera*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1DA1B58))(this, targetTranf, duration, focusFinishedHandler);
	}
	template <typename T = void> T DoFocusOn(Il2CppVector3 focusPos, uintptr_t focusTarget, float duration, float closeDis, float moveSpeed, bool useDOF, uintptr_t dragHandler, uintptr_t focusFinishedHandler) {
		return ((T (*)(PlayerCamera*, Il2CppVector3, uintptr_t, float, float, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA1C7C))(this, focusPos, focusTarget, duration, closeDis, moveSpeed, useDOF, dragHandler, focusFinishedHandler);
	}
	template <typename T = bool> T DoFocusCameraOn() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA06C0))(this);
	}
	template <typename T = void> T UpdateCameraControl() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA0F7C))(this);
	}
	template <typename T = void> T UpdateFollowTarget() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA229C))(this);
	}
	template <typename T = void> static T SetAllCameraFollowTarget(uintptr_t target, float blendInTime, uintptr_t param) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1DA2B88))(0, target, blendInTime, param);
	}
	template <typename T = void> T SetCameraFollowTarget(uintptr_t target, float blendInTime, uintptr_t param) {
		return ((T (*)(PlayerCamera*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1DA2DAC))(this, target, blendInTime, param);
	}
	template <typename T = bool> T get_IsCameraLerping() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA2F2C))(this);
	}
	template <typename T = int32_t> T get_LastStateIdx() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA2F3C))(this);
	}
	template <typename T = void> T CheckCameraState(uintptr_t inPlayerController) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DA2F44))(this, inPlayerController);
	}
	template <typename T = uintptr_t> static T CheckFreeControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3440))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucFreeControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3530))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckMissileControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA362C))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucMissileControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA37D4))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckIndividuationControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3AE8))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucIndividuationControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3CB8))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckAircraftCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3E20))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucAircraftCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3FB8))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckVehicleCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA40F8))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucVehicleCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA4424))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckSpectatingCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA47B8))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucSpectatingCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA491C))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckDeathCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA4F88))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucDeathCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA51DC))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckFireProjectile1PCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA54B0))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucFireProjectile1PCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA55AC))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckSkydivingCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5B14))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucSkydivingCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5C18))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckCameraLerpControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5D58))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucCameraLerpControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5E30))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = bool> T get_IsCameraLerp() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA600C))(this);
	}
	template <typename T = void> T DoCameraLerp(uintptr_t toState, float inLerpTime, uintptr_t Callback, float inDeadTime) {
		return ((T (*)(PlayerCamera*, uintptr_t, float, uintptr_t, float))(Il2CppBase() + 0x1DA61B0))(this, toState, inLerpTime, Callback, inDeadTime);
	}
	template <typename T = void> T DoCameraLerp_1(float inLerpTime, uintptr_t Callback, float inDeadTime) {
		return ((T (*)(PlayerCamera*, float, uintptr_t, float))(Il2CppBase() + 0x1DA317C))(this, inLerpTime, Callback, inDeadTime);
	}
	template <typename T = void> T OverLerpCallback() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA62E4))(this);
	}
	template <typename T = void> T ForceOver() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA66F4))(this);
	}
	template <typename T = void> static T NullLerp(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA6B48))(0, refCameraPos, refCameraRot, refLookatPoint);
	}
	template <typename T = void> T PuaseTick(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint) {
		return ((T (*)(PlayerCamera*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA6C2C))(this, refCameraPos, refCameraRot, refLookatPoint);
	}
	template <typename T = void> T UpdateCameraLerp(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint) {
		return ((T (*)(PlayerCamera*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA6DA0))(this, refCameraPos, refCameraRot, refLookatPoint);
	}
	template <typename T = uintptr_t> static T CheckClimbCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA715C))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucClimbCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA75F0))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckTPSCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA7B68))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucTPSCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA7DF4))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = uintptr_t> static T CheckFPSCameraControl(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA82F4))(0, inCamera, inPlayerController);
	}
	template <typename T = void> static T FucFPSCameraControl(uintptr_t refCameraPos, uintptr_t refCameraRot, uintptr_t refLookatPoint, uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t inCameraType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA8468))(0, refCameraPos, refCameraRot, refLookatPoint, inCamera, inPlayerController, inCameraType);
	}
	template <typename T = void> T UpdatePlayerControl() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA1FB8))(this);
	}
	template <typename T = void> T SmoothCameraPositionTo1P() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA89F0))(this);
	}
	template <typename T = void> T ToFPSView() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA8ED4))(this);
	}
	template <typename T = Il2CppVector3> T get_LookatPoint() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA902C))(this);
	}
	template <typename T = void> static T StartMatineeCamera(uintptr_t matCamera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DA9040))(0, matCamera);
	}
	template <typename T = void> static T CloseMatineeCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DA9524))(0);
	}
	template <typename T = void> static T StopAllPlayerCameraEffects() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DA9958))(0);
	}
	template <typename T = void> static T DisableAllPlayerCameras(uintptr_t exceptType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DA9274))(0, exceptType);
	}
	template <typename T = void> static T EnableAllPlayerCameras() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DA96FC))(0);
	}
	template <typename T = void> static T EnableFirstPersonCamera(bool enable, bool aiming) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x1D9DF54))(0, enable, aiming);
	}
	template <typename T = void> T SmoothChangeFov(float targetFov, float time) {
		return ((T (*)(PlayerCamera*, float, float))(Il2CppBase() + 0x1DA9E60))(this, targetFov, time);
	}
	template <typename T = void> static T SmoothChangeFov_1(float targetFov, float time, uintptr_t cType) {
		return ((T (*)(void *, float, float, uintptr_t))(Il2CppBase() + 0x1DA9F88))(0, targetFov, time, cType);
	}
	template <typename T = void> T ToFPSFireMode() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAA248))(this);
	}
	template <typename T = void> T ApplyLandCameraEffect(bool lerpTo1P, Il2CppVector3 cameraPosition, Il2CppQuaternion cameraRotation, float lerpTime) {
		return ((T (*)(PlayerCamera*, bool, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x1DAA3A0))(this, lerpTo1P, cameraPosition, cameraRotation, lerpTime);
	}
	template <typename T = void> static T ApplyLandCameraEffect_1(bool lerpTo1P, Il2CppVector3 cameraPosition, Il2CppQuaternion cameraRotation, float lerpTime, uintptr_t cType) {
		return ((T (*)(void *, bool, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x1DAA5C0))(0, lerpTo1P, cameraPosition, cameraRotation, lerpTime, cType);
	}
	template <typename T = void> static T ToggleGlowEffect(bool toggleOn) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1DAA8F8))(0, toggleOn);
	}
	template <typename T = void> static T ChangeFarClipPlane(float OverrideFarClipPlane) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1D9E69C))(0, OverrideFarClipPlane);
	}
	template <typename T = void> static T ApplyPostEffectProfile(uintptr_t profile) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DAABC0))(0, profile);
	}
	template <typename T = void> T ApplyPostEffectConfig(uintptr_t config) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DAADD8))(this, config);
	}
	template <typename T = void> T ClearPostEffectConfig() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAAFA8))(this);
	}
	template <typename T = void> T UpdateGrayScaleEffect(bool enable, float lerpRate) {
		return ((T (*)(PlayerCamera*, bool, float))(Il2CppBase() + 0x1DAB170))(this, enable, lerpRate);
	}
	template <typename T = void> T OnStartMissileControl() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAB388))(this);
	}
	template <typename T = void> T OnEndMissileControl() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAB5AC))(this);
	}
	template <typename T = void> T OnMissileExplosed() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAB914))(this);
	}
	template <typename T = void> T StartInterference() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DABB0C))(this);
	}
	template <typename T = void> T StopInterference() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DABCD4))(this);
	}
	template <typename T = void> T ToggleBloom() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DABE9C))(this);
	}
	template <typename T = void> T SetCameraEffectActivity(uintptr_t type, bool bPlay) {
		return ((T (*)(PlayerCamera*, uintptr_t, bool))(Il2CppBase() + 0x1DAC074))(this, type, bPlay);
	}
	template <typename T = void> T StopAllEffects() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA9C2C))(this);
	}
	template <typename T = void> T InitCameraShakers() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1D9EF9C))(this);
	}
	template <typename T = uintptr_t> T GetCameraShaker(uintptr_t type) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DAC3DC))(this, type);
	}
	template <typename T = void> T UpdateCameraShake() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA1230))(this);
	}
	template <typename T = bool> T IsInShake(uintptr_t type) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DAC4F0))(this, type);
	}
	template <typename T = void> T StartShake(uintptr_t type, float duration, float speed) {
		return ((T (*)(PlayerCamera*, uintptr_t, float, float))(Il2CppBase() + 0x1DAC5EC))(this, type, duration, speed);
	}
	template <typename T = bool> T IsCameraShakerInStoping(uintptr_t type) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DAC728))(this, type);
	}
	template <typename T = bool> T IsCameraShakerRunning(uintptr_t type) {
		return ((T (*)(PlayerCamera*, uintptr_t))(Il2CppBase() + 0x1DAC844))(this, type);
	}
	template <typename T = void> T StopShake(uintptr_t type, bool soft, float softTime) {
		return ((T (*)(PlayerCamera*, uintptr_t, bool, float))(Il2CppBase() + 0x1DAB7C8))(this, type, soft, softTime);
	}
	template <typename T = void> T StopAllShake() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAC95C))(this);
	}
	template <typename T = void> static T StopAllCameraShakes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DACAB0))(0);
	}
	template <typename T = bool> static T IsWorldCameraInShake(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DACD00))(0, type);
	}
	template <typename T = void> static T WorldCameraStartShake(uintptr_t type, float duration, float speed) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x1DACE74))(0, type, duration, speed);
	}
	template <typename T = void> static T WorldCameraStopShake(uintptr_t type, bool soft, uintptr_t camType) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1DAD000))(0, type, soft, camType);
	}
	template <typename T = void> static T StartSimpleShake(uintptr_t param) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DAD190))(0, param);
	}
	template <typename T = void> static T StartSimpleShake_1(float intensity, float duration, uintptr_t cameraType) {
		return ((T (*)(void *, float, float, uintptr_t))(Il2CppBase() + 0x1DAD548))(0, intensity, duration, cameraType);
	}
	template <typename T = void> static T StopSimpleShake(uintptr_t cameraType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DAD950))(0, cameraType);
	}
	template <typename T = void> T DoSimpleShake(float intensity, float duration) {
		return ((T (*)(PlayerCamera*, float, float))(Il2CppBase() + 0x1DAD7B0))(this, intensity, duration);
	}
	template <typename T = void> static T PlayWeaponCameraAnimation(uintptr_t clipData, float blendTime, float speed, bool isLoop, bool isPenging, uintptr_t camType, bool isNeedStartTransition, uintptr_t inForceShakerType, uintptr_t inAnimType) {
		return ((T (*)(void *, uintptr_t, float, float, bool, bool, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DADBA0))(0, clipData, blendTime, speed, isLoop, isPenging, camType, isNeedStartTransition, inForceShakerType, inAnimType);
	}
	template <typename T = void> static T StopWeaponCameraAnimation(bool soft, uintptr_t camType) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x1DADF70))(0, soft, camType);
	}
	template <typename T = void> static T PlayPendingCameraAnim() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAE080))(0);
	}
	template <typename T = void> static T PlayHitBackShake(float hitBackAngle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1DAE218))(0, hitBackAngle);
	}
	template <typename T = void> static T InitMoveCameraAnimAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAC1E4))(0);
	}
	template <typename T = void> static T PlayMoveCameraAnimatioin(uintptr_t animType, float time, uintptr_t camType) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1DAE4F4))(0, animType, time, camType);
	}
	template <typename T = void> static T PlayMoveCameraAnimatioin_1(uintptr_t animType, float speed, bool isLoop, uintptr_t camType) {
		return ((T (*)(void *, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x1DAE958))(0, animType, speed, isLoop, camType);
	}
	template <typename T = void> static T ChangeCameraAnimationSpeed(uintptr_t animType, float speed, uintptr_t camType) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1DAEBB4))(0, animType, speed, camType);
	}
	template <typename T = void> static T PlayMoveCameraAnimatioin_2(uintptr_t clipData, float blendTime, float speed, bool isLoop, uintptr_t camType, uintptr_t inForceShakerType, uintptr_t inAnimType) {
		return ((T (*)(void *, uintptr_t, float, float, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAE758))(0, clipData, blendTime, speed, isLoop, camType, inForceShakerType, inAnimType);
	}
	template <typename T = void> static T StopMoveCameraAnimatioin(bool soft, uintptr_t camType, float softTime) {
		return ((T (*)(void *, bool, uintptr_t, float))(Il2CppBase() + 0x1DAEE00))(0, soft, camType, softTime);
	}
	template <typename T = void> T UpdateSpectatingCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DA4AAC))(this);
	}
	template <typename T = void> T UpdateFirstPersonSpectatingCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAF4C8))(this);
	}
	template <typename T = void> T UpdateThirdPersonSpectatingCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAF098))(this);
	}
	template <typename T = void> T SetFreeViewCameraPositionAndRotation(Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(PlayerCamera*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x1DAFF40))(this, pos, rot);
	}
	template <typename T = void> T UpdateFreeViewSpectatingCameraRotation() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DB00C8))(this);
	}
	template <typename T = uint32_t> static T get_FreeViewLimitHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DB0468))(0);
	}
	template <typename T = void> static T CheckFreeViewSpectatingLimitHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DB05B0))(0);
	}
	template <typename T = void> static T EnterFreeViewSpectating() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DB07E0))(0);
	}
	template <typename T = void> static T LevelFreeViewSpectating() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DB0DE4))(0);
	}
	template <typename T = void> T UpdateFreeViewSpectatingCameraPosition() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DB1188))(this);
	}
	template <typename T = void> T ForceUpdateFreeViewSpectatingCameraPosition(Il2CppVector3 pos) {
		return ((T (*)(PlayerCamera*, Il2CppVector3))(Il2CppBase() + 0x1DB1888))(this, pos);
	}
	template <typename T = void> T UpdateFreeViewSpectatingCamera() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DAEFBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DB1B4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DB1B54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PlayerCamera*))(Il2CppBase() + 0x1DB1B5C))(this);
	}

};

}
