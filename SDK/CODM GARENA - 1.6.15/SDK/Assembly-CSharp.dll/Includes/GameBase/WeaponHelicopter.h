#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponHelicopter"));
	}

	template <typename T = Il2CppVector3> T& m_HelicopterSpotPoint() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector3> T get_HelicopterSpotPoint() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A51AB8))(this);
	}
	template <typename T = void> T set_HelicopterSpotPoint(Il2CppVector3 value) {
		return ((T (*)(WeaponHelicopter*, Il2CppVector3))(Il2CppBase() + 0x3A51AD4))(this, value);
	}
	template <typename T = bool> T IsFireButtonEnabled() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A51AE4))(this);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A51B84))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponHelicopter*, uintptr_t))(Il2CppBase() + 0x3A51C24))(this, param);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(WeaponHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A51CFC))(this, newState, oldState);
	}
	template <typename T = void> T PreEndState(uintptr_t eWeaponStateType) {
		return ((T (*)(WeaponHelicopter*, uintptr_t))(Il2CppBase() + 0x3A5217C))(this, eWeaponStateType);
	}
	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A5236C))(this);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A5251C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsFireButtonEnabled() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A526AC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A526B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponHelicopter*, uintptr_t))(Il2CppBase() + 0x3A526BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PreBeginState(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(WeaponHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A526C4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PreEndState(uintptr_t P0) {
		return ((T (*)(WeaponHelicopter*, uintptr_t))(Il2CppBase() + 0x3A526CC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanFire() {
		return ((T (*)(WeaponHelicopter*))(Il2CppBase() + 0x3A526D4))(this);
	}

};

}
