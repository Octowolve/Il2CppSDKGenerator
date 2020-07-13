#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildNavController"));
	}

	template <typename T = uintptr_t> T& m_SearchController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_TabController() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowGuildMainOrSearch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDE184))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDE224))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDE384))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDE480))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildNavController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BDE57C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(GuildNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BDE9BC))(this, data, lastData);
	}
	template <typename T = void> T CheckShowGuildMainOrSearch() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDE830))(this);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(GuildNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BDEB54))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDEC74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDEC7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDEC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildNavController*))(Il2CppBase() + 0x3BDEC8C))(this);
	}

};

}
