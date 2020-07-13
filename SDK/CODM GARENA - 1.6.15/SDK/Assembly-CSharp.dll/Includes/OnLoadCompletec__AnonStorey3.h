#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLoadCompletecAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLoadComplete>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& weaponInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t a) {
		return ((T (*)(OnLoadCompletecAnonStorey3*, uintptr_t))(Il2CppBase() + 0x24E129C))(this, a);
	}

};

}
