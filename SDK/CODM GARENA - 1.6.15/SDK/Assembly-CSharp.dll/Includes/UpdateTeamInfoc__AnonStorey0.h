#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateTeamInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateTeamInfo>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t i) {
		return ((T (*)(UpdateTeamInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3AA11DC))(this, i);
	}

};

}
