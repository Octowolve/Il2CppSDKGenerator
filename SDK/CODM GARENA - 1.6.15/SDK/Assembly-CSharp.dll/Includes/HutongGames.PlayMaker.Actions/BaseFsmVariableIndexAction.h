#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BaseFsmVariableIndexAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BaseFsmVariableIndexAction"));
	}

	template <typename T = uintptr_t> T& indexOutOfRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmNotFound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& variableNotFound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cachedGameObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& cachedFsmName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BaseFsmVariableIndexAction*))(Il2CppBase() + 0x4F336F0))(this);
	}
	template <typename T = bool> T UpdateCache(uintptr_t go, Il2CppString* fsmName) {
		return ((T (*)(BaseFsmVariableIndexAction*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4F336FC))(this, go, fsmName);
	}
	template <typename T = void> T DoVariableNotFound(Il2CppString* variableName) {
		return ((T (*)(BaseFsmVariableIndexAction*, Il2CppString*))(Il2CppBase() + 0x4F339CC))(this, variableName);
	}

};

}
