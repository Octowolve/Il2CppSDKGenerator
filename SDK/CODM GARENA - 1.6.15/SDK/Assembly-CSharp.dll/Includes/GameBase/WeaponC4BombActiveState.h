#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponC4BombActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponC4BombActiveState"));
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
		return ((T (*)(WeaponC4BombActiveState*))(Il2CppBase() + 0x1C5E80C))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponC4BombActiveState*))(Il2CppBase() + 0x1C5E950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponC4BombActiveState*))(Il2CppBase() + 0x1C5EA80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponC4BombActiveState*))(Il2CppBase() + 0x1C5EA84))(this);
	}

};

}
