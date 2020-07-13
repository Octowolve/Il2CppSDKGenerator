#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DoorAssistantVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DoorAssistantVolume"));
	}

	template <typename T = float> T& AffectAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AffectForce() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T GetAcceleration(uintptr_t pawn) {
		return ((T (*)(DoorAssistantVolume*, uintptr_t))(Il2CppBase() + 0x41BE96C))(this, pawn);
	}
	template <typename T = Il2CppVector3> T GetTargetPosition() {
		return ((T (*)(DoorAssistantVolume*))(Il2CppBase() + 0x41BEC5C))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetAcceleration(uintptr_t P0) {
		return ((T (*)(DoorAssistantVolume*, uintptr_t))(Il2CppBase() + 0x41BED30))(this, P0);
	}

};

}
