#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatAdd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatAdd"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& add() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatAdd*))(Il2CppBase() + 0x5050104))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatAdd*))(Il2CppBase() + 0x5050118))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatAdd*))(Il2CppBase() + 0x50501DC))(this);
	}
	template <typename T = void> T DoFloatAdd() {
		return ((T (*)(FloatAdd*))(Il2CppBase() + 0x5050144))(this);
	}

};

}
