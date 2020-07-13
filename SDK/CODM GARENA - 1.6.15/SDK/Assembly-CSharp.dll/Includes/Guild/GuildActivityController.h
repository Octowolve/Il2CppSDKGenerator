#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildActivityController"));
	}

	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_EasyListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LevelInfoController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_LastBtnClickTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_GuildLevelRewardListController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBtnIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfAwardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfAwardBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildAwardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildAwardBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGuildLevelRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E34468))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E3450C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E35E38))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E360C4))(this);
	}
	template <typename T = void> T OnGuildInfoBtnClick() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E36294))(this);
	}
	template <typename T = void> T OnGuildInfoCloseBtnClick() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E36398))(this);
	}
	template <typename T = bool> T GetBtnIndex(uintptr_t go, Il2CppArray<uintptr_t>* btnList, uintptr_t index, uintptr_t enable) {
		return ((T (*)(GuildActivityController*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E3649C))(this, go, btnList, index, enable);
	}
	template <typename T = void> T OnSelfAwardBtnClick(uintptr_t go) {
		return ((T (*)(GuildActivityController*, uintptr_t))(Il2CppBase() + 0x3E36670))(this, go);
	}
	template <typename T = void> T OnSelfAwardBtnPress(uintptr_t go, bool press) {
		return ((T (*)(GuildActivityController*, uintptr_t, bool))(Il2CppBase() + 0x3E367A8))(this, go, press);
	}
	template <typename T = void> T OnGuildAwardBtnClick(uintptr_t go) {
		return ((T (*)(GuildActivityController*, uintptr_t))(Il2CppBase() + 0x3E36900))(this, go);
	}
	template <typename T = void> T OnGuildAwardBtnPress(uintptr_t go, bool press) {
		return ((T (*)(GuildActivityController*, uintptr_t, bool))(Il2CppBase() + 0x3E36A38))(this, go, press);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildActivityController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3E36B90))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E36D64))(this);
	}
	template <typename T = void> T ShowContent() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E34FC4))(this);
	}
	template <typename T = void> T InitGuildLevelRewardData() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E35318))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GuildActivityController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3E38158))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(GuildActivityController*, uintptr_t, int32_t))(Il2CppBase() + 0x3E38220))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E382D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E382DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E382E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E382EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildActivityController*))(Il2CppBase() + 0x3E382F4))(this);
	}

};

}
