#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildRankExplainPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildRankExplainPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mWeekEasyList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mSeasonEasyList() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRulesTabBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeekTabBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeasonTabBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE56DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE5780))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE5D10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE5F18))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE60F4))(this);
	}
	template <typename T = void> T OnRulesTabBtnClicked() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE61A4))(this);
	}
	template <typename T = void> T OnWeekTabBtnClicked() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE6348))(this);
	}
	template <typename T = void> T OnSeasonTabBtnClicked() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE64EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE6690))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE6698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE66A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE66A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildRankExplainPopupController*))(Il2CppBase() + 0x3BE66B0))(this);
	}

};

}
