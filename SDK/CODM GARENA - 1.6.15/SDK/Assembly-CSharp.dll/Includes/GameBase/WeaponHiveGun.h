#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponHiveGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponHiveGun"));
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
	template <typename T = uintptr_t> T& m_WeaponSniperAimingComponent() {
		return *(T*)((uintptr_t)this + 0x608);
	}
	template <typename T = Il2CppVector3> T& m_WeaponAimIdlePosOffset_NoDefaultOptics() {
		return *(T*)((uintptr_t)this + 0x60C);
	}
	template <typename T = Il2CppVector3> T& m_WeaponAimIdlePosOffset_NoDefaultOpticsStart() {
		return *(T*)((uintptr_t)this + 0x618);
	}
	template <typename T = bool> T& m_IsAimIdlePosOffsetLerp() {
		return *(T*)((uintptr_t)this + 0x624);
	}
	template <typename T = float> T& m_SlerpNeedTime() {
		return *(T*)((uintptr_t)this + 0x628);
	}
	template <typename T = float> T& m_CurSLerpNeedTime() {
		return *(T*)((uintptr_t)this + 0x62C);
	}
	template <typename T = uintptr_t> T& m_WeaponHorizontalShift() {
		return *(T*)((uintptr_t)this + 0x630);
	}
	template <typename T = float> T& m_fHorizontalShiftOriMaxAngle() {
		return *(T*)((uintptr_t)this + 0x634);
	}
	template <typename T = float> T& m_fHorizontalShiftLimitMaxAngle() {
		return *(T*)((uintptr_t)this + 0x638);
	}
	template <typename T = float> T& m_fHorizontalShiftMaxValue() {
		return *(T*)((uintptr_t)this + 0x63C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostCloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAimWhenStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeZoomingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDOF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenExceptSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponHiveGun*, uintptr_t, bool))(Il2CppBase() + 0x3A52D4C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A52EB4))(this);
	}
	template <typename T = bool> T get_EnableContinuousFire() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A52F70))(this);
	}
	template <typename T = bool> T get_PressToZoom() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A52F88))(this);
	}
	template <typename T = void> T set_ZoomingDoubleFOV(float value) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A53068))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleFOV() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A53070))(this);
	}
	template <typename T = void> T set_ZoomingDoubleMovementScale(float value) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A53090))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleMovementScale() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A53098))(this);
	}
	template <typename T = void> T set_CameraAddRotateRate(float value) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A530A0))(this, value);
	}
	template <typename T = float> T get_CameraAddRotateRate() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A530A8))(this);
	}
	template <typename T = void> T set_ZoomingDoubleCameraAddRotateRate(float value) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A530B0))(this, value);
	}
	template <typename T = float> T get_ZoomingDoubleCameraAddRotateRate() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A530B8))(this);
	}
	template <typename T = void> T set_IgnoreShotSpreadTime(float value) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A530C0))(this, value);
	}
	template <typename T = float> T get_IgnoreShotSpreadTime() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A530C8))(this);
	}
	template <typename T = bool> T get_CheckBeginActiveStateAutoFire() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A530D0))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A530D8))(this);
	}
	template <typename T = void> T LoadWeaponModel(Il2CppString* SocketName) {
		return ((T (*)(WeaponHiveGun*, Il2CppString*))(Il2CppBase() + 0x3A53254))(this, SocketName);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A537A8))(this);
	}
	template <typename T = uintptr_t> T GetCrossHairType() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A538C8))(this);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(WeaponHiveGun*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A53968))(this, newState, oldState);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A53DE0))(this);
	}
	template <typename T = void> T PostCloseAim() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A53EA8))(this);
	}
	template <typename T = bool> T StopAimWhenStopFire() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A542E4))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponHiveGun*, bool))(Il2CppBase() + 0x3A54384))(this, isHidden);
	}
	template <typename T = void> T LoadProperties() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A54464))(this);
	}
	template <typename T = float> T GetWeaponMoveScale() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A5450C))(this);
	}
	template <typename T = float> T GetCameraRotateScale() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A5460C))(this);
	}
	template <typename T = void> T ChangeZoomingFOV() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A54734))(this);
	}
	template <typename T = bool> T EnableDOF() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A54928))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponHiveGun*, uintptr_t))(Il2CppBase() + 0x3A549E0))(this, param);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A54AF8))(this, DeltaTime);
	}
	template <typename T = void> T SetHiddenExceptSight() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A55008))(this);
	}
	template <typename T = void> T OnWeaponPartActivate(uintptr_t weaponPart) {
		return ((T (*)(WeaponHiveGun*, uintptr_t))(Il2CppBase() + 0x3A55150))(this, weaponPart);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponHiveGun*, uintptr_t, bool))(Il2CppBase() + 0x3A5527C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A55284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadWeaponModel(Il2CppString* P0) {
		return ((T (*)(WeaponHiveGun*, Il2CppString*))(Il2CppBase() + 0x3A5528C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A55294))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCrossHairType() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A5529C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreBeginState(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(WeaponHiveGun*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A552A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostCloseAim() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_StopAimWhenStopFire() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponHiveGun*, bool))(Il2CppBase() + 0x3A552C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552CC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetWeaponMoveScale() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552D4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCameraRotateScale() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeZoomingFOV() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552E4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableDOF() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A552EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponHiveGun*, uintptr_t))(Il2CppBase() + 0x3A552F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponHiveGun*, float))(Il2CppBase() + 0x3A552FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHiddenExceptSight() {
		return ((T (*)(WeaponHiveGun*))(Il2CppBase() + 0x3A55304))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponPartActivate(uintptr_t P0) {
		return ((T (*)(WeaponHiveGun*, uintptr_t))(Il2CppBase() + 0x3A5530C))(this, P0);
	}

};

}
