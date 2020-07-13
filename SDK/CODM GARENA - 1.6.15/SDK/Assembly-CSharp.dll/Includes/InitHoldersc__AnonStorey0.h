#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitHolderscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitHolders>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(InitHolderscAnonStorey0*))(Il2CppBase() + 0x423FE28))(this);
	}

};

}
