#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class PlaylistSelectorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "PlaylistSelectorController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_EasyListCtr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& DEFAULT_SCROLLVIEW_WIDTH() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_PlaylistType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_PlaylistId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_DetailType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_ShowVideoIntroductionBtn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& m_VideoIntroductionUrl() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& sndPlaylistid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& domPlaylistid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& hpPlaylistid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideoIntroduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStateShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlaylistDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDetailsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVideoIntroductionBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDABF4))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDACA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDAD54))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDB1C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDB268))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDB49C))(this);
	}
	template <typename T = void> T InitVideoIntroduction() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDAE68))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data, int32_t adaptWidth) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CDB6B4))(this, data, adaptWidth);
	}
	template <typename T = bool> T HandleData(uintptr_t data, bool bForce) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t, bool))(Il2CppBase() + 0x2CDBDA8))(this, data, bForce);
	}
	template <typename T = bool> T IsStateShow(uintptr_t state) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t))(Il2CppBase() + 0x2CDD0F4))(this, state);
	}
	template <typename T = void> T HandleDataList(uintptr_t data) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t))(Il2CppBase() + 0x2CDD1B4))(this, data);
	}
	template <typename T = void> T RefreshEasyList(uintptr_t data) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t))(Il2CppBase() + 0x2CDD7B0))(this, data);
	}
	template <typename T = void> T SetSelectPlaylistDesc(uintptr_t data) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t))(Il2CppBase() + 0x2CDC724))(this, data);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2CDDBE0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PlaylistSelectorController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CDDE30))(this, list, userContext);
	}
	template <typename T = void> T OnBtnDetailsClick() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDDEE4))(this);
	}
	template <typename T = void> T OnVideoIntroductionBtnClick() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDE3CC))(this);
	}
	template <typename T = void> T SetDetailInfo(int32_t playlistType, int32_t playlistId, int32_t detailType, bool enableTutorialVideo) {
		return ((T (*)(PlaylistSelectorController*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2CDD8FC))(this, playlistType, playlistId, detailType, enableTutorialVideo);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2CDE994))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDE9B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDE9BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDE9C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlaylistSelectorController*))(Il2CppBase() + 0x2CDE9CC))(this);
	}

};

}
