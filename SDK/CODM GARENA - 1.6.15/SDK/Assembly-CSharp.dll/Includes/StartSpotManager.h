#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartSpotManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartSpotManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& StartSpotList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SphereList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& TestBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& isRespawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bShowSphere() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectAllRandomStartSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGuaderColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTraitorColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRespawnResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T CollectAllRandomStartSpots(uintptr_t prefabObject) {
		return ((T (*)(StartSpotManager*, uintptr_t))(Il2CppBase() + 0x395028C))(this, prefabObject);
	}
	template <typename T = void> T ChangeGuaderColor() {
		return ((T (*)(StartSpotManager*))(Il2CppBase() + 0x3950BF4))(this);
	}
	template <typename T = void> T ChangeTraitorColor() {
		return ((T (*)(StartSpotManager*))(Il2CppBase() + 0x3950E2C))(this);
	}
	template <typename T = void> T SpawnSphere(uintptr_t prefabObject) {
		return ((T (*)(StartSpotManager*, uintptr_t))(Il2CppBase() + 0x395080C))(this, prefabObject);
	}
	template <typename T = void> T OnRespawnResponse(int32_t x, int32_t y, int32_t z, uint16_t score, unsigned char camp, uint16_t RespawnTimes) {
		return ((T (*)(StartSpotManager*, int32_t, int32_t, int32_t, uint16_t, unsigned char, uint16_t))(Il2CppBase() + 0x3951064))(this, x, y, z, score, camp, RespawnTimes);
	}

};

}
