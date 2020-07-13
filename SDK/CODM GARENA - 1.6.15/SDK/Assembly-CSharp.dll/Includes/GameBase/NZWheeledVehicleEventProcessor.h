#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledVehicleEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledVehicleEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(NZWheeledVehicleEventProcessor*))(Il2CppBase() + 0x1A00540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(NZWheeledVehicleEventProcessor*))(Il2CppBase() + 0x1A00694))(this);
	}

};

}
