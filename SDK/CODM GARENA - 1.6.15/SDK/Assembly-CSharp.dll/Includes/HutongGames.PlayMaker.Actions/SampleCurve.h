#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SampleCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SampleCurve"));
	}

	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sampleAt() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SampleCurve*))(Il2CppBase() + 0x4FACA44))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SampleCurve*))(Il2CppBase() + 0x4FACA5C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SampleCurve*))(Il2CppBase() + 0x4FACAF8))(this);
	}
	template <typename T = void> T DoSampleCurve() {
		return ((T (*)(SampleCurve*))(Il2CppBase() + 0x4FACA88))(this);
	}

};

}
