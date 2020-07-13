#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatAddMultiple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatAddMultiple"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& floatVariables() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& addTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatAddMultiple*))(Il2CppBase() + 0x50501E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatAddMultiple*))(Il2CppBase() + 0x50501FC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatAddMultiple*))(Il2CppBase() + 0x50502E8))(this);
	}
	template <typename T = void> T DoFloatAdd() {
		return ((T (*)(FloatAddMultiple*))(Il2CppBase() + 0x5050228))(this);
	}

};

}
