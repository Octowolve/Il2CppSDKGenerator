#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSyncBRChipMachineStatcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSyncBRChipMachineStat>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnSyncBRChipMachineStatcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x24FE88C))(this, it);
	}

};

}
