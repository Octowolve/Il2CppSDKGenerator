#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleAxle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleAxle"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& wheels() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& motor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& steering() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}