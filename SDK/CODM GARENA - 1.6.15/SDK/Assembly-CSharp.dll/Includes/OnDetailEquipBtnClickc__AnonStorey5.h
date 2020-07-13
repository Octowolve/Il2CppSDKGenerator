#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDetailEquipBtnClickcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDetailEquipBtnClick>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$6() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnDetailEquipBtnClickcAnonStorey5*))(Il2CppBase() + 0x1F68460))(this);
	}

};

}
