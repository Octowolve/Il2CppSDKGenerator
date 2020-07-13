#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Zone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Zone"));
	}

	template <typename T = bool> T& startZone() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AdjacentZoneGroups() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlayerSpawnSpotGroups() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AISpawnSpotGroups() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InteractiveObjectGroups() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& adjacentZones() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& playerSpawnSpots() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& aiSpawnSpotList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& interactiveObjectList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_SyncInteractiveEvent() {
		return ((T (*)(Zone*))(Il2CppBase() + 0x33CCC68))(this);
	}

};

}
