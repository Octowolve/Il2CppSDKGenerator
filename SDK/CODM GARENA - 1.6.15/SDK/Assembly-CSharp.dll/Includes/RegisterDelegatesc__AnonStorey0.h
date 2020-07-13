#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterDelegatescAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RegisterDelegates>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& teammateInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(RegisterDelegatescAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1FA7CC8))(this, x);
	}

};

}
