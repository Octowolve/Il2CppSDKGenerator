#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClearItemcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ClearItem>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(ClearItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2DA4994))(this, _item);
	}

};

}
