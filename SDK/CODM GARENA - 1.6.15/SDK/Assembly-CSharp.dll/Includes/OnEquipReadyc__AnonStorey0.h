#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnEquipReadycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnEquipReady>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& _avatar() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnEquipReadycAnonStorey0*))(Il2CppBase() + 0x34180F0))(this);
	}

};

}
