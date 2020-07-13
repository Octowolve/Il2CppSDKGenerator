#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindTeamMateItemcAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindTeamMateItem>c__AnonStorey8"));
	}

	template <typename T = uint32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FindTeamMateItemcAnonStorey8*, uintptr_t))(Il2CppBase() + 0x3DCE804))(this, it);
	}

};

}
