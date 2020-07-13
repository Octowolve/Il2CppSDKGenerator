#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLevelInfocAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLevelInfo>c__AnonStorey2"));
	}

	template <typename T = Il2CppString*> T& levelName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetLevelInfocAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4AA7D64))(this, e);
	}

};

}
