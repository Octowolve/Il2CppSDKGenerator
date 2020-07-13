#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightPlayerPawn"));
	}

	template <typename T = uintptr_t> T& m_GFGameInfo() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_GFGameInfo() {
		return ((T (*)(GunFightPlayerPawn*))(Il2CppBase() + 0x4027ABC))(this);
	}

};

}
