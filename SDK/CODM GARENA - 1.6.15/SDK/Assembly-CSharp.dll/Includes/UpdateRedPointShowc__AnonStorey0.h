#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateRedPointShowcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateRedPointShow>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& nCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(bool it) {
		return ((T (*)(UpdateRedPointShowcAnonStorey0*, bool))(Il2CppBase() + 0x34FDF98))(this, it);
	}

};

}
