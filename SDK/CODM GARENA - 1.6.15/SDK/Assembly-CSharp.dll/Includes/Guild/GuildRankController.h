#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildRankController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildRankController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RankDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mGuildWeekRankListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mGuildSeasonRankListController() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeeklyBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeasonalBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelfRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE01F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE0298))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE052C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE0A88))(this);
	}
	template <typename T = void> T OnWeeklyBtnClicked() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE07B8))(this);
	}
	template <typename T = void> T OnSeasonalBtnClicked() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE0D38))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE11B4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE133C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildRankController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BE1454))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T SetSelfRank(bool IsSeason) {
		return ((T (*)(GuildRankController*, bool))(Il2CppBase() + 0x3BE1648))(this, IsSeason);
	}
	template <typename T = void> T OnTipsClick() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE24BC))(this);
	}
	template <typename T = void> T Reposition() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE25AC))(this);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t obj) {
		return ((T (*)(GuildRankController*, uintptr_t))(Il2CppBase() + 0x3BE2CB0))(this, obj);
	}
	template <typename T = void> T SetSelfRankm__0() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE2EE8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(GuildRankController*))(Il2CppBase() + 0x3BE3350))(this);
	}

};

}
