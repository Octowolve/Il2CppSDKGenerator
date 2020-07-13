#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectricShockCarInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectricShockCarInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& HasAddMsg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ElectricShockCar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NeedCalculateCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ViewTarget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
