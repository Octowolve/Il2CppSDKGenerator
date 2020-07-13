#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IENormalcAnonStoreyB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IENormal>c__AnonStoreyB"));
	}

	template <typename T = uintptr_t> T& tween() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$8() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0() {
		return ((T (*)(IENormalcAnonStoreyB*))(Il2CppBase() + 0x297D7FC))(this);
	}

};

}
