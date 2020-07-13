#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGamePlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGamePlayerInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T SwitchBag(int32_t bagID) {
		return ((T (*)(DuelGamePlayerInfo*, int32_t))(Il2CppBase() + 0x400EEC8))(this, bagID);
	}
	template <typename T = bool> T xLuaBaseProxy_SwitchBag(int32_t P0) {
		return ((T (*)(DuelGamePlayerInfo*, int32_t))(Il2CppBase() + 0x400F110))(this, P0);
	}

};

}
