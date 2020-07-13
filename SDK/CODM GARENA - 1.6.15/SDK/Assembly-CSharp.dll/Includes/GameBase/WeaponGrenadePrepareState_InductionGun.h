#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadePrepareStateInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadePrepareState_InductionGun"));
	}

	template <typename T = bool> T& hasStartFire() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareStateInductionGun*))(Il2CppBase() + 0x3A4FEC4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareStateInductionGun*))(Il2CppBase() + 0x3A4FF64))(this);
	}

};

}
