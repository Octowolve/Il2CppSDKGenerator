#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLRotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLRotationComponent"));
	}

	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_OwnerPawnTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_weaponTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_weaponTransform2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> static T& WEAPON_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WEAPON_NAME_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_InitlocalEulerAngles2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppQuaternion> T& m_WeaponAimRotation() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_localEulerCache() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& m_localEulerCache2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_AimEulerAngles() {
		return *(T*)((uintptr_t)this + 0x80);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(VTOLRotationComponent*, uintptr_t))(Il2CppBase() + 0x1BF1480))(this, pawn);
	}
	template <typename T = void> T ResetWeaponTransform() {
		return ((T (*)(VTOLRotationComponent*))(Il2CppBase() + 0x1BF17D4))(this);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(VTOLRotationComponent*))(Il2CppBase() + 0x1BF8B68))(this);
	}
	template <typename T = void> T SetAimEulerAngles(Il2CppVector3 EulerAngles) {
		return ((T (*)(VTOLRotationComponent*, Il2CppVector3))(Il2CppBase() + 0x1BF10DC))(this, EulerAngles);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(VTOLRotationComponent*))(Il2CppBase() + 0x1BF8C18))(this);
	}

};

}
