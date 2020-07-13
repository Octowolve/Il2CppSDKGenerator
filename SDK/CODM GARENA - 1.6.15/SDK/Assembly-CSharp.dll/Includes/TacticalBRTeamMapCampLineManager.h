#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalBRTeamMapCampLineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalBRTeamMapCampLineManager"));
	}

	template <typename T = uintptr_t> T& CampSplitLine() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& flightRouteCircle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tacticalbrInstance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_FlightRouteCircleCenter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRTeamMapCampLineManager*))(Il2CppBase() + 0x3F419F4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRTeamMapCampLineManager*))(Il2CppBase() + 0x3F41C8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRTeamMapCampLineManager*))(Il2CppBase() + 0x3F42430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRTeamMapCampLineManager*))(Il2CppBase() + 0x3F42434))(this);
	}

};

}
