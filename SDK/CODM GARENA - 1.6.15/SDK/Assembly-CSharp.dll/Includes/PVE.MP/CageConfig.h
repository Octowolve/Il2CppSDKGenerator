#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class CageConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "CageConfig"));
	}

	template <typename T = uintptr_t> T& treeForkPreset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& preCageAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& endCageAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cageSpawnAnim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_AgentRoleId() {
		return ((T (*)(CageConfig*))(Il2CppBase() + 0x45FD118))(this);
	}
	template <typename T = float> T get_preCageTime() {
		return ((T (*)(CageConfig*))(Il2CppBase() + 0x45FD1FC))(this);
	}
	template <typename T = float> T get_endCageTime() {
		return ((T (*)(CageConfig*))(Il2CppBase() + 0x45FD20C))(this);
	}
	template <typename T = float> T get_cageSpawnTime() {
		return ((T (*)(CageConfig*))(Il2CppBase() + 0x45FD21C))(this);
	}
	template <typename T = float> T get_totalDuration() {
		return ((T (*)(CageConfig*))(Il2CppBase() + 0x45FD22C))(this);
	}

};

}
