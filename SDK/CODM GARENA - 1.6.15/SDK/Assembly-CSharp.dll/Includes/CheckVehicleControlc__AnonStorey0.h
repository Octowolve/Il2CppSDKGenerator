#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckVehicleControlcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckVehicleControl>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(CheckVehicleControlcAnonStorey0*))(Il2CppBase() + 0x2E8B9E4))(this);
	}

};

}
