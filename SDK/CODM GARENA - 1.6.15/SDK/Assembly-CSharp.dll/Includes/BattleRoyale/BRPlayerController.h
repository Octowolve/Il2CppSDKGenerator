#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPlayerController"));
	}

	template <typename T = bool> T& m_UseAnimationBasedAiming() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc3PBrFireModeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSkydivingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreezing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAircraftCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimAndMagnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeanLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeanRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkydivingCommonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoudGoToSpectatingAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifySpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewPlayerById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNewTargetSpectatorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = float> T get_FreezePlayerTime() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC73F8))(this);
	}
	template <typename T = void> T set_FreezePlayerTime(float value) {
		return ((T (*)(BRPlayerController*, float))(Il2CppBase() + 0x1AC7400))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC7408))(this);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1AC74D4))(this, inPawn);
	}
	template <typename T = void> T Calc3PBrFireModeCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AC75F0))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcSkydivingCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AC77C0))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = bool> T IsFreezing() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC796C))(this);
	}
	template <typename T = void> T CalcAircraftCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AC7A0C))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC7BA4))(this);
	}
	template <typename T = void> T UpdateCarriedAmmoCount() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC7CD0))(this);
	}
	template <typename T = Il2CppVector3> T GetAimAndMagnAngle(Il2CppVector3 assistAngle, Il2CppVector3 magnAngle) {
		return ((T (*)(BRPlayerController*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1AC7F00))(this, assistAngle, magnAngle);
	}
	template <typename T = void> T StartJump() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC8008))(this);
	}
	template <typename T = void> T CheckLean() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC82C4))(this);
	}
	template <typename T = void> T CheckLeanLeft() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC840C))(this);
	}
	template <typename T = void> T CheckLeanRight() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC8580))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC8B54))(this);
	}
	template <typename T = void> T OnOpenAim() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC8E34))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC9210))(this);
	}
	template <typename T = bool> T get_RealUseAnimationBasedAiming() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC940C))(this);
	}
	template <typename T = void> T set_RealUseAnimationBasedAiming(bool value) {
		return ((T (*)(BRPlayerController*, bool))(Il2CppBase() + 0x1AC953C))(this, value);
	}
	template <typename T = bool> T UseSkydivingCommonCamera() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC9544))(this);
	}
	template <typename T = bool> T ShoudGoToSpectatingAfterDead() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC9744))(this);
	}
	template <typename T = void> T StartObserve() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC97E4))(this);
	}
	template <typename T = void> T StartSpectating() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC994C))(this);
	}
	template <typename T = void> T VerifySpectatingTarget() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1AC9A84))(this);
	}
	template <typename T = void> T ViewPlayerById(uint32_t playerId, bool checkCD, bool checkTarget) {
		return ((T (*)(BRPlayerController*, uint32_t, bool, bool))(Il2CppBase() + 0x1AC9BCC))(this, playerId, checkCD, checkTarget);
	}
	template <typename T = void> T SetSpectatingTarget(uintptr_t value) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1AC9DC8))(this, value);
	}
	template <typename T = bool> T IsCanUse1PView(uintptr_t target) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA14C))(this, target);
	}
	template <typename T = void> T CheckNewTargetSpectatorMode(uintptr_t newTarget) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA308))(this, newTarget);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA598))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Calc3PBrFireModeCamera(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACA5A0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_CalcSkydivingCamera(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACA5A8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsFreezing() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA5B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcAircraftCamera(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACA5B8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA5C0))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetAimAndMagnAngle(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(BRPlayerController*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1ACA5C8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartJump() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckLean() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA60C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA61C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_UseSkydivingCommonCamera() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA624))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShoudGoToSpectatingAfterDead() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA62C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartObserve() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSpectating() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA63C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_VerifySpectatingTarget() {
		return ((T (*)(BRPlayerController*))(Il2CppBase() + 0x1ACA644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ViewPlayerById(uint32_t P0, bool P1, bool P2) {
		return ((T (*)(BRPlayerController*, uint32_t, bool, bool))(Il2CppBase() + 0x1ACA64C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetSpectatingTarget(uintptr_t P0) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA66C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanUse1PView(uintptr_t P0) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA674))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNewTargetSpectatorMode(uintptr_t P0) {
		return ((T (*)(BRPlayerController*, uintptr_t))(Il2CppBase() + 0x1ACA67C))(this, P0);
	}

};

}
