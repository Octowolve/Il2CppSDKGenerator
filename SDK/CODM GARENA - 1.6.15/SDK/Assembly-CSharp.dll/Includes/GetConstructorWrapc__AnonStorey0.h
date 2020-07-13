#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConstructorWrapcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConstructorWrap>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(GetConstructorWrapcAnonStorey0*, uintptr_t))(Il2CppBase() + 0xF4B250))(this, L);
	}

};

}
