#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class VehiclePawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "VehiclePawnEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(VehiclePawnEventProcessor*))(Il2CppBase() + 0x3F23870))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(VehiclePawnEventProcessor*))(Il2CppBase() + 0x3F23920))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VehiclePawnEventProcessor*))(Il2CppBase() + 0x3F239B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(VehiclePawnEventProcessor*))(Il2CppBase() + 0x3F239C0))(this);
	}

};

}
