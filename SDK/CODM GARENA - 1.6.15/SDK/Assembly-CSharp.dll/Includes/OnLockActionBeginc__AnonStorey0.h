#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLockActionBegincAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLockActionBegin>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& localTrans() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t eff) {
		return ((T (*)(OnLockActionBegincAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3B75C00))(this, eff);
	}

};

}
