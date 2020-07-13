#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnAddPerkcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnAddPerk>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& perkId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnAddPerkcAnonStorey0*))(Il2CppBase() + 0x2A6081C))(this);
	}

};

}
