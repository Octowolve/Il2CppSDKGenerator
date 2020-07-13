#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUpperItemDataListByMergecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUpperItemDataListByMerge>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(GetUpperItemDataListByMergecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1B13470))(this, _item);
	}

};

}
