#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDefaultBrInfocAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDefaultBrInfo>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(int32_t it) {
		return ((T (*)(GetDefaultBrInfocAnonStorey4*, int32_t))(Il2CppBase() + 0x3AD20B8))(this, it);
	}

};

}
