#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class FtueTaskProtect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "FtueTask_Protect"));
	}

	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& M4ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LD33ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& StepTriggers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurrentStep() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_LastStep() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsJumpingLogic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_PickingWeapon() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = float> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TimeSum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpToNextTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseJumppingLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleasePickingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnlockPlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_EnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_PickupM4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KillAllAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_AutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_ChangeManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_PickupLD33() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_KillWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_Missile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLastStep_FinishDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AFFAFC))(0);
	}
	template <typename T = uintptr_t> T GetCurrentStep() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4AFFCC8))(this);
	}
	template <typename T = void> T SetCurrentStep(uintptr_t currentStep) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4AFFD68))(this, currentStep);
	}
	template <typename T = bool> T get_IsJumpingLogic() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4AFFF00))(this);
	}
	template <typename T = void> T set_IsJumpingLogic(bool value) {
		return ((T (*)(FtueTaskProtect*, bool))(Il2CppBase() + 0x4AFFF08))(this, value);
	}
	template <typename T = bool> T get_IsPickingWeapon() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4AFFF10))(this);
	}
	template <typename T = void> T set_IsPickingWeapon(bool value) {
		return ((T (*)(FtueTaskProtect*, bool))(Il2CppBase() + 0x4AFFF18))(this, value);
	}
	template <typename T = void> T JumpToNextTrigger() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4B0002C))(this);
	}
	template <typename T = uintptr_t> T ReleaseJumppingLogic() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4B0073C))(this);
	}
	template <typename T = uintptr_t> T ReleasePickingWeapon() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4AFFF4C))(this);
	}
	template <typename T = void> T ProcessStep(uintptr_t lastStep, uintptr_t currentStep) {
		return ((T (*)(FtueTaskProtect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B00174))(this, lastStep, currentStep);
	}
	template <typename T = void> T UnlockPlayerInput() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4B00834))(this);
	}
	template <typename T = void> T SpawnWeapon(uintptr_t lastTrigger, int32_t weaponId) {
		return ((T (*)(FtueTaskProtect*, uintptr_t, int32_t))(Il2CppBase() + 0x4B020F0))(this, lastTrigger, weaponId);
	}
	template <typename T = void> T ProcessLastStep_EnterTrigger(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B011B4))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_PickupM4(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B0140C))(this, lastTrigger);
	}
	template <typename T = void> T KillAllAIPawn() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4B0236C))(this);
	}
	template <typename T = void> T ProcessLastStep_AutoFire(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B017F8))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_ChangeManual(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B01980))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_PickupLD33(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B01A84))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_KillWith(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B01DA4))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_Missile(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B01E98))(this, lastTrigger);
	}
	template <typename T = void> T ProcessLastStep_FinishDialog(uintptr_t lastTrigger) {
		return ((T (*)(FtueTaskProtect*, uintptr_t))(Il2CppBase() + 0x4B01F8C))(this, lastTrigger);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FtueTaskProtect*))(Il2CppBase() + 0x4B025DC))(this);
	}

};

}
