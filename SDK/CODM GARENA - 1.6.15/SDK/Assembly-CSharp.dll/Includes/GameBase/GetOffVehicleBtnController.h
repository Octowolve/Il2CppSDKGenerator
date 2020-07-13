#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GetOffVehicleBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GetOffVehicleBtnController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetoffButtonSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GetOffVehicleBtnController*))(Il2CppBase() + 0x1EC9F6C))(this);
	}
	template <typename T = void> T InitFromConfig() {
		return ((T (*)(GetOffVehicleBtnController*))(Il2CppBase() + 0x1ECA010))(this);
	}
	template <typename T = void> T SetGetoffButtonSprite(uintptr_t vehicleType) {
		return ((T (*)(GetOffVehicleBtnController*, uintptr_t))(Il2CppBase() + 0x1ECA208))(this, vehicleType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GetOffVehicleBtnController*))(Il2CppBase() + 0x1ECA378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig() {
		return ((T (*)(GetOffVehicleBtnController*))(Il2CppBase() + 0x1ECA380))(this);
	}

};

}
