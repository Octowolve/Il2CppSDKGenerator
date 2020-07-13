#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentHiveGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_HiveGun"));
	}

	template <typename T = float> T& m_HealthPoint() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_DetectRadius() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_HiveFlyTime() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_DamageDelayTime() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& m_DamageBuffId() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentHiveGun*, uintptr_t, bool))(Il2CppBase() + 0x23DA100))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentHiveGun*))(Il2CppBase() + 0x23DA244))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentHiveGun*))(Il2CppBase() + 0x23DA300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentHiveGun*, uintptr_t, bool))(Il2CppBase() + 0x23DA4D4))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetStartPos() {
		return ((T (*)(WeaponFireComponentHiveGun*))(Il2CppBase() + 0x23DA4D8))(this);
	}

};

}
