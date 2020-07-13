#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDefaultSpvpInfocAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDefaultSpvpInfo>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetDefaultSpvpInfocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x43186D4))(this, it);
	}

};

}
