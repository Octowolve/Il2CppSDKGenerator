#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateAchiveConfigConfigcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateAchiveConfigConfig>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(UpdateAchiveConfigConfigcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2953B48))(this, it);
	}

};

}
