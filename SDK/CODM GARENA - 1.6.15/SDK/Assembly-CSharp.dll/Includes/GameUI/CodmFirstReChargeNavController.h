#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmFirstReChargeNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmFirstReChargeNavController"));
	}

	template <typename T = uintptr_t> T& m_CodmShopCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(CodmFirstReChargeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DE5600))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(CodmFirstReChargeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DE573C))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE5820))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE58D0))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE5988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE5A28))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE5A30))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(CodmFirstReChargeNavController*))(Il2CppBase() + 0x3DE5A38))(this);
	}

};

}
