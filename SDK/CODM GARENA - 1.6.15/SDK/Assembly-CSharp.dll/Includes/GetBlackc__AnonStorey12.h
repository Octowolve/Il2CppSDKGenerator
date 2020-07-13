#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBlackcAnonStorey12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBlack>c__AnonStorey12"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetBlackcAnonStorey12*, uintptr_t))(Il2CppBase() + 0x3CF9A18))(this, it);
	}

};

}
