#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckDeviceClassAsynccAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckDeviceClassAsync>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& vendor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& renderer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& configureDomainName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& handler() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(CheckDeviceClassAsynccAnonStorey0*))(Il2CppBase() + 0x45147C0))(this);
	}

};

}
