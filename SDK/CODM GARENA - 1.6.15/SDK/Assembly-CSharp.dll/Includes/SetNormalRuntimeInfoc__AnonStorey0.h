#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetNormalRuntimeInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetNormalRuntimeInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& inType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _Info) {
		return ((T (*)(SetNormalRuntimeInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3C72A78))(this, _Info);
	}

};

}
