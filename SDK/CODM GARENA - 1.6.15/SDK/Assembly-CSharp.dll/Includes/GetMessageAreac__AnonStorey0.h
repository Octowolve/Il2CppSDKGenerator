#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMessageAreacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMessageArea>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& inPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMessageAreacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1F0B3C4))(this, e);
	}

};

}
