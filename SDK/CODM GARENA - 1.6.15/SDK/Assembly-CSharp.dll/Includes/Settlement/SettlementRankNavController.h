#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementRankNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementRankNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PrevCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& controllerType() {
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
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x297103C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x2971190))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x2971230))(this);
	}
	template <typename T = bool> T IsShowWinnerCircleAvatar() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x29712D0))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(SettlementRankNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2971370))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(SettlementRankNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2971834))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x2971904))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x297199C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x29719A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x29719AC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWinnerCircleAvatar() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x29719B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(SettlementRankNavController*))(Il2CppBase() + 0x29719BC))(this);
	}

};

}
