#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRPickupPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRPickupPoint"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SubPointList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ColorfulEggGroup() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& EnableGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRPickupPoint*))(Il2CppBase() + 0x52FA65C))(this);
	}

};

}
