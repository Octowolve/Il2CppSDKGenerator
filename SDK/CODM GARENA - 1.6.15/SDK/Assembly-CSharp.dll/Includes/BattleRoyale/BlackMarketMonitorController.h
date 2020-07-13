#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketMonitorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketMonitorController"));
	}

	template <typename T = uintptr_t> T& monitor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHelicopterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BlackMarketMonitorController*))(Il2CppBase() + 0x24B8528))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BlackMarketMonitorController*))(Il2CppBase() + 0x24B8634))(this);
	}
	template <typename T = void> T SyncHelicopterPosition(Il2CppList<Il2CppVector3>* positions, Il2CppList<bool>* bHasBeenUsed, bool bClearCachedResult) {
		return ((T (*)(BlackMarketMonitorController*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x24B86D8))(this, positions, bHasBeenUsed, bClearCachedResult);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BlackMarketMonitorController*))(Il2CppBase() + 0x24B8818))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BlackMarketMonitorController*))(Il2CppBase() + 0x24B8820))(this);
	}

};

}
