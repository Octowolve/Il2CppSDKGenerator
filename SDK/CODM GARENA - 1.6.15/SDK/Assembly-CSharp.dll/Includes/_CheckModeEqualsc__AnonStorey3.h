#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckModeEqualscAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<_CheckModeEquals>c__AnonStorey3"));
	}

	template <typename T = uint32_t> T& forceModeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(CheckModeEqualscAnonStorey3*, uint32_t))(Il2CppBase() + 0x433D374))(this, it);
	}

};

}
