#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyTabChangedcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<NotifyTabChanged>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(NotifyTabChangedcAnonStorey2*))(Il2CppBase() + 0x34F7FAC))(this);
	}

};

}
