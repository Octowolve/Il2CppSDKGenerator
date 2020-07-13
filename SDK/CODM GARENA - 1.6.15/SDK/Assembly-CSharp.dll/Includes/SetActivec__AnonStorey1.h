#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetActivecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetActive>c__AnonStorey1"));
	}

	template <typename T = bool> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& enableOptimize() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetActivecAnonStorey1*))(Il2CppBase() + 0x18E0C3C))(this);
	}

};

}
