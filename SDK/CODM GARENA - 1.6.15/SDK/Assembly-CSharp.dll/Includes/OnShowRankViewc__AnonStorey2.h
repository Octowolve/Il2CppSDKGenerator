#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnShowRankViewcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnShowRankView>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& modeIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& subIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnShowRankViewcAnonStorey2*))(Il2CppBase() + 0x387C678))(this);
	}

};

}
