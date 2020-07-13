#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PrevCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TopBarDepth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TopBarView() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x295890C))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(SettlementDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29589AC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(SettlementDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2959360))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x29594D0))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x2959670))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x2959710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x2959718))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(SettlementDetailNavController*))(Il2CppBase() + 0x2959720))(this);
	}

};

}
