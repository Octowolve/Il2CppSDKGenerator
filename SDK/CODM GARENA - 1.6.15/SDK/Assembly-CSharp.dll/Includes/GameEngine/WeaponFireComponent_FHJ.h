#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentFHJ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_FHJ"));
	}

	template <typename T = float> T& m_AimValidRange() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_AirTargetAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_AirTargetMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_MinCenterDis() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& m_MinDisAttackable() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldToViewportPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentFHJ*, uintptr_t, bool))(Il2CppBase() + 0x23CEF40))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentFHJ*))(Il2CppBase() + 0x23CF1E0))(this);
	}
	template <typename T = uintptr_t> T TryLockTarget() {
		return ((T (*)(WeaponFireComponentFHJ*))(Il2CppBase() + 0x23CF29C))(this);
	}
	template <typename T = bool> T CanAttackableTarget(uintptr_t target) {
		return ((T (*)(WeaponFireComponentFHJ*, uintptr_t))(Il2CppBase() + 0x23CF6E0))(this, target);
	}
	template <typename T = Il2CppVector3> T WorldToViewportPos(Il2CppVector3 worldPos) {
		return ((T (*)(WeaponFireComponentFHJ*, Il2CppVector3))(Il2CppBase() + 0x23D01F0))(this, worldPos);
	}
	template <typename T = bool> T IsInPort(Il2CppVector3 centerPos, Il2CppVector3 topPos, uintptr_t dis) {
		return ((T (*)(WeaponFireComponentFHJ*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23D001C))(this, centerPos, topPos, dis);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentFHJ*, uintptr_t, bool))(Il2CppBase() + 0x23D0480))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_TryLockTarget() {
		return ((T (*)(WeaponFireComponentFHJ*))(Il2CppBase() + 0x23D0484))(this);
	}

};

}
