#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SummonGhostFireConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SummonGhostFireConfig"));
	}

	template <typename T = uintptr_t> T& wispPreset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& summonCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& summonAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& summonTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& summonRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_wispRoleID() {
		return ((T (*)(SummonGhostFireConfig*))(Il2CppBase() + 0x435B734))(this);
	}
	template <typename T = float> T get_animDuration() {
		return ((T (*)(SummonGhostFireConfig*))(Il2CppBase() + 0x435B818))(this);
	}

};

}
