#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DeathSwingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DeathSwingConfig"));
	}

	template <typename T = uintptr_t> T& prepareAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& damagePerSecond() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& swingRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& swingDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& endSwingAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& restTimeDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& restFinishAnim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& swingMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(DeathSwingConfig*))(Il2CppBase() + 0x45FE140))(this);
	}
	template <typename T = float> T get_endSwingAnimTime() {
		return ((T (*)(DeathSwingConfig*))(Il2CppBase() + 0x45FE150))(this);
	}
	template <typename T = float> T get_swingAndRestTimeDuration() {
		return ((T (*)(DeathSwingConfig*))(Il2CppBase() + 0x45FE160))(this);
	}
	template <typename T = float> T get_swingRestFinishTime() {
		return ((T (*)(DeathSwingConfig*))(Il2CppBase() + 0x45FE190))(this);
	}

};

}
