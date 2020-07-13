#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Share2PlatformcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Share2Platform>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t texture) {
		return ((T (*)(Share2PlatformcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x34EEA30))(this, texture);
	}

};

}
