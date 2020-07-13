#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenShotTexturecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScreenShotTexture>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& toFriend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t texture) {
		return ((T (*)(ScreenShotTexturecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4309AF0))(this, texture);
	}

};

}
