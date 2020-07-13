#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& bpDs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& BpConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Columns() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CurrentSeasonId() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshComicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassComicSeasonChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTabToCurSeasonTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327A520))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327A5C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327AE0C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327AF58))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327B038))(this);
	}
	template <typename T = void> T RefreshComicData() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327ACD4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassComicController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x327B858))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNotifyBattlePassComicSeasonChange(uintptr_t msg) {
		return ((T (*)(BattlePassComicController*, uintptr_t))(Il2CppBase() + 0x327BAAC))(this, msg);
	}
	template <typename T = void> T SetSeasonInfo(int32_t SeasonId) {
		return ((T (*)(BattlePassComicController*, int32_t))(Il2CppBase() + 0x327BFB0))(this, SeasonId);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BattlePassComicController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x327C490))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BattlePassComicController*, uintptr_t, int32_t))(Il2CppBase() + 0x327C558))(this, list, userContext);
	}
	template <typename T = void> T ResetTabToCurSeasonTab() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327C60C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327C958))(this);
	}
	template <typename T = void> T RefreshRedPoint() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327B9D0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassComicController*))(Il2CppBase() + 0x327CA28))(this);
	}

};

}
