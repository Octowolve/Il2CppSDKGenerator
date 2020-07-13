#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLiveOpsTopMenuListcAnonStorey12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLiveOpsTopMenuList>c__AnonStorey12"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLiveOpsTopMenuListcAnonStorey12*, uintptr_t))(Il2CppBase() + 0x3531A28))(this, it);
	}

};

}
