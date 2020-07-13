#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotifyBuffAddcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnNotifyBuffAdd>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& buffInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(OnNotifyBuffAddcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x34C77E4))(this, s);
	}

};

}
