#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WaitForBoolValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WaitForBoolValue"));
	}

	template <typename T = uintptr_t> T& boolean1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& boolean2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(WaitForBoolValue*))(Il2CppBase() + 0x4F1F238))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WaitForBoolValue*))(Il2CppBase() + 0x4F1F2AC))(this);
	}
	template <typename T = void> T Check() {
		return ((T (*)(WaitForBoolValue*))(Il2CppBase() + 0x4F1F23C))(this);
	}

};

}
