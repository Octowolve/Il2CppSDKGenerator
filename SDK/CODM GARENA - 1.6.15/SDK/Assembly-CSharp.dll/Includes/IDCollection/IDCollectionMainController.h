#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionMainController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_codLiveOpsActivity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& liveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGeneralProgressActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabTypeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePersonalController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateServerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRankingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefershSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F2428C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(IDCollectionMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4F24330))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F24670))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F247C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F24870))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F249B4))(this);
	}
	template <typename T = void> T NotifyGeneralProgressActivity(uintptr_t bMsg) {
		return ((T (*)(IDCollectionMainController*, uintptr_t))(Il2CppBase() + 0x4F24A94))(this, bMsg);
	}
	template <typename T = Il2CppString*> T GetTabMask() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25120))(this);
	}
	template <typename T = int32_t> T GetTabTypeId(uintptr_t eTabType) {
		return ((T (*)(IDCollectionMainController*, uintptr_t))(Il2CppBase() + 0x4F251F0))(this, eTabType);
	}
	template <typename T = uintptr_t> T CreatePersonalController() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25324))(this);
	}
	template <typename T = uintptr_t> T CreateServerController() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25448))(this);
	}
	template <typename T = uintptr_t> T CreateRankingController() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F2556C))(this);
	}
	template <typename T = void> T RefershSubController() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F24CE8))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F243FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25DEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25DF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25DFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25E04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IDCollectionMainController*))(Il2CppBase() + 0x4F25E0C))(this);
	}

};

}
