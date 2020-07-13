#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBoxPickupPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBoxPickupPoint"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsFixedPickupPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SubBoxPointList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& EnableGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRBoxPickupPoint*))(Il2CppBase() + 0x35C3924))(this);
	}

};

}
