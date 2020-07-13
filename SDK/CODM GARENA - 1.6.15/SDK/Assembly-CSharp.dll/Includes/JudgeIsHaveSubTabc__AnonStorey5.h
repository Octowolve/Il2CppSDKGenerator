#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JudgeIsHaveSubTabcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<JudgeIsHaveSubTab>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& mainTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t tagItem) {
		return ((T (*)(JudgeIsHaveSubTabcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x23C10E8))(this, tagItem);
	}

};

}
