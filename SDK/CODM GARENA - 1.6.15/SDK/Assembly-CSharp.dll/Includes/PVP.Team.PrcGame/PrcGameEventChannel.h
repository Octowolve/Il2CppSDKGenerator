#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PrcGame {

class PrcGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PrcGame", "PrcGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(PrcGameEventChannel*, uintptr_t))(Il2CppBase() + 0x348ED74))(this, inMsg);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddDroppedPickUp(uintptr_t P0) {
		return ((T (*)(PrcGameEventChannel*, uintptr_t))(Il2CppBase() + 0x348F1DC))(this, P0);
	}

};

}
