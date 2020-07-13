#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalInfoHistorySettlementNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalInfoHistorySettlementNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> static T& IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& TopBarDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TopBarView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0BE70))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(PersonalInfoHistorySettlementNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F0BF40))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(PersonalInfoHistorySettlementNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F0C33C))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0C598))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0C7AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0C880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0C888))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(PersonalInfoHistorySettlementNavController*))(Il2CppBase() + 0x3F0C890))(this);
	}

};

}
