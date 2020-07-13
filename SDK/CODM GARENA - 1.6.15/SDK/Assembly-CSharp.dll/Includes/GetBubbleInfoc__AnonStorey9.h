#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBubbleInfocAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBubbleInfo>c__AnonStorey9"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(int32_t it) {
		return ((T (*)(GetBubbleInfocAnonStorey9*, int32_t))(Il2CppBase() + 0x3AD1F38))(this, it);
	}

};

}
