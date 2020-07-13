#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsServerOTOOpencAnonStoreyF
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsServerOTOOpen>c__AnonStoreyF"));
	}

	template <typename T = int32_t> T& otoOrder() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsServerOTOOpencAnonStoreyF*, uintptr_t))(Il2CppBase() + 0x236B398))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(IsServerOTOOpencAnonStoreyF*, uintptr_t))(Il2CppBase() + 0x236B3DC))(this, x);
	}

};

}
