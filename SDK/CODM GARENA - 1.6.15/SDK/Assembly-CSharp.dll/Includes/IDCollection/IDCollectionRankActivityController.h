#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionRankActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionRankActivityController"));
	}

	template <typename T = uintptr_t> T& m_RanAwardPreviewCtr() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& liveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_codLiveOpsActivity() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTaskActivityRanking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityItemLocdDescript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRankActivityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F26B68))(this);
	}
	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(IDCollectionRankActivityController*, uintptr_t))(Il2CppBase() + 0x4F25BFC))(this, value);
	}
	template <typename T = bool> T IsTaskActivityRanking() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F26D90))(this);
	}
	template <typename T = void> T ResetRankType() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F26E30))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F26F4C))(this);
	}
	template <typename T = Il2CppString*> T GetActivityItemLocdDescript() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F27038))(this);
	}
	template <typename T = void> T ReqRankActivityInfo() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F26C0C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F270F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F27198))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsTaskActivityRanking() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F271A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetRankType() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F271A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F271B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(IDCollectionRankActivityController*))(Il2CppBase() + 0x4F271B8))(this);
	}

};

}
