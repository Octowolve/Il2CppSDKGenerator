#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGoliathGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGoliathGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverHotEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C688B4))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(WeaponGoliathGun*, bool))(Il2CppBase() + 0x1C68958))(this, paused);
	}
	template <typename T = uintptr_t> T GetCrossHairType() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C68A1C))(this);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C68ABC))(this);
	}
	template <typename T = void> T PlayOverHotEffect() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C68C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C6937C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCrossHairType() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C69380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C69384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayOverHotEffect() {
		return ((T (*)(WeaponGoliathGun*))(Il2CppBase() + 0x1C69388))(this);
	}

};

}
