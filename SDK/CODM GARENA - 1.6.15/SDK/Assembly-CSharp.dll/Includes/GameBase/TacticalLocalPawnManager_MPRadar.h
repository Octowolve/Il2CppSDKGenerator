#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerMPRadar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_MPRadar"));
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

	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerMPRadar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D6A78))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerMPRadar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D6C54))(this, P0, P1);
	}

};

}
