#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsGoodscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsGoods>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& idStr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsGoodscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x235B4FC))(this, it);
	}

};

}
