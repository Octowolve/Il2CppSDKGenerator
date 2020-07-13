#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentQuickKnife
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_QuickKnife"));
	}

	template <typename T = int32_t> T& m_MaxTargetCount() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& m_PVEMaxTargetCount() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& m_DelayMeleeHitTime() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_DirectFireInterval() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& m_ExpectTime() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActualDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRealMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsQuickKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentQuickKnife*, uintptr_t, bool))(Il2CppBase() + 0x23F4328))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F4464))(this);
	}
	template <typename T = int32_t> T get_MaxTargetCount() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F4520))(this);
	}
	template <typename T = float> T get_DirectFireInterval() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F4644))(this);
	}
	template <typename T = float> T GetActualDamage() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F464C))(this);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23F4848))(this, startPos, dir, impactList);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F5738))(this);
	}
	template <typename T = void> T StartRealMeleeFire() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F5BB8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(WeaponFireComponentQuickKnife*, float))(Il2CppBase() + 0x23F5F0C))(this, dt);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F6080))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppQuaternion))(Il2CppBase() + 0x23F612C))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppQuaternion))(Il2CppBase() + 0x23F6254))(this, initialAim);
	}
	template <typename T = bool> T IsMelee() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F637C))(this);
	}
	template <typename T = bool> T IsQuickKnife() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F641C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentQuickKnife*, uintptr_t, bool))(Il2CppBase() + 0x23F64BC))(this, P0, P1);
	}
	template <typename T = float> T xLuaBaseProxy_GetActualDamage() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F64C0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23F64C4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F64FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentQuickKnife*, float))(Il2CppBase() + 0x23F6500))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F6504))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppQuaternion))(Il2CppBase() + 0x23F6508))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentQuickKnife*, Il2CppQuaternion))(Il2CppBase() + 0x23F652C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMelee() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F6550))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsQuickKnife() {
		return ((T (*)(WeaponFireComponentQuickKnife*))(Il2CppBase() + 0x23F6554))(this);
	}

};

}
