#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class ActivityRewardGatePointsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "ActivityRewardGatePointsView"));
	}

	template <typename T = uintptr_t> T& ActivityTotalPointLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ActivityLeftEndTimeLable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardGatePoints() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& mTickCallback() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityTotalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityLefEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgressValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardGatePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ActivityRewardGatePointsView*))(Il2CppBase() + 0x4F234EC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ActivityRewardGatePointsView*, float))(Il2CppBase() + 0x4F234F4))(this, dt);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(ActivityRewardGatePointsView*))(Il2CppBase() + 0x4F235CC))(this);
	}
	template <typename T = void> T SetTickCallback(void* tickCallback) {
		return ((T (*)(ActivityRewardGatePointsView*, void*))(Il2CppBase() + 0x4F2375C))(this, tickCallback);
	}
	template <typename T = void> T SetActivityTotalPoint(Il2CppString* uNumberString) {
		return ((T (*)(ActivityRewardGatePointsView*, Il2CppString*))(Il2CppBase() + 0x4F23804))(this, uNumberString);
	}
	template <typename T = void> T SetActivityLefEndTime(double fLeftActivityTime) {
		return ((T (*)(ActivityRewardGatePointsView*, double))(Il2CppBase() + 0x4F238F8))(this, fLeftActivityTime);
	}
	template <typename T = void> T SetProgressValue(int32_t nBlockGateID, float fPercent) {
		return ((T (*)(ActivityRewardGatePointsView*, int32_t, float))(Il2CppBase() + 0x4F23A68))(this, nBlockGateID, fPercent);
	}
	template <typename T = void> T SetRewardState(int32_t id, bool bReached, uintptr_t eState) {
		return ((T (*)(ActivityRewardGatePointsView*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4F23C24))(this, id, bReached, eState);
	}
	template <typename T = void> T SetRewardGatePoint(int32_t id, uintptr_t gatePointData, void* RewardClaimClick) {
		return ((T (*)(ActivityRewardGatePointsView*, int32_t, uintptr_t, void*))(Il2CppBase() + 0x4F23F00))(this, id, gatePointData, RewardClaimClick);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ActivityRewardGatePointsView*, float))(Il2CppBase() + 0x4F24134))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(ActivityRewardGatePointsView*))(Il2CppBase() + 0x4F2413C))(this);
	}

};

}
