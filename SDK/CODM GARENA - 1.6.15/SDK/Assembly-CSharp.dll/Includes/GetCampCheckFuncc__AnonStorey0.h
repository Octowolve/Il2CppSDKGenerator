#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCampCheckFunccAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetCampCheckFunc>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& winningCamp() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t campInt) {
		return ((T (*)(GetCampCheckFunccAnonStorey0*, int32_t))(Il2CppBase() + 0x2A39538))(this, campInt);
	}

};

}
