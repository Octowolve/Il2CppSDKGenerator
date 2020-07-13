#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SAMTurretComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SAMTurretComponent"));
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
	template <typename T = uintptr_t> T& m_target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& m_InitRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppQuaternion> T& m_WeaponAimRotation() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_localEulerCache() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_isPlayDieAnim() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppQuaternion> T& m_Transform1Rot_End() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_Transform2EulerAngles_End() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_Transform2EulerAnglesDir() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_Transform1RotDir() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_DieEndAngleX() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_DieBeginAngleX() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_DieStartTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_DieDurTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SAMTurretComponent*, uintptr_t))(Il2CppBase() + 0x2DF0184))(this, pawn);
	}
	template <typename T = void> T ResetWeaponTransform() {
		return ((T (*)(SAMTurretComponent*))(Il2CppBase() + 0x2DF02F4))(this);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(SAMTurretComponent*))(Il2CppBase() + 0x2DF0498))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SAMTurretComponent*))(Il2CppBase() + 0x2DF0548))(this);
	}
	template <typename T = void> T SetTarget(uint32_t targetID) {
		return ((T (*)(SAMTurretComponent*, uint32_t))(Il2CppBase() + 0x2DF1394))(this, targetID);
	}
	template <typename T = void> T PlayDieAnim(float durtime) {
		return ((T (*)(SAMTurretComponent*, float))(Il2CppBase() + 0x2DF14B0))(this, durtime);
	}

};

}
