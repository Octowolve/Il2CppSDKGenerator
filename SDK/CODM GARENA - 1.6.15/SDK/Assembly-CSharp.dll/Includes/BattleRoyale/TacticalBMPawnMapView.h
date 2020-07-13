#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalBMPawnMapView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalBMPawnMapView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTacticalSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TacticalBMPawnMapView*))(Il2CppBase() + 0x35AEECC))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalBMPawnMapView*))(Il2CppBase() + 0x35AF040))(this);
	}
	template <typename T = void> T UpdateTacticalSpriteList() {
		return ((T (*)(TacticalBMPawnMapView*))(Il2CppBase() + 0x35AF0F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalBMPawnMapView*))(Il2CppBase() + 0x35AF614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalBMPawnMapView*))(Il2CppBase() + 0x35AF61C))(this);
	}

};

}
