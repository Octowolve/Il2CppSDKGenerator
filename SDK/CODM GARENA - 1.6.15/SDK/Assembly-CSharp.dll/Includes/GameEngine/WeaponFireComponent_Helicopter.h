#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Helicopter"));
	}

	template <typename T = int32_t> T& m_HelicopterID() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_SpawnCircleHeight() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_SpawnCircleRadius() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentHelicopter*, uintptr_t, bool))(Il2CppBase() + 0x23D98C4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D99FC))(this);
	}
	template <typename T = int32_t> T get_HelicopterID() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9AB8))(this);
	}
	template <typename T = float> T get_SpawnCircleHeight() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9AC0))(this);
	}
	template <typename T = float> T get_SpawnCircleRadius() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9AC8))(this);
	}
	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9AD0))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9C84))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23D9D88))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammoCount) {
		return ((T (*)(WeaponFireComponentHelicopter*, int32_t))(Il2CppBase() + 0x23D9E90))(this, ammoCount);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentHelicopter*, uintptr_t, bool))(Il2CppBase() + 0x23DA024))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_AmmoCanFire() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23DA02C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_HasAmmo() {
		return ((T (*)(WeaponFireComponentHelicopter*))(Il2CppBase() + 0x23DA034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAmmo(int32_t P0) {
		return ((T (*)(WeaponFireComponentHelicopter*, int32_t))(Il2CppBase() + 0x23DA03C))(this, P0);
	}

};

}
