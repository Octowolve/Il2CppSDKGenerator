#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketMonitor"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& TacticalViewList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TacticalViewControllerList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHelicopterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BlackMarketMonitor*))(Il2CppBase() + 0x24B7D70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BlackMarketMonitor*))(Il2CppBase() + 0x24B7D78))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BlackMarketMonitor*, float))(Il2CppBase() + 0x24B8054))(this, dt);
	}
	template <typename T = void> T SyncHelicopterPosition(Il2CppList<Il2CppVector3>* positions, Il2CppList<bool>* bHasBeenUsed, bool bClearCachedResult) {
		return ((T (*)(BlackMarketMonitor*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x24B8248))(this, positions, bHasBeenUsed, bClearCachedResult);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BlackMarketMonitor*))(Il2CppBase() + 0x24B8474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BlackMarketMonitor*, float))(Il2CppBase() + 0x24B847C))(this, P0);
	}

};

}
