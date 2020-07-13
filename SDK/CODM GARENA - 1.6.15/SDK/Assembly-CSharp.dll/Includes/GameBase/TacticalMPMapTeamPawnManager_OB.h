#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMPMapTeamPawnManagerOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMPMapTeamPawnManager_OB"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateTeamShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool isOutBounds) {
		return ((T (*)(TacticalMPMapTeamPawnManagerOB*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2795B0C))(this, inSprite, inPawn, isOutBounds);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateTeamShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalMPMapTeamPawnManagerOB*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27967C8))(this, P0, P1, P2);
	}

};

}
