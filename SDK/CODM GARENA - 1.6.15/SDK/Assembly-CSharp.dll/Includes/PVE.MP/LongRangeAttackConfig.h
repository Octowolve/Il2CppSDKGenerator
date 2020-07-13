#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class LongRangeAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "LongRangeAttackConfig"));
	}

	template <typename T = float> T& damageWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& damageLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& damageTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_animDuration() {
		return ((T (*)(LongRangeAttackConfig*))(Il2CppBase() + 0x4600F98))(this);
	}

};

}
