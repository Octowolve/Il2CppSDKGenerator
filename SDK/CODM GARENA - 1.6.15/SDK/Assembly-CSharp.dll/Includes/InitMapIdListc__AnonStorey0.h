#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitMapIdListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitMapIdList>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& mapid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(InitMapIdListcAnonStorey0*, uint32_t))(Il2CppBase() + 0x3B28910))(this, it);
	}

};

}
