#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerBRMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_BRMap"));
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

	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBRMap*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D438C))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn, uintptr_t pawnState) {
		return ((T (*)(TacticalLocalPawnManagerBRMap*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D47B8))(this, inSprite, inPawn, pawnState);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerBRMap*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D49D0))(this, P0, P1);
	}

};

}
