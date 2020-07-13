#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneRankingMultiTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneRankingMultiTaskController_CA"));
	}

	template <typename T = uintptr_t> T& m_RankView_CA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x88);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityItemLocdDescript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ParentWidget() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E2A04))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E2BE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E2C88))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E3D90))(this);
	}
	template <typename T = void> T ResetRankType() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E3E9C))(this);
	}
	template <typename T = Il2CppString*> T GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E40EC))(this);
	}
	template <typename T = void> T InitEasyList(int32_t itemWidth) {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*, int32_t))(Il2CppBase() + 0x41E42DC))(this, itemWidth);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E2DB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E4410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E4418))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E4420))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetRankType() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E4428))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*))(Il2CppBase() + 0x41E442C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEasyList(int32_t P0) {
		return ((T (*)(MileStoneRankingMultiTaskControllerCA*, int32_t))(Il2CppBase() + 0x41E4430))(this, P0);
	}

};

}
