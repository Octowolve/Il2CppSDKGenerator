#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class TentacleGrabConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "TentacleGrabConfig"));
	}

	template <typename T = float> T& tentacleFanAngle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& tentacleGrabSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& releaseWeakPointDamage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& groundStabDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& groundStabDamage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& grabDamageValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& grabDamageInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
