#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DriveVehicleBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DriveVehicleBtnController"));
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DriveVehicleBtnController*))(Il2CppBase() + 0x40EAA1C))(this);
	}
	template <typename T = void> T InitFromConfig() {
		return ((T (*)(DriveVehicleBtnController*))(Il2CppBase() + 0x40EAAC0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DriveVehicleBtnController*))(Il2CppBase() + 0x40EACAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig() {
		return ((T (*)(DriveVehicleBtnController*))(Il2CppBase() + 0x40EACB4))(this);
	}

};

}
