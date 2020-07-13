#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitSubTabListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitSubTabList>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& tabItem() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(InitSubTabListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x23C0FF8))(this, item);
	}
	template <typename T = bool> T m__1(uintptr_t item) {
		return ((T (*)(InitSubTabListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x23C1034))(this, item);
	}

};

}
