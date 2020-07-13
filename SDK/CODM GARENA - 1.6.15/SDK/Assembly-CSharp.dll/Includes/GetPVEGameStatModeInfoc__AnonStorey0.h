#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPVEGameStatModeInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPVEGameStatModeInfo>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& diff() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetPVEGameStatModeInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x53212A0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetPVEGameStatModeInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x53212E4))(this, it);
	}

};

}
