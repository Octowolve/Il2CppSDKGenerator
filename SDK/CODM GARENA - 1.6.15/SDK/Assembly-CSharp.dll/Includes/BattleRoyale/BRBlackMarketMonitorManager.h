#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBlackMarketMonitorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBlackMarketMonitorManager"));
	}

	template <typename T = uintptr_t> T& NotifySyncHelicopterPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Monitors() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHelicopterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SyncHelicopterPosition(Il2CppList<Il2CppVector3>* position, Il2CppList<bool>* helicopterUsed, bool bClearCachedResult) {
		return ((T (*)(BRBlackMarketMonitorManager*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x24E29BC))(this, position, helicopterUsed, bClearCachedResult);
	}
	template <typename T = void> T RegisterMonitor(uintptr_t monitor) {
		return ((T (*)(BRBlackMarketMonitorManager*, uintptr_t))(Il2CppBase() + 0x24B682C))(this, monitor);
	}
	template <typename T = void> T UnRegisterMonitor(uintptr_t monitor) {
		return ((T (*)(BRBlackMarketMonitorManager*, uintptr_t))(Il2CppBase() + 0x24B7178))(this, monitor);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRBlackMarketMonitorManager*, float))(Il2CppBase() + 0x24E2B7C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRBlackMarketMonitorManager*, float))(Il2CppBase() + 0x24E2DBC))(this, P0);
	}

};

}
