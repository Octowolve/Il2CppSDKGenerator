#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapIDByLevelNamecAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapIDByLevelName>c__AnonStorey5"));
	}

	template <typename T = Il2CppString*> T& levelName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMapIDByLevelNamecAnonStorey5*, uintptr_t))(Il2CppBase() + 0x4AA7EFC))(this, e);
	}

};

}
