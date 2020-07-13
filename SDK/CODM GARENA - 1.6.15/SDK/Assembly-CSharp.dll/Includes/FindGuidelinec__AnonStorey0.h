#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuidelinecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindGuideline>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t guideline) {
		return ((T (*)(FindGuidelinecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4B16678))(this, guideline);
	}

};

}
