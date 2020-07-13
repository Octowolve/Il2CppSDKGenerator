#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSelectItemDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetSelectItemData>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& itemInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetSelectItemDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4012100))(this, s);
	}

};

}
