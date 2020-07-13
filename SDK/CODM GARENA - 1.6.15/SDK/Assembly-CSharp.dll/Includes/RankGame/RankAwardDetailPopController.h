#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankAwardDetailPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankAwardDetailPopController"));
	}

	template <typename T = uintptr_t> T& rankAwardView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& rankProtocol() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRankActivityInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FD4E8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FD58C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FD698))(this);
	}
	template <typename T = void> T RefreshRankActivityInfoList(bool bResetScroll) {
		return ((T (*)(RankAwardDetailPopController*, bool))(Il2CppBase() + 0x37FD758))(this, bResetScroll);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RankAwardDetailPopController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x37FE460))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FE588))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FE840))(this);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FEC54))(this);
	}
	template <typename T = void> T ResetRankInfo() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FD914))(this);
	}
	template <typename T = void> T ViewInit(int32_t itemWidth) {
		return ((T (*)(RankAwardDetailPopController*, int32_t))(Il2CppBase() + 0x37FEA4C))(this, itemWidth);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RankAwardDetailPopController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x37FF240))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RankAwardDetailPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x37FF308))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FF424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FF42C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FF434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankAwardDetailPopController*))(Il2CppBase() + 0x37FF43C))(this);
	}

};

}
