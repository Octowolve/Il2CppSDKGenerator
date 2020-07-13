#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatClamp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatClamp"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& minValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& maxValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatClamp*))(Il2CppBase() + 0x505041C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatClamp*))(Il2CppBase() + 0x5050434))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatClamp*))(Il2CppBase() + 0x5050584))(this);
	}
	template <typename T = void> T DoClamp() {
		return ((T (*)(FloatClamp*))(Il2CppBase() + 0x5050460))(this);
	}

};

}
