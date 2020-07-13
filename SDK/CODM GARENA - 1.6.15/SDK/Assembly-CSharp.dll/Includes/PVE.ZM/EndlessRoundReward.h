#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class EndlessRoundReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "EndlessRoundReward"));
	}

	template <typename T = int32_t> T& m_RoundNumNeedPassed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_RewardId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsRewarded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EnableReward() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_RoundNumNeedPassed() {
		return ((T (*)(EndlessRoundReward*))(Il2CppBase() + 0x4057E84))(this);
	}
	template <typename T = int32_t> T get_RewardId() {
		return ((T (*)(EndlessRoundReward*))(Il2CppBase() + 0x4057E8C))(this);
	}
	template <typename T = bool> T get_IsRewarded() {
		return ((T (*)(EndlessRoundReward*))(Il2CppBase() + 0x4057E94))(this);
	}
	template <typename T = bool> T get_EnableReward() {
		return ((T (*)(EndlessRoundReward*))(Il2CppBase() + 0x4057E9C))(this);
	}

};

}
