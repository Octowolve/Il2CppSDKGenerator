#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TankHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TankHUD"));
	}

	template <typename T = uintptr_t> T& fpsRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& tpsRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& fpsReload() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& tpsReload() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& speedTxt() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ammonTxt() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ammonIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& bloodProgress() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& skillBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& fpsWeaponAim() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& weaponAim() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& skillComponent() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& skillNumTxt() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& skillReady() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& distanceTxt() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& tpsReloadProgress() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fpsReloadProgress() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& bodyIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& cannonIcon() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& bodyBg() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& cannonBg() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& normalCannonIconColor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& normalCannonBgColor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& brokenCannonIconColor() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& brokenCannonBgColor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& normalBodyIconColor() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& normalBodyBgColor() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& brokenBodyIconColor() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& brokenBodyBgColor() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& aimTranstionFx() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& m_SkillNum() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_IsSkillReady() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& currentVehicle() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& m_AmmoCount() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& uiRoot() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& m_Aiming() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& distanceTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& currentTargetDistance() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& currentDistance() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> static T& AimFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AimButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAimmingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginSwitchAimmingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkillState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHealthProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTankWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponAmmonCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateGamepadAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = int32_t> T get_AmmoCount() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342F914))(this);
	}
	template <typename T = void> T set_AmmoCount(int32_t value) {
		return ((T (*)(TankHUD*, int32_t))(Il2CppBase() + 0x342F91C))(this, value);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FA24))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FA30))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FA38))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FA40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FB64))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x342FDEC))(this);
	}
	template <typename T = void> T OnSwitchAimmingState(uintptr_t msg) {
		return ((T (*)(TankHUD*, uintptr_t))(Il2CppBase() + 0x342FFD8))(this, msg);
	}
	template <typename T = void> T OnBeginSwitchAimmingState(uintptr_t msg) {
		return ((T (*)(TankHUD*, uintptr_t))(Il2CppBase() + 0x34303DC))(this, msg);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TankHUD*, float))(Il2CppBase() + 0x343050C))(this, dt);
	}
	template <typename T = void> T UpdateDistance() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3431EB8))(this);
	}
	template <typename T = void> T UpdateSkillState() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3431CE8))(this);
	}
	template <typename T = void> T UpdateHealthProgressBar() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3430844))(this);
	}
	template <typename T = void> T UpdateSpeed() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3431B5C))(this);
	}
	template <typename T = void> T UpdateTankWeaponRotation() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3430BDC))(this);
	}
	template <typename T = void> T UpdateWeaponAmmonCount() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x343141C))(this);
	}
	template <typename T = void> T UpdateWeaponAim() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3430E74))(this);
	}
	template <typename T = void> T UpdateReloadState() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3431640))(this);
	}
	template <typename T = void> T SetAimingState(bool isAiming) {
		return ((T (*)(TankHUD*, bool))(Il2CppBase() + 0x34300EC))(this, isAiming);
	}
	template <typename T = bool> T SimulateGamepadAiming() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x343245C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x343284C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x3432854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TankHUD*))(Il2CppBase() + 0x343285C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TankHUD*, float))(Il2CppBase() + 0x3432864))(this, P0);
	}

};

}
