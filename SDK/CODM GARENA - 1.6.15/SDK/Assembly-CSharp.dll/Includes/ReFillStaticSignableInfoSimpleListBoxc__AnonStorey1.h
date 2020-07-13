#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReFillStaticSignableInfoSimpleListBoxcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReFillStaticSignableInfoSimpleListBox>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& IndicatorType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t Signable) {
		return ((T (*)(ReFillStaticSignableInfoSimpleListBoxcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x38EB4EC))(this, Signable);
	}

};

}
