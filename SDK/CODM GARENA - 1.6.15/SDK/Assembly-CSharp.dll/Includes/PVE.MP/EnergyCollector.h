#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class EnergyCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "EnergyCollector"));
	}

	template <typename T = uintptr_t> T& triggerVolumeCollider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& collectorTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& energyProjPreset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& headCollectEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInside() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectEnergy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x45FE9D8))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EnergyCollector*))(Il2CppBase() + 0x45FEA58))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EnergyCollector*))(Il2CppBase() + 0x45FEBF0))(this);
	}
	template <typename T = bool> T IsPawnInside(uintptr_t pawn) {
		return ((T (*)(EnergyCollector*, uintptr_t))(Il2CppBase() + 0x45FEC94))(this, pawn);
	}
	template <typename T = void> T CollectEnergy(uintptr_t pawn) {
		return ((T (*)(EnergyCollector*, uintptr_t))(Il2CppBase() + 0x45FF084))(this, pawn);
	}

};

}
