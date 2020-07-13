#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NZWheeledVehicleResourceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NZWheeledVehicleResourceManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetResource() {
		return ((T (*)(NZWheeledVehicleResourceManager*))(Il2CppBase() + 0x3EE42AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetResource() {
		return ((T (*)(NZWheeledVehicleResourceManager*))(Il2CppBase() + 0x3EE46C8))(this);
	}

};

}
