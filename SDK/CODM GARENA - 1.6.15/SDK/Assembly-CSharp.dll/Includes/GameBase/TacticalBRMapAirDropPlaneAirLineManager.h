#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRMapAirDropPlaneAirLineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRMapAirDropPlaneAirLineManager"));
	}

	template <typename T = uintptr_t> T& tacticalBRMapInstance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirlineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRMapAirDropPlaneAirLineManager*))(Il2CppBase() + 0x30BAD6C))(this);
	}
	template <typename T = void> T UpdateAirlineState() {
		return ((T (*)(TacticalBRMapAirDropPlaneAirLineManager*))(Il2CppBase() + 0x30BB040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRMapAirDropPlaneAirLineManager*))(Il2CppBase() + 0x30BCFEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateAirlineState() {
		return ((T (*)(TacticalBRMapAirDropPlaneAirLineManager*))(Il2CppBase() + 0x30BCFF0))(this);
	}

};

}
