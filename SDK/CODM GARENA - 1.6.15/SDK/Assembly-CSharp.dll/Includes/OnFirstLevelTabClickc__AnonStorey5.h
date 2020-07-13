#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnFirstLevelTabClickcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnFirstLevelTabClick>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& playlistType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnFirstLevelTabClickcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x212CF2C))(this, it);
	}

};

}
