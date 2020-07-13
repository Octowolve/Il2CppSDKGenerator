#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerBRMapOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_BRMapOB"));
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
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D4A74))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn, uintptr_t pawnState) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D4C30))(this, inSprite, inPawn, pawnState);
	}
	template <typename T = bool> T NeedShowPlayerNum(uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t))(Il2CppBase() + 0x30D4E28))(this, inPawn);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t View, uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D4ED0))(this, View, inSprite, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5178))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSelfShowOnMap(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D517C))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedShowPlayerNum(uintptr_t P0) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t))(Il2CppBase() + 0x30D5194))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalLocalPawnManagerBRMapOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D5198))(this, P0, P1, P2);
	}

};

}
