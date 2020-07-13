#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigureBattleInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConfigureBattleInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& battleInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ConfigureBattleInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x32B465C))(this, it);
	}

};

}
