#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class NavigationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "NavigationController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NavigationContentList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& MASK_SHOW_MAX_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStackNavigationDataByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNavigationInCacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyNavigationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNavigationToRootExceptCurrent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNavigationToRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNavigationMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNavigationMaskOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x38399D0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x3839C80))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x3839D24))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383A564))(this);
	}
	template <typename T = uintptr_t> T GetCurrentNavigation() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383A39C))(this);
	}
	template <typename T = uintptr_t> T GetStackNavigationDataByIndex(int32_t stackTopIndex) {
		return ((T (*)(NavigationController*, int32_t))(Il2CppBase() + 0x383A6F8))(this, stackTopIndex);
	}
	template <typename T = uintptr_t> T PushNavigation(uintptr_t data, bool displayAnimation) {
		return ((T (*)(NavigationController*, uintptr_t, bool))(Il2CppBase() + 0x1B6E490))(this, data, displayAnimation);
	}
	template <typename T = bool> T IsNavigationInCacheList(uintptr_t t) {
		return ((T (*)(NavigationController*, uintptr_t))(Il2CppBase() + 0x383A820))(this, t);
	}
	template <typename T = void> T ModifyNavigationData(uintptr_t data) {
		return ((T (*)(NavigationController*, uintptr_t))(Il2CppBase() + 0x1E7D9E0))(this, data);
	}
	template <typename T = void> T RemoveNavigationToRootExceptCurrent() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383A970))(this);
	}
	template <typename T = uintptr_t> T PopNavigation() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383AB60))(this);
	}
	template <typename T = uintptr_t> T PopNavigationToRoot(uintptr_t shouldShutdownNavigationDataList) {
		return ((T (*)(NavigationController*, uintptr_t))(Il2CppBase() + 0x383AD34))(this, shouldShutdownNavigationDataList);
	}
	template <typename T = void> T ShowNavigationMask(bool show) {
		return ((T (*)(NavigationController*, bool))(Il2CppBase() + 0x3839AE8))(this, show);
	}
	template <typename T = void> T HideNavigationMaskOverTime() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383B07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383B190))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383B198))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(NavigationController*))(Il2CppBase() + 0x383B1A0))(this);
	}

};

}
