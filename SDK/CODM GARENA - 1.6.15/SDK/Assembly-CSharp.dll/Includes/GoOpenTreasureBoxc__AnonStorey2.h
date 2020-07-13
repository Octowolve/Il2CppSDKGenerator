#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoOpenTreasureBoxcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GoOpenTreasureBox>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& luckyboxId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GoOpenTreasureBoxcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23A722C))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(GoOpenTreasureBoxcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23A7288))(this, x);
	}

};

}
