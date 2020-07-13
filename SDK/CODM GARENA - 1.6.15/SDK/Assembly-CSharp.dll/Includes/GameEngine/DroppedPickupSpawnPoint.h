#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DroppedPickupSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DroppedPickupSpawnPoint"));
	}

	template <typename T = uintptr_t> T& instigator() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& cacheLastConfirmItemId() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickupConfirmed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DroppedPickupSpawnPoint*, uintptr_t))(Il2CppBase() + 0x51E8850))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(DroppedPickupSpawnPoint*, uintptr_t))(Il2CppBase() + 0x51E8940))(this, other);
	}
	template <typename T = void> T PickupConfirmed() {
		return ((T (*)(DroppedPickupSpawnPoint*))(Il2CppBase() + 0x51E8A80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(DroppedPickupSpawnPoint*, uintptr_t))(Il2CppBase() + 0x51E8EB8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(DroppedPickupSpawnPoint*, uintptr_t))(Il2CppBase() + 0x51E8EC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PickupConfirmed() {
		return ((T (*)(DroppedPickupSpawnPoint*))(Il2CppBase() + 0x51E8EC8))(this);
	}

};

}
