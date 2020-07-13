#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuiteDetailTabBarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuiteDetailTabBarController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& suites() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& squads() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SuiteDetailController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& curTabIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SuiteDetailTabBarController*))(Il2CppBase() + 0x29A1E6C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SuiteDetailTabBarController*))(Il2CppBase() + 0x29A1F10))(this);
	}
	template <typename T = void> T SetData(Il2CppDictionary<uintptr_t, uintptr_t>* suiteSquad, uintptr_t SuiteDetailController) {
		return ((T (*)(SuiteDetailTabBarController*, Il2CppDictionary<uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x299DE10))(this, suiteSquad, SuiteDetailController);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SuiteDetailTabBarController*, int32_t))(Il2CppBase() + 0x29A2928))(this, tabIndex);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SuiteDetailTabBarController*))(Il2CppBase() + 0x29A2AA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SuiteDetailTabBarController*))(Il2CppBase() + 0x29A2AB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SuiteDetailTabBarController*, int32_t))(Il2CppBase() + 0x29A2AB8))(this, P0);
	}

};

}
