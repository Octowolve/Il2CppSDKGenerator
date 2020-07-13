#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IsWeaponEquippedAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IsWeaponEquippedAction"));
	}

	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TrueEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FalseEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(IsWeaponEquippedAction*))(Il2CppBase() + 0x4F0AEC8))(this);
	}

};

}
