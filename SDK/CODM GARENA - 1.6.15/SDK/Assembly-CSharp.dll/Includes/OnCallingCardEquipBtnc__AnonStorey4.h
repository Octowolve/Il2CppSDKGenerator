#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCallingCardEquipBtncAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnCallingCardEquipBtn>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& selectCard() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnCallingCardEquipBtncAnonStorey4*, uintptr_t))(Il2CppBase() + 0x29157CC))(this, x);
	}

};

}
