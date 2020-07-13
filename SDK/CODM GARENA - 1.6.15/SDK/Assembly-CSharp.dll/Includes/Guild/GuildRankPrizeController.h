#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildRankPrizeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildRankPrizeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPrizeList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bShowAward() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE6A78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE6B1C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE6C38))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE6DF4))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE6FB0))(this);
	}
	template <typename T = void> T SetContent(bool isWeekRank, uint32_t guildActivity, uint32_t selfActivity, int32_t rank, int32_t rankPer, uint32_t minActivity, Il2CppList<uintptr_t>* prizeList, Il2CppList<uintptr_t>* starList) {
		return ((T (*)(GuildRankPrizeController*, bool, uint32_t, uint32_t, int32_t, int32_t, uint32_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3BB644C))(this, isWeekRank, guildActivity, selfActivity, rank, rankPer, minActivity, prizeList, starList);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7AAC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7BA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7C9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7CA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7CAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7CB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(GuildRankPrizeController*))(Il2CppBase() + 0x3BE7CC4))(this);
	}

};

}
