#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieEndlessDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieEndlessDataStore"));
	}

	template <typename T = int32_t> T& m_RoundNumPassedWeekly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_CurrentRoundNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_RoundNumPassed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ChallengeRoundScore() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RewardList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_RoundNumPassedWeekly() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x40665E8))(this);
	}
	template <typename T = int32_t> T get_CurrentRoundNum() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x40665F0))(this);
	}
	template <typename T = int32_t> T get_RoundNumPassed() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x40665F8))(this);
	}
	template <typename T = int32_t> T get_ChallengeRoundScore() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x4066600))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RewardList() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x4066608))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x4066610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(ZombieEndlessDataStore*))(Il2CppBase() + 0x4066700))(this);
	}

};

}
