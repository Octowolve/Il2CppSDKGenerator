#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class TreadConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "TreadConfig"));
	}

	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& attackInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(TreadConfig*))(Il2CppBase() + 0x435DA34))(this);
	}

};

}
