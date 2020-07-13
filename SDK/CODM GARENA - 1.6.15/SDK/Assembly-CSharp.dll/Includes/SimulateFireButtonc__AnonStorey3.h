#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimulateFireButtoncAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SimulateFireButton>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& fingerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _input) {
		return ((T (*)(SimulateFireButtoncAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2456C24))(this, _input);
	}

};

}
