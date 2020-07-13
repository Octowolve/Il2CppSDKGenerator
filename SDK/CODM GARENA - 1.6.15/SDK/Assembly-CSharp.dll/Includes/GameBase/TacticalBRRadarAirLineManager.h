#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRRadarAirLineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRRadarAirLineManager"));
	}

	template <typename T = uintptr_t> T& airLineUIElements() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsShowReviveAirCraft() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirLineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirLineBeginAndEndSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsShowReviveAirLine() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C0560))(this);
	}
	template <typename T = bool> T get_IsShowReviveAirCraft() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C059C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30BD418))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C05AC))(this);
	}
	template <typename T = void> T UpdateAirLineState() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C065C))(this);
	}
	template <typename T = void> T UpdateAirLineBeginAndEndSprite(uintptr_t inAircraftManager, uintptr_t inAirLineUIElements) {
		return ((T (*)(TacticalBRRadarAirLineManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30C07A4))(this, inAircraftManager, inAirLineUIElements);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C12E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRRadarAirLineManager*))(Il2CppBase() + 0x30C12E8))(this);
	}

};

}
