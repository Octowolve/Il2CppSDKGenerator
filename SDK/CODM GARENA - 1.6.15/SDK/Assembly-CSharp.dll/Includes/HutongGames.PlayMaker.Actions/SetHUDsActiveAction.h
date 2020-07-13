#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetHUDsActiveAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetHUDsActiveAction"));
	}

	template <typename T = bool> T& IsActive() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HUDFullNames() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SetHUDsActiveAction*))(Il2CppBase() + 0x5026448))(this);
	}

};

}
