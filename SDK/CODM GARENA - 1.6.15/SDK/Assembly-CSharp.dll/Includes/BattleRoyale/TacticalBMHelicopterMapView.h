#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalBMHelicopterMapView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalBMHelicopterMapView"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& IdleHelicoptersPos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& UsedHelicoptersPos() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> T& helicopterCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bNeedToUpdate() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTacticalSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHelicopterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TacticalBMHelicopterMapView*))(Il2CppBase() + 0x35ADD10))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalBMHelicopterMapView*))(Il2CppBase() + 0x35AE0CC))(this);
	}
	template <typename T = void> T UpdateTacticalSpriteList() {
		return ((T (*)(TacticalBMHelicopterMapView*))(Il2CppBase() + 0x35AE190))(this);
	}
	template <typename T = void> T SyncHelicopterPosition(Il2CppList<Il2CppVector3>* positions, Il2CppList<bool>* hasBeenUsed, bool bClearCachedResult) {
		return ((T (*)(TacticalBMHelicopterMapView*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x35AE740))(this, positions, hasBeenUsed, bClearCachedResult);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalBMHelicopterMapView*))(Il2CppBase() + 0x35AEB78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalBMHelicopterMapView*))(Il2CppBase() + 0x35AEB80))(this);
	}

};

}
