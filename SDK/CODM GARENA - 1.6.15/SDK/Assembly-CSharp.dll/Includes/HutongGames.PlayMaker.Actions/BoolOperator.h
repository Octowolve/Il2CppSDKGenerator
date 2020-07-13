#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolOperator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolOperator"));
	}

	template <typename T = uintptr_t> T& bool1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bool2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolOperator*))(Il2CppBase() + 0x4F347E4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolOperator*))(Il2CppBase() + 0x4F3482C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BoolOperator*))(Il2CppBase() + 0x4F34928))(this);
	}
	template <typename T = void> T DoBoolOperator() {
		return ((T (*)(BoolOperator*))(Il2CppBase() + 0x4F34858))(this);
	}

};

}
