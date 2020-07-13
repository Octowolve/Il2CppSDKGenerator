#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLoadoutUnlockLevelcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLoadoutUnlockLevel>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& unlockType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& unlockIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& unlockId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLoadoutUnlockLevelcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x377338C))(this, it);
	}

};

}
