#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabRootController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabRootController"));
	}

	template <typename T = uintptr_t> T& RootView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TabControllers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mIndexSelected() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TabInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Switch2TabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B1603C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B16110))(this);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B1643C))(this, index);
	}
	template <typename T = void> T TabInit() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B16224))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B1670C))(this);
	}
	template <typename T = void> T ChangeTabController(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B16DE4))(this, index);
	}
	template <typename T = void> T Switch2TabController(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B16504))(this, index);
	}
	template <typename T = void> T OpenTabController(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B16A24))(this, index);
	}
	template <typename T = void> T CloseTabController(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B16C04))(this, index);
	}
	template <typename T = void> T OnTabSwitch(int32_t index) {
		return ((T (*)(UITabRootController*, int32_t))(Il2CppBase() + 0x3B16F74))(this, index);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B17014))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B17214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B1721C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B17224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(UITabRootController*))(Il2CppBase() + 0x3B1722C))(this);
	}

};

}
