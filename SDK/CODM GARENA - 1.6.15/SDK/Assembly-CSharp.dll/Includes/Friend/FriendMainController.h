#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TabCache() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsPullOutFriendRotocol() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& IsPullOutRecentRptpcpl() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBadges() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseSendFriendRotocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTabIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFriendActivityReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendTabCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendTabIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFriendReqs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A7A1C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A7AC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A7C9C))(this);
	}
	template <typename T = void> T SetupTabController() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A7DA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A80FC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A8758))(this);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(FriendMainController*, int32_t))(Il2CppBase() + 0x32A8C00))(this, index);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A9AB0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A9D64))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32A9E0C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateBadges() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A8A0C))(this);
	}
	template <typename T = void> T ChangeTabController(int32_t index) {
		return ((T (*)(FriendMainController*, int32_t))(Il2CppBase() + 0x32AA208))(this, index);
	}
	template <typename T = void> T ShowController(int32_t index) {
		return ((T (*)(FriendMainController*, int32_t))(Il2CppBase() + 0x32A8F78))(this, index);
	}
	template <typename T = void> T SetCurrentTab(uintptr_t message) {
		return ((T (*)(FriendMainController*, uintptr_t))(Il2CppBase() + 0x32AA334))(this, message);
	}
	template <typename T = void> T NavigationWill() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AA468))(this);
	}
	template <typename T = void> T PauseSendFriendRotocol(bool isFriend) {
		return ((T (*)(FriendMainController*, bool))(Il2CppBase() + 0x32A95BC))(this, isFriend);
	}
	template <typename T = void> T InitTabIndex() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32A85D0))(this);
	}
	template <typename T = void> T UpdateFriendActivityReddot(uintptr_t message) {
		return ((T (*)(FriendMainController*, uintptr_t))(Il2CppBase() + 0x32AA09C))(this, message);
	}
	template <typename T = void> T SetFriendTabCache(uintptr_t message) {
		return ((T (*)(FriendMainController*, uintptr_t))(Il2CppBase() + 0x32AA764))(this, message);
	}
	template <typename T = int32_t> T GetFriendTabIndex(uintptr_t tabType) {
		return ((T (*)(FriendMainController*, uintptr_t))(Il2CppBase() + 0x32AA888))(this, tabType);
	}
	template <typename T = bool> T HasFriendReqs() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AA930))(this);
	}
	template <typename T = void> T PauseSendFriendRotocolm__0() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA00))(this);
	}
	template <typename T = void> T PauseSendFriendRotocolm__1() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA0C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyTabChanged(int32_t P0) {
		return ((T (*)(FriendMainController*, int32_t))(Il2CppBase() + 0x32AAA40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FriendMainController*))(Il2CppBase() + 0x32AAA50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeTabController(int32_t P0) {
		return ((T (*)(FriendMainController*, int32_t))(Il2CppBase() + 0x32AAA58))(this, P0);
	}

};

}
