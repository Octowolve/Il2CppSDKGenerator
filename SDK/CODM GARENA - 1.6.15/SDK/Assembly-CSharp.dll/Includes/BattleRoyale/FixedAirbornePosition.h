#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class FixedAirbornePosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "FixedAirbornePosition"));
	}

	template <typename T = float> T& RefreshCD() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Eject_delay_ms() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Start_velocity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Eject_acceleration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Depart_velocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Depart_acceleration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Fall_time_ms() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& Half_extent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(FixedAirbornePosition*))(Il2CppBase() + 0x3D4EC8C))(this);
	}

};

}
