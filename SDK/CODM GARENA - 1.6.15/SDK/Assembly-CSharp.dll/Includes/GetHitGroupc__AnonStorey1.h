#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetHitGroupcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetHitGroup>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& hitObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetHitGroupcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3EA34AC))(this, e);
	}

};

}
