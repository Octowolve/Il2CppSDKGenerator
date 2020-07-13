#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreatecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ragdollLogic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(CreatecAnonStorey0*))(Il2CppBase() + 0x2DDBDD4))(this);
	}

};

}
