#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBrPlayerRankInfocAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBrPlayerRankInfo>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetBrPlayerRankInfocAnonStorey3*))(Il2CppBase() + 0x37FBF34))(this);
	}

};

}
