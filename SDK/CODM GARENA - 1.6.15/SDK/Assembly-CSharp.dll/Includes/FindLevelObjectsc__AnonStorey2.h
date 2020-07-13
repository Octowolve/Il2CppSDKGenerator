#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindLevelObjectscAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindLevelObjects>c__AnonStorey2"));
	}

	template <typename T = Il2CppString*> T& note() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(FindLevelObjectscAnonStorey2*, uintptr_t))(Il2CppBase() + 0x372AD94))(this, e);
	}

};

}
