#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightPlayerController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoudGoToSpectatingAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T ShoudGoToSpectatingAfterDead() {
		return ((T (*)(GunFightPlayerController*))(Il2CppBase() + 0x4027888))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShoudGoToSpectatingAfterDead() {
		return ((T (*)(GunFightPlayerController*))(Il2CppBase() + 0x4027928))(this);
	}

};

}
