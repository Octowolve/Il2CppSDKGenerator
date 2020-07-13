#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSniper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSniper"));
	}

	template <typename T = float> T& m_ZoomInFOVTime() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = float> T& m_ZoomOutFOVTime() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = float> T& m_ZoomingFOV() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = float> T& m_ZoomingDoubleFOV() {
		return *(T*)((uintptr_t)this + 0x5F8);
	}
	template <typename T = float> T& m_ZoomingMovementScale() {
		return *(T*)((uintptr_t)this + 0x5FC);
	}
	template <typename T = float> T& m_staticZoomingMovementScale() {
		return *(T*)((uintptr_t)this + 0x600);
	}
	template <typename T = float> T& m_ZoomingDoubleMovementScale() {
		return *(T*)((uintptr_t)this + 0x604);
	}
	template <typename T = float> T& m_CameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x608);
	}
	template <typename T = float> T& m_staticCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x60C);
	}
	template <typename T = float> T& m_ZoomingDoubleCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x610);
	}
	template <typename T = float> T& m_staticZoomingDoubleCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x614);
	}
	template <typename T = float> T& m_IgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0x618);
	}
	template <typename T = float> T& m_staticIgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0x61C);
	}
	template <typename T = float> T& m_OverrideAimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0x620);
	}
	template <typename T = bool> T& m_EnableContinuousFire() {
		return *(T*)((uintptr_t)this + 0x624);
	}
	template <typename T = float> T& m_ZoomingOutDisperse() {
		return *(T*)((uintptr_t)this + 0x628);
	}
	template <typename T = float> T& m_PVEZoomingOutDisperse() {
		return *(T*)((uintptr_t)this + 0x62C);
	}
	template <typename T = float> T& m_RecordDisperseBase() {
		return *(T*)((uintptr_t)this + 0x630);
	}
	template <typename T = float> T& m_RecordDisperseModifierStanding() {
		return *(T*)((uintptr_t)this + 0x634);
	}
	template <typename T = float> T& m_RecordDisperseModifierJumping() {
		return *(T*)((uintptr_t)this + 0x638);
	}
	template <typename T = float> T& m_RecordDisperseModifierWalking() {
		return *(T*)((uintptr_t)this + 0x63C);
	}
	template <typename T = float> T& m_DestinateFOV() {
		return *(T*)((uintptr_t)this + 0x640);
	}
	template <typename T = float> T& m_BaseFOV() {
		return *(T*)((uintptr_t)this + 0x644);
	}
	template <typename T = uintptr_t> T& m_TmpWorldCamera() {
		return *(T*)((uintptr_t)this + 0x648);
	}
	template <typename T = bool> T& m_IsZooming() {
		return *(T*)((uintptr_t)this + 0x64C);
	}
	template <typename T = bool> T& AutoZooming() {
		return *(T*)((uintptr_t)this + 0x64D);
	}
	template <typename T = float> T& m_CurFovTakeTime() {
		return *(T*)((uintptr_t)this + 0x650);
	}
	template <typename T = float> T& m_ZoomFovTime() {
		return *(T*)((uintptr_t)this + 0x654);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeZoomingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAssistAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponSniper*, uintptr_t, bool))(Il2CppBase() + 0x3A850D8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85260))(this);
	}
	template <typename T = void> T set_ZoomInFOVTime(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A8531C))(this, value);
	}
	template <typename T = float> T get_ZoomInFOVTime() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85324))(this);
	}
	template <typename T = void> T set_ZoomOutFOVTime(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A8532C))(this, value);
	}
	template <typename T = float> T get_ZoomOutFOVTime() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85334))(this);
	}
	template <typename T = void> T set_ZoomingFOV(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A8533C))(this, value);
	}
	template <typename T = float> T get_ZoomingFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85344))(this);
	}
	template <typename T = void> T set_ZoomingDoubleFOV(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A8534C))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85354))(this);
	}
	template <typename T = void> T set_ZoomingMovementScale(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A8537C))(this, value);
	}
	template <typename T = float> T get_ZoomingMovementScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A8538C))(this);
	}
	template <typename T = void> T set_ZoomingDoubleMovementScale(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A85394))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleMovementScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A8539C))(this);
	}
	template <typename T = void> T set_CameraAddRotateRate(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A853A4))(this, value);
	}
	template <typename T = float> T get_CameraAddRotateRate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A853B4))(this);
	}
	template <typename T = void> T set_ZoomingDoubleCameraAddRotateRate(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A853BC))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleCameraAddRotateRate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A853CC))(this);
	}
	template <typename T = void> T set_IgnoreShotSpreadTime(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A853D4))(this, value);
	}
	template <typename T = float> T get_IgnoreShotSpreadTime() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A853E4))(this);
	}
	template <typename T = bool> T get_EnableContinuousFire() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A853EC))(this);
	}
	template <typename T = float> T get_DestinateFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A853F4))(this);
	}
	template <typename T = void> T set_DestinateFOV(float value) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A853FC))(this, value);
	}
	template <typename T = bool> T get_IsAiming() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85404))(this);
	}
	template <typename T = bool> T get_IsZooming() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A8540C))(this);
	}
	template <typename T = void> T set_IsZooming(bool value) {
		return ((T (*)(WeaponSniper*, bool))(Il2CppBase() + 0x3A85414))(this, value);
	}
	template <typename T = void> T LoadProperties() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A8541C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A854C4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A8567C))(this);
	}
	template <typename T = void> T DestroyWeapon() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85818))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A858C0))(this);
	}
	template <typename T = float> T GetWeaponMoveScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85970))(this);
	}
	template <typename T = float> T GetCameraRotateScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85A5C))(this);
	}
	template <typename T = void> T ForceResetFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A85B44))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A85D00))(this, DeltaTime);
	}
	template <typename T = void> T ChangeZoomingFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A861F0))(this);
	}
	template <typename T = bool> T FindAssistAimTarget(uintptr_t* targetPos, uintptr_t* aimTarget, bool useLineTarget) {
		return ((T (*)(WeaponSniper*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3A8631C))(this, targetPos, aimTarget, useLineTarget);
	}
	template <typename T = bool> T CanChangeAimingZoomingFov() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86434))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponSniper*, uintptr_t, bool))(Il2CppBase() + 0x3A865F8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyWeapon() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86620))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetWeaponMoveScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86628))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCameraRotateScale() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSniper*, float))(Il2CppBase() + 0x3A86638))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeZoomingFOV() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86640))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_FindAssistAimTarget(uintptr_t* P0, uintptr_t* P1, bool P2) {
		return ((T (*)(WeaponSniper*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3A86648))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_CanChangeAimingZoomingFov() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86668))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponSniper*))(Il2CppBase() + 0x3A86670))(this);
	}

};

}
