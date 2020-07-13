#pragma once
#include <Il2Cpp/Il2Cpp.h>

class makeReflectionWrapcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<makeReflectionWrap>c__AnonStorey6"));
	}

	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(makeReflectionWrapcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x4DD5D38))(this, e);
	}

};

}
