#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSettlementInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetSettlementInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetSettlementInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3B38D94))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(SetSettlementInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3B38DE4))(this, s);
	}

};

}
