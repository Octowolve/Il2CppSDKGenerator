#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDatastore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mLoadoutHomeController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLoadoutPveHomeController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mLoadoutBrHomeController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mLoadoutInventoryController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mBagIndividuationMainController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mTabMap() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& mCurrentTabType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& mHidePVETab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLeftTopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutMainTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadoutHome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadoutPveHome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadoutBrHome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A5F6D4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A5F7A8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A5F99C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A615C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A6171C))(this);
	}
	template <typename T = void> T OnNotifyUpdateReddotData(uintptr_t message) {
		return ((T (*)(LoadoutMainController*, uintptr_t))(Il2CppBase() + 0x1A61808))(this, message);
	}
	template <typename T = void> T PlayLeftTopAnim() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A618E4))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A5FB94))(this);
	}
	template <typename T = void> T OnLoadoutMainTabSwitch(int32_t index) {
		return ((T (*)(LoadoutMainController*, int32_t))(Il2CppBase() + 0x1A61A70))(this, index);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A60A98))(this);
	}
	template <typename T = void> T ShowLoadoutHome(bool show) {
		return ((T (*)(LoadoutMainController*, bool))(Il2CppBase() + 0x1A62440))(this, show);
	}
	template <typename T = void> T ShowLoadoutPveHome(bool show) {
		return ((T (*)(LoadoutMainController*, bool))(Il2CppBase() + 0x1A61FB8))(this, show);
	}
	template <typename T = void> T ShowLoadoutBrHome(bool show) {
		return ((T (*)(LoadoutMainController*, bool))(Il2CppBase() + 0x1A621FC))(this, show);
	}
	template <typename T = void> T ShowIndividuation(bool show) {
		return ((T (*)(LoadoutMainController*, bool))(Il2CppBase() + 0x1A62684))(this, show);
	}
	template <typename T = void> T ShowInventory(bool show) {
		return ((T (*)(LoadoutMainController*, bool))(Il2CppBase() + 0x1A628C8))(this, show);
	}
	template <typename T = void> static T RefreshViewm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A62B90))(0);
	}
	template <typename T = void> static T RefreshViewm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A62D54))(0);
	}
	template <typename T = void> static T RefreshViewm__2() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A62F18))(0);
	}
	template <typename T = void> static T RefreshViewm__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A630DC))(0);
	}
	template <typename T = void> static T RefreshViewm__4() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A632A0))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A63464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A6346C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A63474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A6347C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutMainController*))(Il2CppBase() + 0x1A63484))(this);
	}

};

}
