#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDeviceUIAdaptConfigcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDeviceUIAdaptConfig>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& deviceName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetDeviceUIAdaptConfigcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4641E80))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t e) {
		return ((T (*)(GetDeviceUIAdaptConfigcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4641F5C))(this, e);
	}

};

}
