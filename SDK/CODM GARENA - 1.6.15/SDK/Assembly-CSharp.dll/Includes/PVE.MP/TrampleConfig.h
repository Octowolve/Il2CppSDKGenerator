#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class TrampleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "TrampleConfig"));
	}

	template <typename T = float> T& triggerFanAngle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& triggerFanRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& attenuationRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& maxDamageValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& minDamageValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& trampleAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackAnimLen() {
		return ((T (*)(TrampleConfig*))(Il2CppBase() + 0x435D978))(this);
	}

};

}
