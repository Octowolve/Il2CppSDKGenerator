#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildBuildOrEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildBuildOrEditController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_IconEditController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ProvinceListController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& CityListController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitProvinceAndCityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProvinceListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCityListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildNameSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLocationInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Quit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildIconChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUpBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelDownBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateGuildResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModifyGuildResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconEditBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitGuildBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitGuildMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuildConsumeEnongh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDiamondNotEnoughMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E3F260))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E3F304))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E3F93C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E40134))(this);
	}
	template <typename T = void> T InitProvinceAndCityData() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E3F73C))(this);
	}
	template <typename T = void> T OnProvinceListBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E407D0))(this);
	}
	template <typename T = void> T OnCityListBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E4094C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3E40BB4))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x3E41718))(this, list, userContext);
	}
	template <typename T = void> T OnGuildNameSubmit() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E417CC))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E41A50))(this);
	}
	template <typename T = void> T RefreshLocationInfo() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E41C70))(this);
	}
	template <typename T = void> T Quit() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E42010))(this);
	}
	template <typename T = void> T OnGuildIconChange(uintptr_t Msg) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t))(Il2CppBase() + 0x3E421EC))(this, Msg);
	}
	template <typename T = void> T OnLevelUpBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E424B8))(this);
	}
	template <typename T = void> T OnLevelDownBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E42868))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3E42928))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnCreateGuildResponse(uintptr_t Msg) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t))(Il2CppBase() + 0x3E429F4))(this, Msg);
	}
	template <typename T = void> T OnModifyGuildResponse(uintptr_t Msg) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t))(Il2CppBase() + 0x3E42BB0))(this, Msg);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E42D6C))(this);
	}
	template <typename T = void> T OnCreateBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E432B0))(this);
	}
	template <typename T = void> T OnIconEditBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E43CF0))(this);
	}
	template <typename T = void> T OnQuitGuildBtnClick() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E43EA4))(this);
	}
	template <typename T = void> T OnQuitGuildMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x3E4413C))(this, result, userContext);
	}
	template <typename T = bool> T CheckBuildConsumeEnongh(int32_t itemId, int32_t itemCount) {
		return ((T (*)(GuildBuildOrEditController*, int32_t, int32_t))(Il2CppBase() + 0x3E4391C))(this, itemId, itemCount);
	}
	template <typename T = void> T OnDiamondNotEnoughMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x3E4425C))(this, result, userContext);
	}
	template <typename T = void> T OnUpBtnPress(uintptr_t obj, bool State) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, bool))(Il2CppBase() + 0x3E44410))(this, obj, State);
	}
	template <typename T = void> T OnDownBtnPress(uintptr_t obj, bool State) {
		return ((T (*)(GuildBuildOrEditController*, uintptr_t, bool))(Il2CppBase() + 0x3E445F8))(this, obj, State);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E446D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E446E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E446E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildBuildOrEditController*))(Il2CppBase() + 0x3E446F0))(this);
	}

};

}
