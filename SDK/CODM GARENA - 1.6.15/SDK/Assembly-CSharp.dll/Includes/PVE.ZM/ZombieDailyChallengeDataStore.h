#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieDailyChallengeDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieDailyChallengeDataStore"));
	}

	template <typename T = int32_t> T& m_CurrentDifficultyId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_CurrentDifficultyId() {
		return ((T (*)(ZombieDailyChallengeDataStore*))(Il2CppBase() + 0x406388C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ZombieDailyChallengeDataStore*))(Il2CppBase() + 0x4063894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(ZombieDailyChallengeDataStore*))(Il2CppBase() + 0x4063944))(this);
	}

};

}
