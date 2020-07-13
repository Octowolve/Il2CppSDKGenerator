#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class LavaPoolConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "LavaPoolConfig"));
	}

	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& projectilePreset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& projConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& lavaDamagePerSecond() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lavaDamageRadius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lavaLifeSpan() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& lavaAssetID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& createLavaRock() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& nodeSelectAngleRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& nodeSelectMinDistance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& lavaMinDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepAnimDuration() {
		return ((T (*)(LavaPoolConfig*))(Il2CppBase() + 0x4600D08))(this);
	}
	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(LavaPoolConfig*))(Il2CppBase() + 0x4600D18))(this);
	}

};

}
