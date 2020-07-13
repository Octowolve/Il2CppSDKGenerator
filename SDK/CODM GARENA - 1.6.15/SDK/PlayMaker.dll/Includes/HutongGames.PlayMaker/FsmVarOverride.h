#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmVarOverride
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmVarOverride"));
	}

	template <typename T = uintptr_t> T& variable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fsmVar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isEdited() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Apply(uintptr_t variables) {
		return ((T (*)(FsmVarOverride*, uintptr_t))(Il2CppBase() + 0x2F16CBC))(this, variables);
	}

};

}
