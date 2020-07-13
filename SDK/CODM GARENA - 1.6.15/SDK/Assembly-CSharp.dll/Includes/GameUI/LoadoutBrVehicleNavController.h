#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrVehicleNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrVehicleNavController"));
	}

	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LoadoutBrVehicleNavController*))(Il2CppBase() + 0x1A14188))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LoadoutBrVehicleNavController*))(Il2CppBase() + 0x1A14240))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutBrVehicleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A142E0))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutBrVehicleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A144B4))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LoadoutBrVehicleNavController*))(Il2CppBase() + 0x1A145AC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LoadoutBrVehicleNavController*))(Il2CppBase() + 0x1A145B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowed(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LoadoutBrVehicleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A145BC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillClose(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LoadoutBrVehicleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A145C4))(this, P0, P1);
	}

};

}
