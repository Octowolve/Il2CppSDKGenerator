#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberNavController"));
	}

	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ApplyMsgController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_MemberController() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BD9C54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BD9CF4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BD9E44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BD9F10))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildMemberNavController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BD9FDC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(GuildMemberNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BDA1FC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(GuildMemberNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BDA2F0))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BDA3E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BDA3EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BDA3F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildMemberNavController*))(Il2CppBase() + 0x3BDA3FC))(this);
	}

};

}
