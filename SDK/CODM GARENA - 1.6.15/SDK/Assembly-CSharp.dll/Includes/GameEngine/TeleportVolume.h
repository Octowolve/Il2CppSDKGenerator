#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TeleportVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TeleportVolume"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& targetSpot() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& snapToGround() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(TeleportVolume*, uintptr_t))(Il2CppBase() + 0x3434BB0))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(TeleportVolume*, uintptr_t))(Il2CppBase() + 0x3434E90))(this, P0);
	}

};

}
