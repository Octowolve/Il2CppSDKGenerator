#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetChipMachinecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetChipMachine>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetChipMachinecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x24FE858))(this, it);
	}

};

}
