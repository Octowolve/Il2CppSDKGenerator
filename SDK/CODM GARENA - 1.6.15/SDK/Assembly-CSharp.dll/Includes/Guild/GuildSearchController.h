#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSearchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSearchController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentSearchInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SearchItemMaxNum() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_SelectIndex() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_HasSearchContent() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_LastJoinBtnClickTime() {
		return *(T*)((uintptr_t)this + 0xDC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSearchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildSearch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyPopupChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSearchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJionBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAutoJoinGuildMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BE96C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BE9768))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BE9C94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEA7B8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEAAB4))(this);
	}
	template <typename T = void> T OnSearchBtnClick() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEA354))(this);
	}
	template <typename T = void> T OnInputSubmit() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEB388))(this);
	}
	template <typename T = void> T OnSubmit(bool isInputSubmit) {
		return ((T (*)(GuildSearchController*, bool))(Il2CppBase() + 0x3BEACC4))(this, isInputSubmit);
	}
	template <typename T = void> T OnJoinBtnClick() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEBB68))(this);
	}
	template <typename T = void> T OnBuildBtnClick() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEBE00))(this);
	}
	template <typename T = void> T OnResponseGuildSearch(uintptr_t Msg) {
		return ((T (*)(GuildSearchController*, uintptr_t))(Il2CppBase() + 0x3BEBFC4))(this, Msg);
	}
	template <typename T = void> T OnEasyPopupChange(uintptr_t Msg) {
		return ((T (*)(GuildSearchController*, uintptr_t))(Il2CppBase() + 0x3BEC69C))(this, Msg);
	}
	template <typename T = void> T PrepareItemList() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BE98C8))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BE9BDC))(this);
	}
	template <typename T = void> T SetSelect(uintptr_t searchInfo) {
		return ((T (*)(GuildSearchController*, uintptr_t))(Il2CppBase() + 0x3BEC9C0))(this, searchInfo);
	}
	template <typename T = void> T ShowSearchList(bool show) {
		return ((T (*)(GuildSearchController*, bool))(Il2CppBase() + 0x3BEB660))(this, show);
	}
	template <typename T = void> T Reposition() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEDA70))(this);
	}
	template <typename T = void> T OnQuickJionBtnClick() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEE974))(this);
	}
	template <typename T = void> T OnAutoJoinGuildMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildSearchController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BEEC24))(this, result, userContext);
	}
	template <typename T = void> T Repositionm__0() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEEDFC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEF150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEF158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEF160))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEF168))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildSearchController*))(Il2CppBase() + 0x3BEF170))(this);
	}

};

}
