#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class GotoCombatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "GotoCombatConfig"));
	}

	template <typename T = uintptr_t> T& GotoCombatAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fixedGotoCombatTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_animLen() {
		return ((T (*)(GotoCombatConfig*))(Il2CppBase() + 0x45FFAF4))(this);
	}

};

}
