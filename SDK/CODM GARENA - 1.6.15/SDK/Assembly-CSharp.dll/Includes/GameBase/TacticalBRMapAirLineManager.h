#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRMapAirLineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRMapAirLineManager"));
	}

	template <typename T = float> T& AIRLINE_WIDTH() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& tacticalBRMapInstance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsShowReviveAirCraft() {
		return ((T (*)(TacticalBRMapAirLineManager*))(Il2CppBase() + 0x30BD210))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRMapAirLineManager*))(Il2CppBase() + 0x30BD218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRMapAirLineManager*))(Il2CppBase() + 0x30BD5E0))(this);
	}

};

}
