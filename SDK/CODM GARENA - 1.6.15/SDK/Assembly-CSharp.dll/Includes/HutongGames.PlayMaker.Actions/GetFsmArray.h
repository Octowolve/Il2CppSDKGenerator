#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmArray"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& variableName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& copyValues() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmArray*))(Il2CppBase() + 0x508916C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmArray*))(Il2CppBase() + 0x5089248))(this);
	}
	template <typename T = void> T DoSetFsmArrayCopy() {
		return ((T (*)(GetFsmArray*))(Il2CppBase() + 0x5089268))(this);
	}

};

}
