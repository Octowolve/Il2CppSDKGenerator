#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveLockStateTypecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveLockStateType>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& stateType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RemoveLockStateTypecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4C49DF4))(this, it);
	}

};

}
