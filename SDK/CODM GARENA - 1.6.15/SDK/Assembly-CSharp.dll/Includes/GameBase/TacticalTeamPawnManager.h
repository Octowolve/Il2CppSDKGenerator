#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTeamPawnManager"));
	}

	template <typename T = int32_t> T& usedSpriteNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& startDepth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamMateSpriteNameByState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowPlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalTeamPawnManager*))(Il2CppBase() + 0x279573C))(this);
	}
	template <typename T = void> T UpdateSpriteList(Il2CppList<uintptr_t>* inPawnList, Il2CppList<uintptr_t>* inPawnSpriteList) {
		return ((T (*)(TacticalTeamPawnManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27AFE7C))(this, inPawnList, inPawnSpriteList);
	}
	template <typename T = bool> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2798404))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateTeamShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool isOutBounds) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2795FE0))(this, inSprite, inPawn, isOutBounds);
	}
	template <typename T = Il2CppString*> T GetTeamMateSpriteNameByState(uintptr_t inPawn, bool isOutBounds) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, bool))(Il2CppBase() + 0x27B0268))(this, inPawn, isOutBounds);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t view, uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B0400))(this, view, inSprite, inPawn);
	}
	template <typename T = void> T AdjustPlayerIconUI_1(uintptr_t view, uintptr_t inSprite, uintptr_t playerInfo) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B0FA8))(this, view, inSprite, playerInfo);
	}
	template <typename T = void> T AdjustPlayerIconUI_2(uintptr_t view, uintptr_t inSprite, uint32_t inNum) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x27B1370))(this, view, inSprite, inNum);
	}
	template <typename T = bool> T NeedShowPlayerNum(uintptr_t inPawn) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t))(Il2CppBase() + 0x27B0A80))(this, inPawn);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x27B16C4))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalTeamPawnManager*))(Il2CppBase() + 0x27B1770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalTeamPawnManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B1778))(this, P0, P1, P2);
	}

};

}
