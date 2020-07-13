#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnableShadowTogglecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EnableShadowToggle>c__AnonStorey1"));
	}

	template <typename T = bool> T& bEnable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& enough2Enable() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(EnableShadowTogglecAnonStorey1*))(Il2CppBase() + 0x28AE7B0))(this);
	}

};

}
