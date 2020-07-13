#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCompositeUnlockLevelcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetCompositeUnlockLevel>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& compositeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetCompositeUnlockLevelcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3773344))(this, it);
	}

};

}
