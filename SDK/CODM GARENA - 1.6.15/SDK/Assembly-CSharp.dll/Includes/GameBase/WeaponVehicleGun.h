#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponVehicleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponVehicleGun"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_VehicleWeaponMeshRenderers() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = Il2CppString*> static T& AudioRTPCFireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& refreshFireLengthCount() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncVehicleHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHotMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerVehicleWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoolDownWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveHotValueToCurrentVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShellDropEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndFireCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMuzzleFlashSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShellDropSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Activate() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458AAC0))(this);
	}
	template <typename T = void> T SyncVehicleHotValue() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458AB70))(this);
	}
	template <typename T = void> T SetMeshRenderers() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458ADB4))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458B35C))(this);
	}
	template <typename T = void> T StopFire(bool isImmidiately) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458B4A8))(this, isImmidiately);
	}
	template <typename T = void> T RefreshHotMaterial(bool isForce) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458B5B8))(this, isForce);
	}
	template <typename T = uintptr_t> T GetOwnerVehicleWeapon() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458B178))(this);
	}
	template <typename T = void> T SetCurrentHotValue(float value) {
		return ((T (*)(WeaponVehicleGun*, float))(Il2CppBase() + 0x458B9A4))(this, value);
	}
	template <typename T = void> T CoolDownWeapon() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458BBD0))(this);
	}
	template <typename T = void> T AddHotValue() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458BF70))(this);
	}
	template <typename T = void> T OnViewChanged(bool is1P) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458C310))(this, is1P);
	}
	template <typename T = void> T SaveHotValueToCurrentVehicle() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458C3CC))(this);
	}
	template <typename T = void> T PlayMuzzleFlashEffect() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458C594))(this);
	}
	template <typename T = void> T PlayShellDropEffect() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458C6BC))(this);
	}
	template <typename T = void> T PlayEndFireCameraAim() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458C7D0))(this);
	}
	template <typename T = void> T InitMuzzleFlashSocket() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458C868))(this);
	}
	template <typename T = void> T InitShellDropSocket() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CB98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CCCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetMeshRenderers() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CCD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CCDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire(bool P0) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458CCE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshHotMaterial(bool P0) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458CCEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetCurrentHotValue(float P0) {
		return ((T (*)(WeaponVehicleGun*, float))(Il2CppBase() + 0x458CCF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CoolDownWeapon() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CCFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddHotValue() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewChanged(bool P0) {
		return ((T (*)(WeaponVehicleGun*, bool))(Il2CppBase() + 0x458CD0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayMuzzleFlashEffect() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayShellDropEffect() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEndFireCameraAim() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMuzzleFlashSocket() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitShellDropSocket() {
		return ((T (*)(WeaponVehicleGun*))(Il2CppBase() + 0x458CD34))(this);
	}

};

}
