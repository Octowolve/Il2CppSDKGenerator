#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideRideVehicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_RideVehicle"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideRideVehicle*))(Il2CppBase() + 0x499FF18))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideRideVehicle*, uintptr_t))(Il2CppBase() + 0x49A0160))(this, ID);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideRideVehicle*))(Il2CppBase() + 0x49A03B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideRideVehicle*, uintptr_t))(Il2CppBase() + 0x49A03BC))(this, P0);
	}

};

}
