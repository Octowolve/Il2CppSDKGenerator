#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddNtfDatacAnonStorey1B
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddNtfData>c__AnonStorey1B"));
	}

	template <typename T = uintptr_t> T& stateInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddNtfDatacAnonStorey1B*, uintptr_t))(Il2CppBase() + 0x3CF97E4))(this, it);
	}

};

}
