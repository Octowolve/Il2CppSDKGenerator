#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBladeActiveState"));
	}

	template <typename T = uintptr_t> T& m_FireComponent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponShadowBladeActiveState*))(Il2CppBase() + 0x3A80D1C))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponShadowBladeActiveState*))(Il2CppBase() + 0x3A80DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponShadowBladeActiveState*))(Il2CppBase() + 0x3A80EEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponShadowBladeActiveState*))(Il2CppBase() + 0x3A80EF0))(this);
	}

};

}
