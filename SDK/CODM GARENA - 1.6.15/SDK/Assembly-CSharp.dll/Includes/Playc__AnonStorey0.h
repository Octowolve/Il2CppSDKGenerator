#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Play>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t t) {
		return ((T (*)(PlaycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x367696C))(this, t);
	}

};

}