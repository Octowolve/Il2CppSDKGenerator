#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapViewBRTDM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapView_BRTDM"));
	}

	template <typename T = uintptr_t> T& EnemyAirlineStartPoint() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& EnemyAirlineArrow() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& EnemyAirCraft() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& EnemyAirline() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& EnemyAirlineBG() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& EnemyAirlineBGLeft() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& CampSplitLine() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& m_CampSplitLineDefaultSizeY() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllySpriteList() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = bool> T& bGameStart() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterTacticalMapAirLineManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapViewBRTDM*))(Il2CppBase() + 0x27943D8))(this);
	}
	template <typename T = void> T RegisterTacticalMapAirLineManager() {
		return ((T (*)(TacticalMapViewBRTDM*))(Il2CppBase() + 0x2794540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapViewBRTDM*))(Il2CppBase() + 0x27947A8))(this);
	}

};

}
