#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRTeamRadarAirLineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRTeamRadarAirLineManager"));
	}

	template <typename T = uintptr_t> T& enemyAirLineUIElements() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirLineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRTeamRadarAirLineManager*))(Il2CppBase() + 0x30C7A98))(this);
	}
	template <typename T = void> T UpdateAirLineState() {
		return ((T (*)(TacticalBRTeamRadarAirLineManager*))(Il2CppBase() + 0x30C9C8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRTeamRadarAirLineManager*))(Il2CppBase() + 0x30C9DF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateAirLineState() {
		return ((T (*)(TacticalBRTeamRadarAirLineManager*))(Il2CppBase() + 0x30C9DFC))(this);
	}

};

}
