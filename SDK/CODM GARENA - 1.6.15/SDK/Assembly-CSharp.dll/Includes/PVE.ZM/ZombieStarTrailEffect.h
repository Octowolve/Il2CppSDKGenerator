#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieStarTrailEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieStarTrailEffect"));
	}

	template <typename T = uintptr_t> T& Trail() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tween() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& valid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTrailFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZombieStarTrailEffect*))(Il2CppBase() + 0x4067528))(this);
	}
	template <typename T = void> T OnTrailFinished() {
		return ((T (*)(ZombieStarTrailEffect*))(Il2CppBase() + 0x406776C))(this);
	}
	template <typename T = void> T Play(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(ZombieStarTrailEffect*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4067864))(this, from, to);
	}

};

}
