#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentPlacing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Placing"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlacing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentPlacing*))(Il2CppBase() + 0x23F2F70))(this);
	}
	template <typename T = bool> T IsPlacing() {
		return ((T (*)(WeaponFireComponentPlacing*))(Il2CppBase() + 0x23F30FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentPlacing*))(Il2CppBase() + 0x23F319C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPlacing() {
		return ((T (*)(WeaponFireComponentPlacing*))(Il2CppBase() + 0x23F31A4))(this);
	}

};

}
