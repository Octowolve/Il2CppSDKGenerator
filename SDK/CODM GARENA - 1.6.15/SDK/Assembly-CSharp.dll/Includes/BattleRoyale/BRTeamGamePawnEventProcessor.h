#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGamePawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGamePawnEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(BRTeamGamePawnEventProcessor*))(Il2CppBase() + 0x2623110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(BRTeamGamePawnEventProcessor*))(Il2CppBase() + 0x262349C))(this);
	}

};

}
