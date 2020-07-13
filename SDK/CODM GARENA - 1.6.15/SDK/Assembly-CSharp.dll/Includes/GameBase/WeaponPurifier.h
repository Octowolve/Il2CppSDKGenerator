#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPurifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPurifier"));
	}

	template <typename T = bool> T& m_IsPlayingMuzzleFlashEffect() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PlayMuzzleFlashEffect() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79A88))(this);
	}
	template <typename T = void> T StopFireEffect() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79B44))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayMuzzleFlashEffect() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79C9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFireEffect() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79CA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponPurifier*))(Il2CppBase() + 0x3A79CAC))(this);
	}

};

}
