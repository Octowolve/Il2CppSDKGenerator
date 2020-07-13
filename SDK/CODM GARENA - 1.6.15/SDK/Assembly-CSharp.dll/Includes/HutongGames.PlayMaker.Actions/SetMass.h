#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMass"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mass() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMass*))(Il2CppBase() + 0x50284A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMass*))(Il2CppBase() + 0x50284D0))(this);
	}
	template <typename T = void> T DoSetMass() {
		return ((T (*)(SetMass*))(Il2CppBase() + 0x50284F0))(this);
	}

};

}
