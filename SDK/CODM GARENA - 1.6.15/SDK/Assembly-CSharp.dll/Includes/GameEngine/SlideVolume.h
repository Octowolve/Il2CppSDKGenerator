#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SlideVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SlideVolume"));
	}

	template <typename T = uintptr_t> T& DirectionActor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetSpeed() {
		return ((T (*)(SlideVolume*))(Il2CppBase() + 0x33F43AC))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity() {
		return ((T (*)(SlideVolume*))(Il2CppBase() + 0x33F4454))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity_1(Il2CppVector3 currentVelocity, Il2CppVector3 currentPosition) {
		return ((T (*)(SlideVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x33F4678))(this, currentVelocity, currentPosition);
	}
	template <typename T = Il2CppVector3> T GetTargetPosition() {
		return ((T (*)(SlideVolume*))(Il2CppBase() + 0x33F47E8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetSpeed() {
		return ((T (*)(SlideVolume*))(Il2CppBase() + 0x33F4A60))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetVelocity() {
		return ((T (*)(SlideVolume*))(Il2CppBase() + 0x33F4A68))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetVelocity_1(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(SlideVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x33F4A7C))(this, P0, P1);
	}

};

}
