#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerMPMapOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_MPMapOB"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelfShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerMPMapOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D66AC))(this, inSprite, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSelfShowOnMap(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalLocalPawnManagerMPMapOB*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D69D4))(this, P0, P1);
	}

};

}
