#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnBRChipMachinecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnBRChipMachine>c__AnonStorey1"));
	}

	template <typename T = uint32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SpawnBRChipMachinecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x24FE8C8))(this, it);
	}

};

}
