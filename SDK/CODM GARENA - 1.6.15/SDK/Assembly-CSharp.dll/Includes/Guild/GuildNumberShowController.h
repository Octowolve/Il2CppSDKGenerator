#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildNumberShowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildNumberShowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_LevelMaxMemberEasyListController() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitLevelMaxMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDED38))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDEDDC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF3C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF4F0))(this);
	}
	template <typename T = void> T InitLevelMaxMemberData() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF05C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF60C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildNumberShowController*))(Il2CppBase() + 0x3BDF61C))(this);
	}

};

}
