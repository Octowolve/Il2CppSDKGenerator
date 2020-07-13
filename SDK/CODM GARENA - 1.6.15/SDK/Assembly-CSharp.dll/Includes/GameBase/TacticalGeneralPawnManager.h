#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalGeneralPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalGeneralPawnManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& SimplePlayerSpriteDict() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& SimplePlayerDirtyDict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& DeadPlayers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& overlapStrategy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spriteEmptyObjectPool() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateObPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDeadPlayerSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpritePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdateObPlayers(Il2CppList<uintptr_t>* inPawnSpriteList, uintptr_t camp) {
		return ((T (*)(TacticalGeneralPawnManager*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30CBA78))(this, inPawnSpriteList, camp);
	}
	template <typename T = void> T SpawnSprite(uint32_t teamID, uintptr_t firstChild, uintptr_t* outSprite) {
		return ((T (*)(TacticalGeneralPawnManager*, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x30CCA9C))(this, teamID, firstChild, outSprite);
	}
	template <typename T = void> T RemoveDeadPlayerSprite(Il2CppDictionary<uint32_t, uintptr_t>* playerInfoDict, Il2CppList<uintptr_t>* inPawnSpriteList) {
		return ((T (*)(TacticalGeneralPawnManager*, Il2CppDictionary<uint32_t, uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30CC3B0))(this, playerInfoDict, inPawnSpriteList);
	}
	template <typename T = void> T UpdateSpritePos(uintptr_t inSprite, Il2CppVector3 worldPos) {
		return ((T (*)(TacticalGeneralPawnManager*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x30CCFA8))(this, inSprite, worldPos);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t view, uintptr_t inSprite, uintptr_t playerInfo) {
		return ((T (*)(TacticalGeneralPawnManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30BAB38))(this, view, inSprite, playerInfo);
	}

};

}
