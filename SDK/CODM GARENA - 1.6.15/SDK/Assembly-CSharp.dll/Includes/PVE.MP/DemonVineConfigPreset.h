#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DemonVineConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DemonVineConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& twineRadius() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& twineDamage() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& whipRadius() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& whipDamage() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& TwinePrepareAnimDuration() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& TwinePullAnimDuration() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& TwineEndAnimDuration() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& whipAnim() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& WhipDamageTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& vine1POffset() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppQuaternion> T& vine1PRotation() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(DemonVineConfigPreset*))(Il2CppBase() + 0x45FE5F4))(this);
	}
	template <typename T = float> T get_WhipAnimDuration() {
		return ((T (*)(DemonVineConfigPreset*))(Il2CppBase() + 0x45FE604))(this);
	}

};

}
