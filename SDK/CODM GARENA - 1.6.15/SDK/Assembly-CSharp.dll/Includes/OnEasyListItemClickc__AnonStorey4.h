#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnEasyListItemClickcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnEasyListItemClick>c__AnonStorey4"));
	}

	template <typename T = uint32_t> T& equipId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnEasyListItemClickcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x1A13E94))(this, x);
	}

};

}
