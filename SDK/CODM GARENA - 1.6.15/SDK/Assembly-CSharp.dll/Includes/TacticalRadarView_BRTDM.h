#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalRadarViewBRTDM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalRadarView_BRTDM"));
	}

	template <typename T = uintptr_t> T& EnemyAirline() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& EnemyAirlineBG() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& EnemyAirlineBGLeft() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& EnemyAirlineArrow() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& EnemyAirCraft() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& EnemyAirlineStartPoint() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllySpriteList() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterTacticalRadarAirLineManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalRadarViewBRTDM*))(Il2CppBase() + 0x3F47A70))(this);
	}
	template <typename T = void> T RegisterTacticalRadarAirLineManager() {
		return ((T (*)(TacticalRadarViewBRTDM*))(Il2CppBase() + 0x3F47B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalRadarViewBRTDM*))(Il2CppBase() + 0x3F47BF4))(this);
	}

};

}
