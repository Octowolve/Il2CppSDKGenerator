#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRTDMTeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRTDMTeamPawnManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& inPawnSpriteList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& emptyObjectPool() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& AllySpriteList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& AliveAllies() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAllies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpritePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDeadPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRTDMTeamPawnManager*))(Il2CppBase() + 0x30C5F68))(this);
	}
	template <typename T = void> T UpdateAllies() {
		return ((T (*)(TacticalBRTDMTeamPawnManager*))(Il2CppBase() + 0x30C600C))(this);
	}
	template <typename T = void> T SpawnSprite(uintptr_t firstChild, uintptr_t* outSprite) {
		return ((T (*)(TacticalBRTDMTeamPawnManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x30C6920))(this, firstChild, outSprite);
	}
	template <typename T = void> T UpdateSpritePos(uintptr_t inSprite, Il2CppVector3 worldPos, Il2CppVector3 worldRot) {
		return ((T (*)(TacticalBRTDMTeamPawnManager*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x30C6BA4))(this, inSprite, worldPos, worldRot);
	}
	template <typename T = void> T RemoveDeadPlayers() {
		return ((T (*)(TacticalBRTDMTeamPawnManager*))(Il2CppBase() + 0x30C6DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRTDMTeamPawnManager*))(Il2CppBase() + 0x30C735C))(this);
	}

};

}
