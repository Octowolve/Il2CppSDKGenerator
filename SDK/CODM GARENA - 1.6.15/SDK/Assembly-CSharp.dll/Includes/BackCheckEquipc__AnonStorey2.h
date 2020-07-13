#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackCheckEquipcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BackCheckEquip>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& equipVehicelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& vehicleId() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(BackCheckEquipcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1A13DEC))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(BackCheckEquipcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1A13E40))(this, x);
	}

};

}
