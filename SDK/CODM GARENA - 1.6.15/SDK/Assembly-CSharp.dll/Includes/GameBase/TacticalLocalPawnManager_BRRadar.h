#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerBRRadar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_BRRadar"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelfShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalRadarScaleBasedOnVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRRadar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5250))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn, uintptr_t pawnState) {
		return ((T (*)(TacticalLocalPawnManagerBRRadar*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D56CC))(this, inSprite, inPawn, pawnState);
	}
	template <typename T = void> T CalRadarScaleBasedOnVelocity(uintptr_t inBRPlayerPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRRadar*, uintptr_t))(Il2CppBase() + 0x30D590C))(this, inBRPlayerPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerBRRadar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5BAC))(this, P0, P1);
	}

};

}
