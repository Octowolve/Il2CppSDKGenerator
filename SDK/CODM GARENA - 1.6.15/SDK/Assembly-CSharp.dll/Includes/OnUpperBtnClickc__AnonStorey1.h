#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnUpperBtnClickcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnUpperBtnClick>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(OnUpperBtnClickcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1B135C0))(this, _item);
	}

};

}
