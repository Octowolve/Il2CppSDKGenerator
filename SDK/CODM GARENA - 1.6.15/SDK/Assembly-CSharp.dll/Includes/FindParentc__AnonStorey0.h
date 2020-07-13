#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindParentcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindParent>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& parentInstanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(FindParentcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x487EE98))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(FindParentcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x487EECC))(this, x);
	}

};

}
