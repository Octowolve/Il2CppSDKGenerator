#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionShareActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionShareActivityController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mLvieOpsDs() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownLoadToLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Share2Platform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareFacebook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497E21C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x497E840))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t, int32_t))(Il2CppBase() + 0x497E908))(this, list, userContext);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497E9BC))(this);
	}
	template <typename T = void> T DelayInit() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497EA54))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497EC90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497EDC4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497EEB0))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x497EF54))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T InternalShare(void* callback) {
		return ((T (*)(IDCollectionShareActivityController*, void*))(Il2CppBase() + 0x497F010))(this, callback);
	}
	template <typename T = void> T OnBtnDownLoadToLocal() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F1FC))(this);
	}
	template <typename T = bool> T IsAppInstalled(uintptr_t platform) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t))(Il2CppBase() + 0x497E474))(this, platform);
	}
	template <typename T = void> T Share2Platform(uintptr_t eTarget, uintptr_t platform) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x497F2F8))(this, eTarget, platform);
	}
	template <typename T = void> T OnBtnShareGarena() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F47C))(this);
	}
	template <typename T = void> T OnBtnShareLine() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F528))(this);
	}
	template <typename T = void> T OnBtnShareFacebook() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F5C0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F66C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F72C))(this);
	}
	template <typename T = void> T OnBtnDownLoadToLocalm__0(uintptr_t texture) {
		return ((T (*)(IDCollectionShareActivityController*, uintptr_t))(Il2CppBase() + 0x497F7EC))(this, texture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(IDCollectionShareActivityController*))(Il2CppBase() + 0x497F9C8))(this);
	}

};

}
