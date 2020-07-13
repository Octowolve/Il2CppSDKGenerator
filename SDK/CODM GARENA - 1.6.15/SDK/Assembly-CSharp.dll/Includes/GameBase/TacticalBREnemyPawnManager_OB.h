#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBREnemyPawnManagerOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBREnemyPawnManager_OB"));
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
		return ((T (*)(TacticalBREnemyPawnManagerOB*))(Il2CppBase() + 0x30BA4D0))(this);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t view, uintptr_t inSprite, uintptr_t playerInfo) {
		return ((T (*)(TacticalBREnemyPawnManagerOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30BA5A0))(this, view, inSprite, playerInfo);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBREnemyPawnManagerOB*))(Il2CppBase() + 0x30BA7D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalBREnemyPawnManagerOB*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30BAB20))(this, P0, P1, P2);
	}

};

}
