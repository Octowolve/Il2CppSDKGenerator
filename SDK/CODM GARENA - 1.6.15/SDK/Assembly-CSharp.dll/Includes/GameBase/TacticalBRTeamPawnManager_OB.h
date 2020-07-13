#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRTeamPawnManagerOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRTeamPawnManager_OB"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRTeamPawnManagerOB*))(Il2CppBase() + 0x30C9964))(this);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t view, uintptr_t inSprite, uintptr_t playerInfo) {
		return ((T (*)(TacticalBRTeamPawnManagerOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30C9A34))(this, view, inSprite, playerInfo);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRTeamPawnManagerOB*))(Il2CppBase() + 0x30C9C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalBRTeamPawnManagerOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30C9C6C))(this, P0, P1, P2);
	}

};

}
