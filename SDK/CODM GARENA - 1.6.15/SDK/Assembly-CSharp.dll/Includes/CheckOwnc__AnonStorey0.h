#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckOwncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckOwn>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& buffId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t it) {
		return ((T (*)(CheckOwncAnonStorey0*, int32_t))(Il2CppBase() + 0x2A4CF88))(this, it);
	}

};

}
