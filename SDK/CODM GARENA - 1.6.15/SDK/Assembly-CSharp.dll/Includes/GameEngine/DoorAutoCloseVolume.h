#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DoorAutoCloseVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DoorAutoCloseVolume"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CloseDoorArray() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
