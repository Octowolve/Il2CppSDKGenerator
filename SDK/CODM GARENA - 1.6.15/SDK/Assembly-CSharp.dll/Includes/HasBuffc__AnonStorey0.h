#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HasBuffcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HasBuff>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& buffID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t e) {
		return ((T (*)(HasBuffcAnonStorey0*, int32_t))(Il2CppBase() + 0x1DEA44C))(this, e);
	}

};

}
