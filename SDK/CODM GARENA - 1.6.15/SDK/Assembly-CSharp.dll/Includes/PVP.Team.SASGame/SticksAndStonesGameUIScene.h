#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.SASGame {

class SticksAndStonesGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.SASGame", "SticksAndStonesGameUIScene"));
	}

	template <typename T = bool> T& bFirstCheckCD() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBloodHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t message) {
		return ((T (*)(SticksAndStonesGameUIScene*, uintptr_t))(Il2CppBase() + 0x34BDF70))(this, message);
	}
	template <typename T = void> T CreateBloodHUD() {
		return ((T (*)(SticksAndStonesGameUIScene*))(Il2CppBase() + 0x34BE250))(this);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(SticksAndStonesGameUIScene*, uintptr_t))(Il2CppBase() + 0x34BE39C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(SticksAndStonesGameUIScene*, uintptr_t))(Il2CppBase() + 0x34BE7A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateBloodHUD() {
		return ((T (*)(SticksAndStonesGameUIScene*))(Il2CppBase() + 0x34BE7B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncInventoryBag(uintptr_t P0) {
		return ((T (*)(SticksAndStonesGameUIScene*, uintptr_t))(Il2CppBase() + 0x34BE7B8))(this, P0);
	}

};

}
