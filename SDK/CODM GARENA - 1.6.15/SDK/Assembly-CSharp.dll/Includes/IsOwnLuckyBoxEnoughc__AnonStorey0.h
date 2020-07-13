#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsOwnLuckyBoxEnoughcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsOwnLuckyBoxEnough>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& boxId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(IsOwnLuckyBoxEnoughcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x393D040))(this, item);
	}

};

}
