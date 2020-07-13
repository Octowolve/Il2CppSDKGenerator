#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmVariables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmVariables"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& getVariables() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& cachedGO() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceFsm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sourceVariables() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetVariables() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmVariables*))(Il2CppBase() + 0x508CBC8))(this);
	}
	template <typename T = void> T InitFsmVars() {
		return ((T (*)(GetFsmVariables*))(Il2CppBase() + 0x508CC98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmVariables*))(Il2CppBase() + 0x508D170))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmVariables*))(Il2CppBase() + 0x508D29C))(this);
	}
	template <typename T = void> T DoGetFsmVariables() {
		return ((T (*)(GetFsmVariables*))(Il2CppBase() + 0x508D1A4))(this);
	}

};

}
