#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRHoldWeaponComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRHoldWeaponComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_CheckHoldWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_ShouldHoldWeapon() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& m_HoldWeaponMaxLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_LastShouldHoldWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OldCrossHairParams() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CurCrossHairView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_CheckFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_TickCheckFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& ProneHitWallDotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_WeaponLengthHandleMap() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_curWeaponLengthHandleBase() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_CurCamera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponLengthHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHandleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponLengthHandleBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalSetHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHoldWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearlyObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAimingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_IsHoldWeapon() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x19408C0))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRHoldWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1940A48))(this, pawn);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1940BA4))(this);
	}
	template <typename T = void> T UpdateWeaponLengthHandle(uintptr_t weapon) {
		return ((T (*)(BRHoldWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1940E70))(this, weapon);
	}
	template <typename T = uintptr_t> T GetHandleType(uintptr_t weapon) {
		return ((T (*)(BRHoldWeaponComponent*, uintptr_t))(Il2CppBase() + 0x19412AC))(this, weapon);
	}
	template <typename T = uintptr_t> T CreateWeaponLengthHandleBase(uintptr_t handleType) {
		return ((T (*)(BRHoldWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1941514))(this, handleType);
	}
	template <typename T = void> T ForceSetHoldWeapon(bool hold) {
		return ((T (*)(BRHoldWeaponComponent*, bool))(Il2CppBase() + 0x19416C8))(this, hold);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRHoldWeaponComponent*, float))(Il2CppBase() + 0x19417A8))(this, deltaTime);
	}
	template <typename T = void> T InternalUpdateHoldWeapon() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x19418C4))(this);
	}
	template <typename T = void> T InternalSetHold(bool isShouldHold) {
		return ((T (*)(BRHoldWeaponComponent*, bool))(Il2CppBase() + 0x19410AC))(this, isShouldHold);
	}
	template <typename T = bool> T IsLocalHoldWeapon() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x19408F0))(this);
	}
	template <typename T = void> T PlayHoldWeaponAnim() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1941D54))(this);
	}
	template <typename T = bool> T CheckShouldHoldWeapon() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1941AAC))(this);
	}
	template <typename T = bool> T CheckNearlyObstacle(float length) {
		return ((T (*)(BRHoldWeaponComponent*, float))(Il2CppBase() + 0x1942BB4))(this, length);
	}
	template <typename T = void> T SetCrossHairType() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1942898))(this);
	}
	template <typename T = void> T ChangeAimingFOV() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1942428))(this);
	}
	template <typename T = float> T GetCameraFOV(bool isAiming) {
		return ((T (*)(BRHoldWeaponComponent*, bool))(Il2CppBase() + 0x1942F34))(this, isAiming);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRHoldWeaponComponent*, uintptr_t))(Il2CppBase() + 0x194327C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRHoldWeaponComponent*))(Il2CppBase() + 0x1943284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRHoldWeaponComponent*, float))(Il2CppBase() + 0x194328C))(this, P0);
	}

};

}
