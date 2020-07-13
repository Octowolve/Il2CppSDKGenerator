#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContainLevelObjectcAnonStorey01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ContainLevelObject>c__AnonStorey0`1"));
	}

	template <typename T = uint32_t> T& uid() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(ContainLevelObjectcAnonStorey01*, uintptr_t))(Il2CppBase() + 0x48D26D8))(this, e);
	}

};

}
