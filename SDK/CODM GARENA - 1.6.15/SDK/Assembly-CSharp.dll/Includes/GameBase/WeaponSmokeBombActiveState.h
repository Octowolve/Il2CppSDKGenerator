#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSmokeBombActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSmokeBombActiveState"));
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
		return ((T (*)(WeaponSmokeBombActiveState*))(Il2CppBase() + 0x3A83FD0))(this);
	}
	template <typename T = void> T TryCancelUseUltWeapon() {
		return ((T (*)(WeaponSmokeBombActiveState*))(Il2CppBase() + 0x3A841B8))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSmokeBombActiveState*))(Il2CppBase() + 0x3A84360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSmokeBombActiveState*))(Il2CppBase() + 0x3A844FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSmokeBombActiveState*))(Il2CppBase() + 0x3A84504))(this);
	}

};

}
