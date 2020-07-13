#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SentryGunWeaponComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SentryGunWeaponComponent"));
	}

	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_weaponTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_weaponTransform2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> static T& WEAPON_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WEAPON_NAME_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_targetPawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& m_LeftOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_RightOffset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& m_InitRotation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppQuaternion> T& m_beginQ() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppQuaternion> T& m_endQ() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppQuaternion> T& m_curQ() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_LockedSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_speed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_allTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_turnRoundAngle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_isPlayDieAnim() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = Il2CppQuaternion> T& m_WeaponAimRotation() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& m_localEulerCache() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& ms_FirePosOffset() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& m_SetFireDir() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_DieEndAngleX() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_DieBeginAngleX() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_DieStartTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_DieDurTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& m_LastFireLocalEulerAngles() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_FireSocketTransform() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterIdleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetFireDir(Il2CppVector3 fireDir) {
		return ((T (*)(SentryGunWeaponComponent*, Il2CppVector3))(Il2CppBase() + 0x2E026E4))(this, fireDir);
	}
	template <typename T = void> T Init(uintptr_t pawn, float TurnRoundAngle) {
		return ((T (*)(SentryGunWeaponComponent*, uintptr_t, float))(Il2CppBase() + 0x2E027B4))(this, pawn, TurnRoundAngle);
	}
	template <typename T = void> T SetTarget(uint32_t targetID) {
		return ((T (*)(SentryGunWeaponComponent*, uint32_t))(Il2CppBase() + 0x2E03ABC))(this, targetID);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(SentryGunWeaponComponent*))(Il2CppBase() + 0x2E02B18))(this);
	}
	template <typename T = void> T ResetWeaponTransform() {
		return ((T (*)(SentryGunWeaponComponent*))(Il2CppBase() + 0x2E0297C))(this);
	}
	template <typename T = void> T OnEnterIdleState() {
		return ((T (*)(SentryGunWeaponComponent*))(Il2CppBase() + 0x2E01F30))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SentryGunWeaponComponent*))(Il2CppBase() + 0x2E052F4))(this);
	}
	template <typename T = void> T PlayDieAnim(float durtime) {
		return ((T (*)(SentryGunWeaponComponent*, float))(Il2CppBase() + 0x2E02C64))(this, durtime);
	}
	template <typename T = void> T PlayFireAnimation() {
		return ((T (*)(SentryGunWeaponComponent*))(Il2CppBase() + 0x2E067B8))(this);
	}

};

}
