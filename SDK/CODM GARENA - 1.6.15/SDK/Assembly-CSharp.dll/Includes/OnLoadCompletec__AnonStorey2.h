#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLoadCompletecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLoadComplete>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(OnLoadCompletecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x24E1234))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(OnLoadCompletecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x24E1268))(this, s);
	}

};

}
