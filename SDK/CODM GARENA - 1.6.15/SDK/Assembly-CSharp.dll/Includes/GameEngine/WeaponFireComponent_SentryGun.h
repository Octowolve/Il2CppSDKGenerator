#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentSentryGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_SentryGun"));
	}

	template <typename T = int32_t> T& m_SentryGunID() {
		return *(T*)((uintptr_t)this + 0x178);
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

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentSentryGun*, uintptr_t, bool))(Il2CppBase() + 0x23F85FC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F8720))(this);
	}
	template <typename T = int32_t> T get_SentryGunID() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F87DC))(this);
	}
	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F87E4))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F89E0))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F8AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentSentryGun*, uintptr_t, bool))(Il2CppBase() + 0x23F8BEC))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_AmmoCanFire() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F8BF4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_HasAmmo() {
		return ((T (*)(WeaponFireComponentSentryGun*))(Il2CppBase() + 0x23F8BFC))(this);
	}

};

}
