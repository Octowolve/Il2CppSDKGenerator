#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatAbs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatAbs"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatAbs*))(Il2CppBase() + 0x504FFE8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatAbs*))(Il2CppBase() + 0x504FFF8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatAbs*))(Il2CppBase() + 0x50500F8))(this);
	}
	template <typename T = void> T DoFloatAbs() {
		return ((T (*)(FloatAbs*))(Il2CppBase() + 0x5050024))(this);
	}

};

}
