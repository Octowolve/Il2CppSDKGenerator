#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionLowPassFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionLowPassFilter"));
	}

	template <typename T = uintptr_t> T& quaternionVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& filteringFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& filteredQuaternion() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D81124))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D81160))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D81250))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D8147C))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D8148C))(this);
	}
	template <typename T = void> T DoQuatLowPassFilter() {
		return ((T (*)(QuaternionLowPassFilter*))(Il2CppBase() + 0x4D81260))(this);
	}

};

}
