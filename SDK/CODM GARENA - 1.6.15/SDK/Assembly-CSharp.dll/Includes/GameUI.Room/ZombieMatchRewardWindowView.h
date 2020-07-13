#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class ZombieMatchRewardWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "ZombieMatchRewardWindowView"));
	}

	template <typename T = uintptr_t> T& TableDesc() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelAvailableNum() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelRemainResetTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelInstanceDesc() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnX() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ScrollRewards() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& GridRewards() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RewardDrops() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_RefreshTimes() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> static T& REFRESH_MAX_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInstanceGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombieMpInstanceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRemainResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ZombieMatchRewardWindowView*))(Il2CppBase() + 0x446A898))(this);
	}
	template <typename T = void> T RefreshInstanceGroup() {
		return ((T (*)(ZombieMatchRewardWindowView*))(Il2CppBase() + 0x44694C0))(this);
	}
	template <typename T = void> T SetZombieMpInstanceInfo(uintptr_t data) {
		return ((T (*)(ZombieMatchRewardWindowView*, uintptr_t))(Il2CppBase() + 0x4469B1C))(this, data);
	}
	template <typename T = void> T RefreshRemainResetTime(int32_t resetTime, double serverTime) {
		return ((T (*)(ZombieMatchRewardWindowView*, int32_t, double))(Il2CppBase() + 0x446A2E0))(this, resetTime, serverTime);
	}

};

}
