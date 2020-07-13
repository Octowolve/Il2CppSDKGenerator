#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NZVehicleWheelBrokenComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NZVehicleWheelBrokenComponent"));
	}

	template <typename T = float> T& BrokenWheelRadius() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BrokenWheelLatStiffMaxLoad() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& BrokenWheelLatStiffValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BrokenWheelLongStiffValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& BrokenTireFrictionScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NZVehicleWheelBrokenComponent*))(Il2CppBase() + 0x3EE3EC0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(NZVehicleWheelBrokenComponent*))(Il2CppBase() + 0x3EE3FE8))(this);
	}

};

}
