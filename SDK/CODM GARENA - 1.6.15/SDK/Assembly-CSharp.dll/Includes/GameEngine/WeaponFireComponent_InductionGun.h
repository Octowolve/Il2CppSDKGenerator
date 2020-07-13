#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_InductionGun"));
	}

	template <typename T = float> T& m_SpeedAttenuation() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_DamageAttenuation() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_ScanRange() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = Il2CppVector3> T& m_BoundBox() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = bool> T& m_CanShareWithTeammate() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_AfterImageContinuousTime() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_DistanceToShowAfterImage() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireDirectOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentInductionGun*, uintptr_t, bool))(Il2CppBase() + 0x23DAEC8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB02C))(this);
	}
	template <typename T = Il2CppVector3> T GetFireStartPos() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB0E8))(this);
	}
	template <typename T = Il2CppVector3> T GetFireOffset() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB4E0))(this);
	}
	template <typename T = Il2CppVector3> T GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB590))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentInductionGun*, Il2CppQuaternion))(Il2CppBase() + 0x23DB640))(this, initialAim);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentInductionGun*, uintptr_t, bool))(Il2CppBase() + 0x23DB824))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireStartPos() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB828))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireOffset() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB838))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB848))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentInductionGun*, Il2CppQuaternion))(Il2CppBase() + 0x23DB858))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentInductionGun*))(Il2CppBase() + 0x23DB87C))(this);
	}

};

}
