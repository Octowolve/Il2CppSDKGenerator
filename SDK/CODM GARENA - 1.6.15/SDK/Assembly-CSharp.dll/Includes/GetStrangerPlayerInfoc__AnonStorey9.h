#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetStrangerPlayerInfocAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetStrangerPlayerInfo>c__AnonStorey9"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetStrangerPlayerInfocAnonStorey9*, uintptr_t))(Il2CppBase() + 0x1D3D61C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetStrangerPlayerInfocAnonStorey9*, uintptr_t))(Il2CppBase() + 0x1D3D660))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetStrangerPlayerInfocAnonStorey9*, uintptr_t))(Il2CppBase() + 0x1D3D6A4))(this, it);
	}

};

}
