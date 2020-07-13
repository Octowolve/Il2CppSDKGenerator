#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BaseFsmVariableAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BaseFsmVariableAction"));
	}

	template <typename T = uintptr_t> T& fsmNotFound() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& variableNotFound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& cachedGameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& cachedFsmName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BaseFsmVariableAction*))(Il2CppBase() + 0x4F33308))(this);
	}
	template <typename T = bool> T UpdateCache(uintptr_t go, Il2CppString* fsmName) {
		return ((T (*)(BaseFsmVariableAction*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4F33314))(this, go, fsmName);
	}
	template <typename T = void> T DoVariableNotFound(Il2CppString* variableName) {
		return ((T (*)(BaseFsmVariableAction*, Il2CppString*))(Il2CppBase() + 0x4F335E4))(this, variableName);
	}

};

}
