#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSquadDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetSquadData>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetSquadDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3935920))(this, it);
	}

};

}
