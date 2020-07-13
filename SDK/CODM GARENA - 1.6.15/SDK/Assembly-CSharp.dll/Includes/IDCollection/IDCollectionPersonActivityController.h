#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionPersonActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionPersonActivityController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& protocolData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F25F5C))(this);
	}
	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F260AC))(this);
	}
	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26200))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26300))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F263CC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26498))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(IDCollectionPersonActivityController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4F2653C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(IDCollectionPersonActivityController*, uintptr_t))(Il2CppBase() + 0x4F26694))(this, task);
	}
	template <typename T = void> T RefreshActivityPoints() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F2676C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReqActivityPoints() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F2698C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshDataStore() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F26994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F2699C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F269A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F269AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyDataStoreUpdated(uintptr_t P0, Il2CppString* P1, int32_t P2) {
		return ((T (*)(IDCollectionPersonActivityController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4F269B4))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameBatchTask(uintptr_t P0) {
		return ((T (*)(IDCollectionPersonActivityController*, uintptr_t))(Il2CppBase() + 0x4F269D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshActivityPoints() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F269DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(IDCollectionPersonActivityController*))(Il2CppBase() + 0x4F269E4))(this);
	}

};

}
