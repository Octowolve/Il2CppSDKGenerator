#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DroneKillerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DroneKillerInfo"));
	}

	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Drone() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
