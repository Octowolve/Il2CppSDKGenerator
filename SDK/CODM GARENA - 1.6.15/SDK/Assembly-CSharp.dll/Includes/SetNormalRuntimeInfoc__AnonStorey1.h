#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetNormalRuntimeInfocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetNormalRuntimeInfo>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& inType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _Info) {
		return ((T (*)(SetNormalRuntimeInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3C72AAC))(this, _Info);
	}

};

}
