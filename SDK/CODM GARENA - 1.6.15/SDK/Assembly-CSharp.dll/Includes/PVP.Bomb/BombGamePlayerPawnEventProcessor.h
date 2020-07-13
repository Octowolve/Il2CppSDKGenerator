#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGamePlayerPawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGamePlayerPawnEventProcessor"));
	}

	template <typename T = float> T& LastUseBombTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& UseBombInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventBeforePawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveC4BombWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlantPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerInterruptUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveC4BombWhenBombHasBeenPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_BombPlayerPawn() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x408420C))(this);
	}
	template <typename T = void> T RegisterEventBeforePawnStart() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x40842C4))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x40843D8))(this);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x4084530))(this);
	}
	template <typename T = void> T GiveC4BombWeapon(uintptr_t Msg) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4084648))(this, Msg);
	}
	template <typename T = void> T OnLocalPlayerUseItem(uintptr_t Msg) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x408470C))(this, Msg);
	}
	template <typename T = Il2CppVector3> T GetPlantPosition(uintptr_t pawn) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4084C28))(this, pawn);
	}
	template <typename T = void> T OnLocalPlayerInterruptUseItem(uintptr_t Msg) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4084E74))(this, Msg);
	}
	template <typename T = void> T OnRemoveC4BombWhenBombHasBeenPlanted(uintptr_t Msg) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4085060))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventBeforePawnStart() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x40852CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x40852D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(BombGamePlayerPawnEventProcessor*))(Il2CppBase() + 0x40852DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerUseItem(uintptr_t P0) {
		return ((T (*)(BombGamePlayerPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x40852E4))(this, P0);
	}

};

}
