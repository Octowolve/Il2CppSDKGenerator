#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetUnlockDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetUnlockData>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetUnlockDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A78428))(this, s);
	}

};

}
