#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LazyReflectionCallcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LazyReflectionCall>c__AnonStorey7"));
	}

	template <typename T = Il2CppString*> T& memberName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t m) {
		return ((T (*)(LazyReflectionCallcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x4DD5C58))(this, m);
	}

};

}
