#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoSpawnSnowTrackcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoSpawnSnowTrack>c__AnonStorey0"));
	}

	template <typename T = bool> T& isLeft() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hitObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t effect) {
		return ((T (*)(DoSpawnSnowTrackcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x260BBD4))(this, effect);
	}

};

}