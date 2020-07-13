#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSkillConfByTypecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetSkillConfByType>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& ultType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetSkillConfByTypecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x30F1A4C))(this, x);
	}

};

}
