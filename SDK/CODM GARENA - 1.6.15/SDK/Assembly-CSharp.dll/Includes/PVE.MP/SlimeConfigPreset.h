#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SlimeConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SlimeConfigPreset"));
	}

	template <typename T = float> T& growDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& explosionDamage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& explosionDamageRadius() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& touchDamage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& touchDamageRadius() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& slowDownRatio() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
