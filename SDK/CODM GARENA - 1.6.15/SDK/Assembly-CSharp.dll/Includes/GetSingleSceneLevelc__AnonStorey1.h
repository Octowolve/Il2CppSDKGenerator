#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSingleSceneLevelcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetSingleSceneLevel>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& scenePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetSingleSceneLevelcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4AA7FFC))(this, e);
	}

};

}
