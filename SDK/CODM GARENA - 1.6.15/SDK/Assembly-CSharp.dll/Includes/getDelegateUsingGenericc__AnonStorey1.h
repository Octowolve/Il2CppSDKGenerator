#pragma once
#include <Il2Cpp/Il2Cpp.h>

class getDelegateUsingGenericcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<getDelegateUsingGeneric>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& methodInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t o) {
		return ((T (*)(getDelegateUsingGenericcAnonStorey1*, uintptr_t))(Il2CppBase() + 0xF5A53C))(this, o);
	}

};

}
