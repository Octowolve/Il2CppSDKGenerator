#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateLDLevelBtncAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateLDLevelBtn>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& levelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t Obj) {
		return ((T (*)(CreateLDLevelBtncAnonStorey2*, uintptr_t))(Il2CppBase() + 0x232794C))(this, Obj);
	}

};

}
