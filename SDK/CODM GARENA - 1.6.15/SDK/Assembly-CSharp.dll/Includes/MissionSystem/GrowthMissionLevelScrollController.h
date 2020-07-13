#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelScrollController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelScrollController"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimLevelReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOrScrollToIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelScrollController*))(Il2CppBase() + 0x32EDB34))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GrowthMissionLevelScrollController*))(Il2CppBase() + 0x32EDBD8))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* list, int32_t totalExp, int32_t selectIndex, int32_t scrollToIndex) {
		return ((T (*)(GrowthMissionLevelScrollController*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x32EDD90))(this, list, totalExp, selectIndex, scrollToIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GrowthMissionLevelScrollController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x32EE5C8))(this, list, controller, index);
	}
	template <typename T = void> T OnClaimLevelReward(int32_t levelValue) {
		return ((T (*)(GrowthMissionLevelScrollController*, int32_t))(Il2CppBase() + 0x32EE748))(this, levelValue);
	}
	template <typename T = void> T SwitchOrScrollToIndex(int32_t targetIndex) {
		return ((T (*)(GrowthMissionLevelScrollController*, int32_t))(Il2CppBase() + 0x32EE7E8))(this, targetIndex);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32EE8B4))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelScrollController*))(Il2CppBase() + 0x32EE8E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GrowthMissionLevelScrollController*))(Il2CppBase() + 0x32EE8E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(Il2CppList<uintptr_t>* P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(GrowthMissionLevelScrollController*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x32EE8F0))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_OnEasyListItemClick(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(GrowthMissionLevelScrollController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x32EE914))(this, P0, P1, P2);
	}

};

}
