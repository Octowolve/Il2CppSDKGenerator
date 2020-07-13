#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketHelicopterMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketHelicopterMonitor"));
	}

	template <typename T = uintptr_t> T& UsedsedActor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UsedActorInfoList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& BMUsedActorManager() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& helicopterCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& bNeedToUpdate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHelicopterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BlackMarketHelicopterMonitor*))(Il2CppBase() + 0x24B7380))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BlackMarketHelicopterMonitor*, float))(Il2CppBase() + 0x24B77E4))(this, dt);
	}
	template <typename T = void> T SyncHelicopterPosition(Il2CppList<Il2CppVector3>* positions, Il2CppList<bool>* hasBeenUsed, bool bClearCachedResult) {
		return ((T (*)(BlackMarketHelicopterMonitor*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x24B78D4))(this, positions, hasBeenUsed, bClearCachedResult);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BlackMarketHelicopterMonitor*))(Il2CppBase() + 0x24B7CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BlackMarketHelicopterMonitor*, float))(Il2CppBase() + 0x24B7CC8))(this, P0);
	}

};

}
