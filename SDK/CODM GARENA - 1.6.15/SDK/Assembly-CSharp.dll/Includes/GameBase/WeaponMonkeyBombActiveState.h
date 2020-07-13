#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMonkeyBombActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMonkeyBombActiveState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryCancelUseUltWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponMonkeyBombActiveState*))(Il2CppBase() + 0x3A5BB78))(this);
	}
	template <typename T = void> T TryCancelUseUltWeapon() {
		return ((T (*)(WeaponMonkeyBombActiveState*))(Il2CppBase() + 0x3A5BDE8))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponMonkeyBombActiveState*))(Il2CppBase() + 0x3A5BF90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponMonkeyBombActiveState*))(Il2CppBase() + 0x3A5C12C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponMonkeyBombActiveState*))(Il2CppBase() + 0x3A5C134))(this);
	}

};

}
