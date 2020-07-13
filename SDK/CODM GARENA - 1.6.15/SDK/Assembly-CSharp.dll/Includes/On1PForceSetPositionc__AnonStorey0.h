#pragma once
#include <Il2Cpp/Il2Cpp.h>

class On1PForceSetPositioncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<On1PForceSetPosition>c__AnonStorey0"));
	}

	template <typename T = Il2CppVector3> T& serPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(On1PForceSetPositioncAnonStorey0*))(Il2CppBase() + 0x35A19A4))(this);
	}

};

}
