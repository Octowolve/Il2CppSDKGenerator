#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AwakecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Awake>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t Obj) {
		return ((T (*)(AwakecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x23278BC))(this, Obj);
	}

};

}
