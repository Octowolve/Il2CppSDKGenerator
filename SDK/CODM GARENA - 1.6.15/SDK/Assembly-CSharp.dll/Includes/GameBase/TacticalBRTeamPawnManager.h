#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRTeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRTeamPawnManager"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBRSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOfflinePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOffLineTeamMateShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBRPlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamMateSpriteNameByState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRTeamPawnManager*))(Il2CppBase() + 0x30C7C5C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRTeamPawnManager*))(Il2CppBase() + 0x30C7360))(this);
	}
	template <typename T = void> T UpdateBRSpriteList(Il2CppList<uintptr_t>* inPawnList, Il2CppList<uintptr_t>* inTacticalTeamMateStateList, Il2CppList<uintptr_t>* inPawnSpriteList) {
		return ((T (*)(TacticalBRTeamPawnManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30C7EB8))(this, inPawnList, inTacticalTeamMateStateList, inPawnSpriteList);
	}
	template <typename T = void> T UpdateOfflinePlayerSpriteInfo(uintptr_t inPawnSprite, uint32_t teamSeatID, Il2CppVector3 deathPos) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x30C8D28))(this, inPawnSprite, teamSeatID, deathPos);
	}
	template <typename T = void> T UpdateOffLineTeamMateShowOnMap(uintptr_t inSprite, uint32_t teamSeatID) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x30C8F30))(this, inSprite, teamSeatID);
	}
	template <typename T = void> T UpdateBRPlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30C87EC))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateTeamShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool isOutBounds) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x30C9088))(this, inSprite, inPawn, isOutBounds);
	}
	template <typename T = Il2CppString*> T GetTeamMateSpriteNameByState(uintptr_t inPawn, bool isOutBounds) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, bool))(Il2CppBase() + 0x30C9360))(this, inPawn, isOutBounds);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30C9614))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRTeamPawnManager*))(Il2CppBase() + 0x30C96C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRTeamPawnManager*))(Il2CppBase() + 0x30C96C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateTeamShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x30C96D0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetTeamMateSpriteNameByState(uintptr_t P0, bool P1) {
		return ((T (*)(TacticalBRTeamPawnManager*, uintptr_t, bool))(Il2CppBase() + 0x30C96F0))(this, P0, P1);
	}

};

}
