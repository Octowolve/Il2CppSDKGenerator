#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class GuardDogInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "GuardDogInitializeData"));
	}

	template <typename T = int16_t> T& AirplaneID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AliveTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& actorRoot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
