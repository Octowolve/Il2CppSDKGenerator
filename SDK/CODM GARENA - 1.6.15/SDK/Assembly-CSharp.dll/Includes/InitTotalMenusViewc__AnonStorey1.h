#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitTotalMenusViewcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitTotalMenusView>c__AnonStorey1"));
	}

	template <typename T = bool> T& bInit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(InitTotalMenusViewcAnonStorey1*))(Il2CppBase() + 0x34F7D88))(this);
	}

};

}
