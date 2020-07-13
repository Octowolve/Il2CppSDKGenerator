#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class MapSelectorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "MapSelectorController"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& m_HandleData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_Num() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemDownloadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSame_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD4C6C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD4D78))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD4E1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD4FC0))(this);
	}
	template <typename T = void> T OnMapItemDownloadFinished(uintptr_t message) {
		return ((T (*)(MapSelectorController*, uintptr_t))(Il2CppBase() + 0x2CD5090))(this, message);
	}
	template <typename T = void> T UpdateView(bool isOwner, uintptr_t matchType, bool isMapEnableSelect, Il2CppList<uintptr_t>* mapList, bool bIsMapMatchRoom, int32_t adaptWidth) {
		return ((T (*)(MapSelectorController*, bool, uintptr_t, bool, Il2CppList<uintptr_t>*, bool, int32_t))(Il2CppBase() + 0x2CD52C4))(this, isOwner, matchType, isMapEnableSelect, mapList, bIsMapMatchRoom, adaptWidth);
	}
	template <typename T = void> T RefreshEasyList(uintptr_t data) {
		return ((T (*)(MapSelectorController*, uintptr_t))(Il2CppBase() + 0x2CD63F4))(this, data);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(MapSelectorController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2CD6614))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(MapSelectorController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CD6B40))(this, list, userContext);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD6BF4))(this);
	}
	template <typename T = void> T SetMapData(bool enableSelect, Il2CppList<uintptr_t>* list, bool bIsMapMatchRoom) {
		return ((T (*)(MapSelectorController*, bool, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x2CD56C4))(this, enableSelect, list, bIsMapMatchRoom);
	}
	template <typename T = bool> T IsSame_HandleData() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD5FCC))(this);
	}
	template <typename T = int32_t> static T SetMapDatam__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CD6CD0))(0, a, b);
	}
	template <typename T = bool> static T SetMapDatam__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2CD6D2C))(0, it);
	}
	template <typename T = bool> static T SetMapDatam__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2CD6D5C))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD6D8C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD6D94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD6D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MapSelectorController*))(Il2CppBase() + 0x2CD6DA4))(this);
	}

};

}
