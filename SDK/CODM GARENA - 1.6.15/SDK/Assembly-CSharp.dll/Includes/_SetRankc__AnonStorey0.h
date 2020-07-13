#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetRankcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<_SetRank>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetRankcAnonStorey0*))(Il2CppBase() + 0x3823E18))(this);
	}

};

}
