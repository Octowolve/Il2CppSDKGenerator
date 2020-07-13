#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatLoadoutUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatLoadoutUIView"));
	}

	template <typename T = uintptr_t> T& SwitchBagToggle() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& RoundLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
