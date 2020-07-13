#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ApplyMsgDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_MemberListController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_EventListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ApplyMsgController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMemberBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEventBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyMsgBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdptLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCA590))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCA634))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCA9B4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCAD4C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCB0CC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCB77C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildMemberController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BCB8C0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnGuildInfoBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCB9D4))(this);
	}
	template <typename T = void> T OnMemberBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCB2BC))(this);
	}
	template <typename T = void> T OnEventBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCBAC4))(this);
	}
	template <typename T = void> T OnApplyMsgBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCBC98))(this);
	}
	template <typename T = void> T ShowContent() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCB490))(this);
	}
	template <typename T = void> T OnLevelInfoBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCA3C))(this);
	}
	template <typename T = void> T OnSettingBtnClick() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCB2C))(this);
	}
	template <typename T = void> T ShowSeasonInfo() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCC16C))(this);
	}
	template <typename T = void> T AdptLine() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCCF0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(GuildMemberController*))(Il2CppBase() + 0x3BCCF74))(this);
	}

};

}
