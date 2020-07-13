#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateCallingCardEquipBtncAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateCallingCardEquipBtn>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& selectCard() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(UpdateCallingCardEquipBtncAnonStorey3*, uintptr_t))(Il2CppBase() + 0x291588C))(this, x);
	}

};

}
