#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LadderStepMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LadderStepMover"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& m_PosList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Step() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Ready() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Evaluate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T set_TotalTime(float value) {
		return ((T (*)(LadderStepMover*, float))(Il2CppBase() + 0x16BC638))(this, value);
	}
	template <typename T = float> T get_TotalTime() {
		return ((T (*)(LadderStepMover*))(Il2CppBase() + 0x16BC844))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LadderStepMover*))(Il2CppBase() + 0x16BC55C))(this);
	}
	template <typename T = void> T AddPosition(Il2CppVector3 v) {
		return ((T (*)(LadderStepMover*, Il2CppVector3))(Il2CppBase() + 0x16BC640))(this, v);
	}
	template <typename T = void> T Ready() {
		return ((T (*)(LadderStepMover*))(Il2CppBase() + 0x16BC74C))(this);
	}
	template <typename T = Il2CppVector3> T Evaluate(float time) {
		return ((T (*)(LadderStepMover*, float))(Il2CppBase() + 0x16BC84C))(this, time);
	}

};

}
