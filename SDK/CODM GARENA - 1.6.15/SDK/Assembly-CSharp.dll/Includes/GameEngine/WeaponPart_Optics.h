#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartOptics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Optics"));
	}

	template <typename T = float> T& m_ZoomInFOVTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_ZoomOutFOVTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_ZoomingFOV() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_AimingMovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_CameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_IgnoreShotSpreadTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_ZoomingGetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_ZoomingGetHitPunchAngleXDecreseSpeed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_IsThermalSight() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRanges() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_MaxDamapAssitAimRateScaleAdd() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_DampAssitAimRateFactorScaleAdd() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_MagnAssitAimRateFactorScaleAdd() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& m_TexCrossHairName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_ShowSocketObject() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_HideSocketObject() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& m_weaponOldLocalPos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& m_pawnAvataOldLocalPos() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_AimingOpenTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& m_AimingCloseTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> static T& m_AimingOpenFirstCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_AimingOpenFirseCameraLocalPosZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FirstPresonAavtar() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_OpticsType() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_IsNightVision() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_NightVisionRange() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_ChangePercent_1PMode_Open() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_ChangePercent_1PMode_Close() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& m_CrossHairAssetID() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_WeaponAimModifyPercent() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& m_AimingFireAnimPercent() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& m_IsWeaponAiming() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& m_IsWeaponAimingDown() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = float> T& m_slerpTime() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& m_slerpNeedTime() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppVector3> T& m_deltaVector3() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppVector3> T& m_startWeaponLocalPos() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppVector3> T& m_startPawnLocalPos() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& m_IsFirstCameraLocalPosSmooth() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_slerpTime2FirstCameraLocalPos() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& m_slerpNeedTime2FirstCameraLocalPos() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& m_curFirstCameraLocalPosZ() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& m_TargetLocalPosZ() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppVector3> T& m_InitFirstCameraLocalPos() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppVector3> T& m_AimingIdleFirstCameraLocalPos() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& m_IsFirstCameraFOVSmooth() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_slerpTime2FirstCameraFOV() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_slerpNeedTime2FirstCameraFOV() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_curFirstCameraFOV() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& m_TargetFirstCaremaFOV() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppVector3> T& FirstCameraLocalPosTemp() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& mNightVision() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdditionWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponMeshLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTexCrossHairHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAimingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPartTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpticsType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpticsPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartOptics*, uintptr_t, bool))(Il2CppBase() + 0x2418460))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241866C))(this);
	}
	template <typename T = bool> T ResetWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x2418728))(this, active);
	}
	template <typename T = bool> T AdditionWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x2419060))(this, active);
	}
	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241934C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x2419F28))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241A000))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241A0C4))(this);
	}
	template <typename T = void> T SetWeaponMeshLocalPosition(uintptr_t stateType) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x24198EC))(this, stateType);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x241A188))(this, stateType);
	}
	template <typename T = void> T OnNotifyTexCrossHairHud(uintptr_t beginStateType) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x24162F0))(this, beginStateType);
	}
	template <typename T = void> T DelayAimingDown() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241AB44))(this);
	}
	template <typename T = void> T PreloadAssetAsync(int32_t crossHairIndex) {
		return ((T (*)(WeaponPartOptics*, int32_t))(Il2CppBase() + 0x2419E24))(this, crossHairIndex);
	}
	template <typename T = void> T AdjustPartTransform(int32_t weaponPartMeshID, int32_t weaponMeshID) {
		return ((T (*)(WeaponPartOptics*, int32_t, int32_t))(Il2CppBase() + 0x241AC10))(this, weaponPartMeshID, weaponMeshID);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x241AE24))(this, stateType);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponPartOptics*, float))(Il2CppBase() + 0x241AF7C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetOpticsType() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241B8F0))(this);
	}
	template <typename T = bool> T IsOpticsPart() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241B990))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x241BA30))(this, isHidden);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartOptics*, uintptr_t, bool))(Il2CppBase() + 0x241BB68))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ResetWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x241BB6C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_AdditionWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x241BB70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetupWeaponPart() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponBeginState(uintptr_t P0) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x241BB84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPartTransform(int32_t P0, int32_t P1) {
		return ((T (*)(WeaponPartOptics*, int32_t, int32_t))(Il2CppBase() + 0x241BB88))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponEndState(uintptr_t P0) {
		return ((T (*)(WeaponPartOptics*, uintptr_t))(Il2CppBase() + 0x241BB8C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponPartOptics*, float))(Il2CppBase() + 0x241BB90))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetOpticsType() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsOpticsPart() {
		return ((T (*)(WeaponPartOptics*))(Il2CppBase() + 0x241BB98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponPartOptics*, bool))(Il2CppBase() + 0x241BB9C))(this, P0);
	}

};

}
