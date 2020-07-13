#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransferSkydivingAnimcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TransferSkydivingAnim>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t pawn) {
		return ((T (*)(TransferSkydivingAnimcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x35A4530))(this, pawn);
	}

};

}
