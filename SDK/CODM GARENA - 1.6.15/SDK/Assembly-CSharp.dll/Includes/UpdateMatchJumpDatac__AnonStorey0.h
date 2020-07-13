#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMatchJumpDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateMatchJumpData>c__AnonStorey0"));
	}

	template <typename T = void*> T& itemidList() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(int32_t x) {
		return ((T (*)(UpdateMatchJumpDatacAnonStorey0*, int32_t))(Il2CppBase() + 0x3504084))(this, x);
	}

};

}
