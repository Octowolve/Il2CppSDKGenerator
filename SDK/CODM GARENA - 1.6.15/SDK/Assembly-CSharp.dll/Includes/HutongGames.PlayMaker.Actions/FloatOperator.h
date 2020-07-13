#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatOperator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatOperator"));
	}

	template <typename T = uintptr_t> T& float1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& float2() {
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
		return ((T (*)(FloatOperator*))(Il2CppBase() + 0x5050F28))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatOperator*))(Il2CppBase() + 0x5050F40))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatOperator*))(Il2CppBase() + 0x5051150))(this);
	}
	template <typename T = void> T DoFloatOperator() {
		return ((T (*)(FloatOperator*))(Il2CppBase() + 0x5050F6C))(this);
	}

};

}
