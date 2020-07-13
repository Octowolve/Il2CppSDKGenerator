#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsBubbleReachTargetcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsBubbleReachTarget>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsBubbleReachTargetcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x47FDCA8))(this, it);
	}

};

}
