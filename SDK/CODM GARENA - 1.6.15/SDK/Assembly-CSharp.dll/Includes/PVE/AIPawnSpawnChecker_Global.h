#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawnCheckerGlobal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawnChecker_Global"));
	}

	template <typename T = int32_t> T& m_MaxAliveCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_MaxTotalCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_CurrentAliveCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_CurrentTotalCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpawnChaserZombieNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseAliveCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreaseAliceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AIPawnSpawnCheckerGlobal*))(Il2CppBase() + 0x49AEFA4))(this);
	}
	template <typename T = bool> T CanSpawnChaserZombieNow() {
		return ((T (*)(AIPawnSpawnCheckerGlobal*))(Il2CppBase() + 0x49AF0CC))(this);
	}
	template <typename T = void> T IncreaseAliveCount() {
		return ((T (*)(AIPawnSpawnCheckerGlobal*))(Il2CppBase() + 0x49ACF50))(this);
	}
	template <typename T = void> T DecreaseAliceCount() {
		return ((T (*)(AIPawnSpawnCheckerGlobal*))(Il2CppBase() + 0x49AD120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AIPawnSpawnCheckerGlobal*))(Il2CppBase() + 0x49AF1A0))(this);
	}

};

}
