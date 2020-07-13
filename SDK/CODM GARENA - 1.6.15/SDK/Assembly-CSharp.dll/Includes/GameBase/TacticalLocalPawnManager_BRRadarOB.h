#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerBRRadarOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_BRRadarOB"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowPlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5C50))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn, uintptr_t pawnState) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5E0C))(this, inSprite, inPawn, pawnState);
	}
	template <typename T = bool> T NeedShowPlayerNum(uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t))(Il2CppBase() + 0x30D6004))(this, inPawn);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t View, uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D60AC))(this, View, inSprite, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D6354))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSelfShowOnMap(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D6358))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedShowPlayerNum(uintptr_t P0) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t))(Il2CppBase() + 0x30D6370))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalLocalPawnManagerBRRadarOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D6374))(this, P0, P1, P2);
	}

};

}
