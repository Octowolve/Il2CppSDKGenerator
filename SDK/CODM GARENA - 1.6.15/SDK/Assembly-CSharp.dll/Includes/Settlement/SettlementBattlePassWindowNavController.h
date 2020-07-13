#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBattlePassWindowNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBattlePassWindowNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& TopBarDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TopBarView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5F96C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FAC8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FB68))(this);
	}
	template <typename T = bool> T IsShowWinnerCircleAvatar() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FC08))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(SettlementBattlePassWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B5FCA8))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(SettlementBattlePassWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B5FE40))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FF10))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FFA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FFB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FFB8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWinnerCircleAvatar() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FFC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(SettlementBattlePassWindowNavController*))(Il2CppBase() + 0x3B5FFC8))(this);
	}

};

}
