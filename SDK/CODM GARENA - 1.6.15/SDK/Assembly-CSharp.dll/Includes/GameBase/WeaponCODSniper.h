#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODSniper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODSniper"));
	}

	template <typename T = bool> T& m_EnableContinuousFire() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = float> T& m_ZoomingDoubleFOV() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = float> T& m_ZoomingDoubleMovementScale() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = float> T& m_CameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x5F8);
	}
	template <typename T = float> T& m_ZoomingDoubleCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x5FC);
	}
	template <typename T = float> T& m_IgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0x600);
	}
	template <typename T = bool> T& m_UseDefaultOptics() {
		return *(T*)((uintptr_t)this + 0x604);
	}
	template <typename T = bool> T& m_CheckBeginActiveStateAutoFire() {
		return *(T*)((uintptr_t)this + 0x605);
	}
	template <typename T = bool> T& m_IsHideWeaponAavtaForDefaultSight() {
		return *(T*)((uintptr_t)this + 0x606);
	}
	template <typename T = bool> T& m_IsSingleSniper() {
		return *(T*)((uintptr_t)this + 0x607);
	}
	template <typename T = uintptr_t> T& m_WeaponSniperAimingComponent() {
		return *(T*)((uintptr_t)this + 0x608);
	}
	template <typename T = Il2CppVector3> T& m_WeaponAimIdlePosOffset_NoDefaultOptics() {
		return *(T*)((uintptr_t)this + 0x60C);
	}
	template <typename T = bool> T& m_IsAimIdlePosOffsetLerp() {
		return *(T*)((uintptr_t)this + 0x618);
	}
	template <typename T = float> T& m_SlerpNeedTime() {
		return *(T*)((uintptr_t)this + 0x61C);
	}
	template <typename T = float> T& m_SlerpNeedTimeReciprocal() {
		return *(T*)((uintptr_t)this + 0x620);
	}
	template <typename T = float> T& m_CurSLerpNeedTime() {
		return *(T*)((uintptr_t)this + 0x624);
	}
	template <typename T = Il2CppVector3> T& m_PosOffsetLerpOrigin() {
		return *(T*)((uintptr_t)this + 0x628);
	}
	template <typename T = Il2CppVector3> T& m_PosOffsetLerpTarget() {
		return *(T*)((uintptr_t)this + 0x634);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostCloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAimWhenStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeZoomingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDOF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosOffsetLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDoPoseOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPosOffsetLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPosOffsetLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenExceptSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponCODSniper*, uintptr_t, bool))(Il2CppBase() + 0x1C5EE30))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5EF9C))(this);
	}
	template <typename T = bool> T get_EnableContinuousFire() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F058))(this);
	}
	template <typename T = bool> T get_PressToZoom() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F06C))(this);
	}
	template <typename T = void> T set_ZoomingDoubleFOV(float value) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C5F148))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleFOV() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F150))(this);
	}
	template <typename T = void> T set_ZoomingDoubleMovementScale(float value) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C5F16C))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleMovementScale() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F174))(this);
	}
	template <typename T = void> T set_CameraAddRotateRate(float value) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C5F17C))(this, value);
	}
	template <typename T = float> T get_CameraAddRotateRate() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F184))(this);
	}
	template <typename T = void> T set_ZoomingDoubleCameraAddRotateRate(float value) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C5F18C))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleCameraAddRotateRate() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F194))(this);
	}
	template <typename T = void> T set_IgnoreShotSpreadTime(float value) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C5F19C))(this, value);
	}
	template <typename T = float> T get_IgnoreShotSpreadTime() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F1A4))(this);
	}
	template <typename T = bool> T get_CheckBeginActiveStateAutoFire() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F1AC))(this);
	}
	template <typename T = bool> T get_IsSingleSniper() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F1B4))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F1BC))(this);
	}
	template <typename T = void> T LoadWeaponModel(Il2CppString* SocketName) {
		return ((T (*)(WeaponCODSniper*, Il2CppString*))(Il2CppBase() + 0x1C5F334))(this, SocketName);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5F610))(this);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(WeaponCODSniper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C5F72C))(this, newState, oldState);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C60008))(this);
	}
	template <typename T = void> T PostCloseAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C600C8))(this);
	}
	template <typename T = bool> T StopAimWhenStopFire() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6052C))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponCODSniper*, bool))(Il2CppBase() + 0x1C605CC))(this, isHidden);
	}
	template <typename T = void> T LoadProperties() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C606A8))(this);
	}
	template <typename T = float> T GetWeaponMoveScale() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6074C))(this);
	}
	template <typename T = float> T GetCameraRotateScale() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C60844))(this);
	}
	template <typename T = void> T ChangeZoomingFOV() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6096C))(this);
	}
	template <typename T = bool> T EnableDOF() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C60B1C))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponCODSniper*, uintptr_t))(Il2CppBase() + 0x1C60BD0))(this, param);
	}
	template <typename T = void> T ResetPosOffsetLerp() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5FB84))(this);
	}
	template <typename T = bool> T ShouldDoPoseOffset() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C5FCFC))(this);
	}
	template <typename T = void> T StartPosOffsetLerp(bool isToAim, float lerpTime) {
		return ((T (*)(WeaponCODSniper*, bool, float))(Il2CppBase() + 0x1C5FE00))(this, isToAim, lerpTime);
	}
	template <typename T = void> T TickPosOffsetLerp(float deltaTime) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C60CF4))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C60F30))(this, deltaTime);
	}
	template <typename T = void> T SetHiddenExceptSight() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C60FEC))(this);
	}
	template <typename T = void> T OnWeaponPartActivate(uintptr_t weaponPart) {
		return ((T (*)(WeaponCODSniper*, uintptr_t))(Il2CppBase() + 0x1C61130))(this, weaponPart);
	}
	template <typename T = bool> T IsNeedShowCancelAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61258))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponCODSniper*, uintptr_t, bool))(Il2CppBase() + 0x1C61324))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadWeaponModel(Il2CppString* P0) {
		return ((T (*)(WeaponCODSniper*, Il2CppString*))(Il2CppBase() + 0x1C6132C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreBeginState(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(WeaponCODSniper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C61334))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostCloseAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6133C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_StopAimWhenStopFire() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponCODSniper*, bool))(Il2CppBase() + 0x1C61344))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61348))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetWeaponMoveScale() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6134C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCameraRotateScale() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeZoomingFOV() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61354))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableDOF() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponCODSniper*, uintptr_t))(Il2CppBase() + 0x1C6135C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponCODSniper*, float))(Il2CppBase() + 0x1C61360))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHiddenExceptSight() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C61364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponPartActivate(uintptr_t P0) {
		return ((T (*)(WeaponCODSniper*, uintptr_t))(Il2CppBase() + 0x1C61368))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedShowCancelAim() {
		return ((T (*)(WeaponCODSniper*))(Il2CppBase() + 0x1C6136C))(this);
	}

};

}
