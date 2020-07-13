#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CaleDetailDamagecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CaleDetailDamage>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& hitTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CaleDetailDamagecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x23EA500))(this, x);
	}

};

}
